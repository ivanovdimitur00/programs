// errors: 2 (if in func void) + examples missing.
#include <iostream>

void read(char matrix[][5], char* string) {
    
    int row = 0;
    int column = 0;
    int index = 0;

    string[index] = matrix[row][column];
    index++;
    
    bool left_el = true;
    bool down_el = true;

    while (left_el == true || down_el == true) {
    
        left_el = false;
        down_el = false;

        if (matrix[row][column] - matrix[row][column + 1] == -1 && column + 1 < 5) {  // prev: matrix[row][column] - matrix[row][column + 1] == 1
            string[index] = matrix[row][column + 1];
            index++;
            column++;
            left_el = true;
        }

        if (matrix[row][column] - matrix[row + 1][column] == -1 && row + 1 < 5) { // prev: matrix[row][column] - matrix[row + 1][column] == 1
            string[index] = matrix[row + 1][column];
            index++;
            row++;
            down_el = true;
        }  
    }
}


int main()
{
    char A[5][5];
    char s[11] = {' '};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin>>A[i][j];
        }
    }

    read(A,s);

    std::cout<<s<<std::endl;

    return 0;
}