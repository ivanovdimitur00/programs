#include <iostream>


bool element_max_row (int matrix[][20], int a, int cols, int el) {
    
    int max_el = matrix[a][0];
    
    for (int i = 1; i < cols; i++) {
        if (max_el < matrix[a][i]) {
            max_el = matrix[a][i];
        }
    }
    if (max_el == el) {
        return true;
    } else {
        return false;
    }
}

bool element_min_column (int matrix[][20], int rows, int b, int el) {
    
    int min_el = matrix[0][b];
    
    for (int i = 1; i < rows; i++) {
        if (min_el > matrix[i][b]) {
            min_el = matrix[i][b];
        }
    }
    if (min_el == el) {
        return true;
    } else {
        return false;
    }
}


void sedlova_tochka (int matrix[][20], int rows, int cols) {
    
    bool has_point = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (element_max_row(matrix,i,cols,matrix[i][j]) &&
                element_min_column(matrix,rows,j,matrix[i][j])) {
                    std::cout<<"("
                             <<i
                             <<","
                             <<j
                             <<")";
                    std::cout<<std::endl;
                    has_point = true;
                }
        }
    }
    if (!has_point) {
        std::cout<<"There is no such point!";
    }
}

int main()
{
    int rows,columns;
    int matrix[20][20];

    std::cin>>rows>>columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin>>matrix[i][j];
        }
    }

    sedlova_tochka (matrix,rows,columns);

    return 0;
}