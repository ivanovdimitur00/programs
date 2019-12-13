#include <iostream>
#include <string.h>
#include <math.h>

void  first_matching_symbols_pos(char* sent)
{
    bool match = false;
    char symbol;
    for (int i = 0; i < strlen(sent) - 1; i++) {
        for (int j = i + 1; j < strlen(sent); j++) {
            if (sent[i] == sent[j]) {
                std::cout<<i+1<<"-"<<j+1;
                match = true;
                }
                if (match) break; // if (match ==true)
            }
            
            if (match) break;
        }

        
    if (!match) { // if (match == false)
        std::cout<<"no such symbols!";
    };
}

int sum_of_main_diag(int num[][23],int size) {
    
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += num[i][i];
    }

    return sum;
}


bool check_for_dom_diag_matrix(int num[][23],int size) {
    
    int sum = sum_of_main_diag(num,size);
    bool is_true = true;

    for (int i = 0; i < size; i++){
        if (fabs(num[i][i]) < sum) {
            is_true = false;
        }
    }
    
    return is_true;
}

void binary_representation(int n, int k) {
    
    if (k > 1) {
        binary_representation(n/2,k-1);
    }

    std::cout<<n%2;
}

char* rowWithSymbol(char matrix[][100], int rows, int columns, char symbol) {
    for (int i = 0 ; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == symbol) {
                return matrix[i];
            }
        }
    }
    return nullptr;
}


int main()
{

    //zadacha 1 - first pair matching symbols


    /*
    char sentence[206];
    int length;

    std::cin>>sentence;

    // length = strlen(sentence);

    first_matching_symbols_pos(sentence);
    */


    //zadacha 2 - diag dominant matrix;


    /*
    int numbers[23][23];
    int N;

    std::cin>>N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin>>numbers[i][j];
        }
    }

    std::cout<<check_for_dom_diag_matrix(numbers,N);
    */


    //zadacha 3 - binary representation of a number with recursion

    /*
    int N,K;

    std::cin>>N>>K;

    if (N >= pow(2,K)) {
        std::cout<<"cannot represent " 
                 <<N
                 <<" with "
                 <<K
                 <<" digits.";
        return 0;
    }

    binary_representation(N,K);
    */


    // zad 4 - symbol in matrix

    char symbols[100][100];
    int rows,columns;

    char symbol;

    std::cin>>symbol;

    std::cin>>rows>>columns;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin>>symbols[i][j];
        }
    }
    
    char* address = rowWithSymbol(symbols,rows,columns,symbol);

    std::cout<<&address;

    return 0;
}