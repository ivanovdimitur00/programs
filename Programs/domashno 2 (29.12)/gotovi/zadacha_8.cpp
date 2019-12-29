#include <iostream>
#include <cmath>


int sum_of_row(int num[][23],int size,int a) {
    
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (i != a) {
            sum = sum + fabs(num[a][i]);
        }
    }

    return sum;
}


void check_for_dom_diag_matrix(int num[][23],int size) {

    for (int i = 0; i < size; i++){
        int sum = sum_of_row(num,size,i);
        if (fabs(num[i][i]) < sum) {
            std::cout<<"false";
            return;
        }
    }
    
    std::cout<<"true";
}



int main()
{
    int numbers[23][23];
    int N;

    std::cin>>N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin>>numbers[i][j];
        }
    }

    check_for_dom_diag_matrix(numbers,N);

    return 0;
}