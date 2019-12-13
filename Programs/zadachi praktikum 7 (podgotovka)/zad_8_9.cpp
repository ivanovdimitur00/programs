#include <iostream>
// using namespace std;

void create_matrix_type1 (int size,int new_M[][20]){

    //main diagonal
    int num = 0;

    for (int i = 0; i < size; i++) {
            new_M[i][i] = 0;
        }
        num++;

        for (int j = 0; j < size - 1; j++) {  //obhozdame vseki syshtestvuvasht diagonal okolo glavniq
        
        for (int i = j; i < size; i++) {
        new_M[i+1][i-j] = num;
        new_M[i-j][i+1] = num;
        }
        num++;
    }
}


   void print_matrix_square (int M[][20],int size) {
       
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                std::cout<<M[i][j];
            }
            std::cout<<std::endl;
        }
    }


   void create_matrix_type2 (int rows,int columns,int new_M[][20]) {
      
       int num = 1;

           for (int i = rows; i > 0 ; i --) {// pod glavniqt diagonal na lqwata strana
           for (int j = 0; j < rows-i + 1; j++) {
               new_M[i][j]= num;
               num++;
           }
       }

        for (int i = 0; i < columns-rows ; i ++) {  // mezdu glavniqt diagonal na dwete strani
                   for (int k = 0; k < rows; k ++) {
                    new_M[k+i][k+i+1]= num;
                    num++;
                   }
               
           }

           for (int i = 0; i < rows - 1 ; i ++) { // nad glavniqt diagonal na dqsnata strana
           for (int j = 0; j < rows - 1 - i; j++) {
               new_M[i+j][rows - 1 + j]= num;
               num++;
                }
            }
       
   }

   void print_matrix_rectangle (int rows,int columns,int new_M[][20]){
      
       for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                std::cout<<new_M[i][j]<<' ';
            }
            std::cout<<std::endl;
        }
    }



int main()
{
    int new_matrix[20][20];
    int matrix_size;
    int n;
    int m;

    // zad 8

    /*
    std::cout<<"enter matrix size: ";
    std::cin>>matrix_size;

    create_matrix_type1 (matrix_size,new_matrix);

    print_matrix_square (new_matrix,matrix_size);
    */

   //zad 9

    std::cout<<"enter matrix rows: ";
    std::cin>>m;

    std::cout<<"enter matrix columns: ";
    std::cin>>n;

    for (int i = 0 ; i < m; i ++) {
        for (int j = 0 ; j< n ; j++) {
            new_matrix[i][j] = 0;
        }
    }

    create_matrix_type2 (m,n,new_matrix);

    print_matrix_rectangle (m,n,new_matrix);

}