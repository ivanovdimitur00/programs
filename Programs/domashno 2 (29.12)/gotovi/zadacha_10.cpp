#include <iostream>


void reset_matrix(int matrix[][20], int new_matrix[][20], int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            new_matrix[i][j] = matrix[i][j];
        }
    }
}


void print_matrix(int new_matrix[][20], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout<<new_matrix[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
}


void swap(int& x, int& y) {
    char swap = x;
    x = y;
    y = swap;
}


void symmetrical_change_1 (int new_matrix[][20], int rows, int cols) {
    for (int i = 0; i < rows - 1; i ++) {
        for (int j = i + 1; j < cols; j++) {
            if (new_matrix[i][j] < new_matrix[j][i]) {
                swap(new_matrix[i][j],new_matrix[j][i]);
            }
        }
    }
}


void symmetrical_change_2 (int new_matrix[][20], int rows, int cols) {
    for (int i = 0; i < rows - 1; i ++) {
        for (int j = i + 1; j < cols; j++) {
            if (new_matrix[i][j] > new_matrix[j][i]) {
                swap(new_matrix[i][j],new_matrix[j][i]);
            }
        }
    }
}



int main()
{
    int rows,columns;
    int matrix[20][20];

    std::cin>>rows>>columns; // zadulzhitelno:  rows == columns

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin>>matrix[i][j];
        }
    }

    int new_matrix[20][20];
    std::cout<<std::endl;


    reset_matrix(matrix,new_matrix,rows,columns);
    symmetrical_change_1(new_matrix,rows,columns); // sprqmo uslovieto
    print_matrix(new_matrix,rows,columns);

    std::cout<<std::endl;

    reset_matrix(matrix,new_matrix,rows,columns);
    symmetrical_change_2(new_matrix,rows,columns); // sprqmo primera
    print_matrix(new_matrix,rows,columns);

    return 0;
}