#include <iostream>

const int N = 20;

void create_matrix_1_by_hand (int M[][N], int size) {
    for (int i = 0; i < size; i ++) {

        for (int j = 0; j < size; j ++) {
            std::cin>>M[i][j];
        }
    }
}


void create_matrix_1_automatically_standard (int M[][N], int size, int num) {
    for (int i = 0; i < size; i ++) {

        for (int j = 0; j < size; j ++) {
            M[i][j] = num;
            num++;
        }
    }
}


void print_matrix_1 (int M[][20], int size) {
    for (int i = 0; i < size; i ++) {

        for (int j = 0; j < size; j ++) {
            std::cout<<M[i][j]<<' ';
        }
        std::cout<<std::endl;
    }
}


void print_matrix_1_90DEGpositive (int M[][N],int size) {
    for (int i = size - 1; i >= 0; i --) {

        for (int j = 0; j < size; j ++) {
            std::cout<<M[j][i]<<' ';
        }
        std::cout<<std::endl;
    }
}


void create_matrix_1_automatically_10GapRow_reset (int M[][20],int size, int num){
    for (int i = 0; i < size; i ++) {

        for (int j = 0; j < size; j ++) {
            M[i][j] = num;
            num++;
        }
        num = num - size + 10;
    }
}


void print_odd_sum_col1and3and5_totalSum (int M[][20], int size) {
        int total_sum = 0;

        for (int i = 0; i < size; i += 2) {
            int sum = 0;

            for (int j = 0; j < size; j ++) {
                std::cout<<M[j][i]<<",";
                sum = sum + M[j][i];
            }

            std::cout<<"The sum of the numbers in the column is: "<<sum<<std::endl;
            total_sum = total_sum + sum;
        }
        std::cout<<"The total sum of odd columns is: "<<total_sum;
    }


   void check_magic_square ( int M[][20] , int size) {

        int  sum_row = 0;
        int sum_column = 0;
        int index = 0;
        int s_row[20];
        int s_column[20];

        for (int i = 0; i < size; i ++) {

            sum_row = 0;
            sum_column = 0;

        for (int j = 0; j < size; j ++) {
            sum_row += M[j][i];
            sum_column += M[i][j];
        }

        s_row[index] = sum_row;
        s_column[index] = sum_column;
        index++;
    } 

    // std::cout<<index<<std::endl;

    bool magic_square = true;

    for (int i = 0; i < index; i ++) {
        for (int j = 0; j < index; j ++) {
           if (s_row[i] != s_row[j]) {
               magic_square = false;
           } 
        }
    }

    if (magic_square == true) {
        std::cout<<"yes"<<std::endl;
    } else {
        std::cout<<"no"<<std::endl;
    }
}


void selection_sort_decreasing(char num[100], int size) {
   
    int max;
    int max_index;

    for (int i = 0; i < size - 1; i++) {
            max = num[i];

        for (int j = i+1; j < size; j++) {
            if (max < num[j]) {
                max = num[j];
                max_index = j;
            }
        }
        int temp;

        temp = num[i];
        num[i] = num[max_index];
        num[max_index] = temp;

    }
}


void transposition_matrix_1 (int M[][20], int size) {
    for (int i = 0; i < size - 1; i ++) {

        for (int j = i+1; j < size; j ++) {
           int swap;

            swap = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = swap;
        }
        
    }
}


bool check_diff_diags_main (int M[][20],int size){

    bool different_elements_main_diag = true;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1 ; j < size; j ++ ) {
            if (M[i][i] == M[j][j]) {
                different_elements_main_diag = false;
            }
        }
    }

    bool different_elements_under_main = true;
    bool different_elements_over_main = true;
    int numbers_under_main[size - 1];
    int numbers_over_main[size - 1];
    int index = 0;

    for (int j = 0; j < size - 2; j++) {  //obhozdame vseki syshtestvuvasht diagonal okolo glavniq
        
        for (int i = j; i < size - 1; i++) { //zapazwame chislata w masiv 
        numbers_under_main[index] = M[i+1][i-j];
        numbers_over_main[index] = M[i-j][i+1];
        index ++;
    }

    for (int a = 0; a < index - 1; a++) { // proverqwame dali sa razlichni

        for (int b = a + 1; b < index; b++) {

            if (numbers_under_main[a] == numbers_under_main[b]) {
                different_elements_under_main = false;
                }
            if (numbers_over_main[a] == numbers_over_main[b]) {
                different_elements_over_main = false;
                }

            }
        }
        index = 0;
    }

    if (different_elements_main_diag == true ||
        different_elements_under_main == true ||
        different_elements_over_main == true) {
            return true;
        } else {
            return false;
        }
}

bool check_diff_diags_secondary (int M[][20],int size) {

    bool different_elements_secondary_diag = true;

    for (int i = size - 1; i > 1; i--) {
        for (int j = 0; j < size; j ++ ) {
            if (M[i][size-1-i] == M[i-j-1][j+1]) {
                different_elements_secondary_diag = false;
            }
        }
    }

    bool different_elements_under_secondary = true;
    bool different_elements_over_secondary = true;
    int numbers_under_secondary[size - 1];
    int numbers_over_secondary[size - 1];
    int index = 0;

    for (int j = 0; j < size - 2; j++) {  //obhozdame vseki syshtestvuvasht diagonal okolo glavniq
        
        for (int i = j; i < size - 1; i++) { //zapazwame chislata w masiv 
        numbers_under_secondary[index] = M[size-1-i][i+1];
        numbers_over_secondary[index] = M[size-2-i][i];
        index ++;
    }

    for (int a = 0; a < index - 1; a++) { // proverqwame dali sa razlichni

        for (int b = a + 1; b < index; b++) {

            if (numbers_under_secondary[a] == numbers_under_secondary[b]) {
                different_elements_under_secondary = false;
                }
            if (numbers_over_secondary[a] == numbers_over_secondary[b]) {
                different_elements_over_secondary = false;
                }

            }
        }
        index = 0;
    }

    if (different_elements_secondary_diag == true ||
        different_elements_under_secondary == true ||
        different_elements_over_secondary == true) {
            return true;
        } else {
            return false;
        }
}


void create_constant_matrix_1 (int M[][20], int size, int num){
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j ++) {
            M[i][j] = num;
        }
    }
}


void
    multiply_matrices (int M1[][20],int M2[][20],int size, int Mult_M[][20]){
       
        for (int i = 0 ; i < size; i ++) { //obikalqne na vseki element ot matricata
            for (int j = 0; j < size; j++) {

                int sum = 0;

                for (int k = 0; k < size; k++) { // obikalq suotwetniq red ili kolona;
                        sum = sum + (M1[i][k] * M2[k][j]);
                }
                Mult_M[i][j] = sum;
            }
        }
    }



int main ()
{
    int matrix_1_size;
    int matrix_1_number = 1;
    int matrix_1_number_static = 5;
    int matrix_1_number_10GapRow = 11;

    std::cout<<"Enter the size of the matrix_1: ";
    std::cin>>matrix_1_size;

    int matrix_1[N][N]; //kvadratni matrici
    int matrix_2[N][N];
    int multiplied_matrix[N][N];

    // create_matrix_1_by_hand(matrix_1, matrix_1_size);
    
    // print_matrix_1 (matrix_1, matrix_1_size);


    // 1 zadacha 

    /*
    create_matrix_1_automatically_standard (matrix_1, matrix_1_size, matrix_1_number);

    print_matrix_1_90DEGpositive (matrix_1, matrix_1_size);
    */

    //2 zad

        /*
        create_matrix_1_automatically_10GapRow_reset (matrix_1,matrix_1_size,matrix_1_number_10GapRow);

        print_matrix_1 (matrix_1, matrix_1_size);

        print_odd_sum_col1and3and5_totalSum (matrix_1,matrix_1_size);
        */

    // 3 zad

    /*
    create_matrix_1_automatically_standard (matrix_1, matrix_1_size, matrix_1_number); //NO

    create_matrix_1_by_hand (matrix_1,matrix_1_size); // 3x3 (samo trojki) YES

    check_magic_square (matrix_1,matrix_1_size);
    */

    //4 zad

    /*
    char n;
    char numbers[100] = {0};
    int index = 0;

    do {
        std::cin>>n;
        if (n != '#') {
            numbers[index] = n;
            index++;
        }
    } while (n != '#');

    selection_sort_decreasing(numbers,index);

    for (int i = 0; i < index; i ++) {
        std::cout<<numbers[i]<<" ";
    }
    */

    //5 zad

    /*
    create_matrix_1_automatically_standard (matrix_1, matrix_1_size, matrix_1_number);
    
    print_matrix_1 (matrix_1, matrix_1_size);
    std::cout<<std::endl;

    transposition_matrix_1 (matrix_1,matrix_1_size);

    print_matrix_1 (matrix_1, matrix_1_size);
    */

   //6 zad

    /*
    // create_matrix_1_automatically_standard (matrix_1, matrix_1_size, matrix_1_number); // yes
    
    create_constant_matrix_1 (matrix_1,matrix_1_size,matrix_1_number_static);

    if (check_diff_diags_main (matrix_1,matrix_1_size) == true || 
        check_diff_diags_secondary (matrix_1,matrix_1_size) == true) {
        std::cout<<"yes";
    } else {
        std::cout<<"no";
    }
    */

   // 7 zad

    create_matrix_1_automatically_standard (matrix_1,matrix_1_size,matrix_1_number);

    // print_matrix_1(matrix_1,matrix_1_size);

    create_constant_matrix_1 (matrix_2,matrix_1_size,matrix_1_number_static);

    // print_matrix_1(matrix_2,matrix_1_size);

    multiply_matrices (matrix_1,matrix_2,matrix_1_size,multiplied_matrix);

    print_matrix_1 (multiplied_matrix,matrix_1_size);
   
    return 0;
}