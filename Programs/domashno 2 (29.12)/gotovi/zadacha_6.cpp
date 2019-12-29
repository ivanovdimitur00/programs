#include <iostream>
#include <cmath>

//idea : BFS za vsqka sreshnata nula (do izcherpvane na nulite- susedi)
// zapomnqme stojnostite of BFS. (obhod na podredba)
//proverqwame dali dadena stojnost e tochen kvadrat I e naj-golqma (izvezdame q).

//!! osnovni posoki: samo napred, po diagonal (napred i dolu) i dolu. !!

void BFS (int matrix[][10], int size,
          int* sizes_BFS, int ammount) {
    int list[100];

    int visited[10][10];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            visited[i][j] = 0;
        }
    }
    //...
}

void find_square(int* sizes_BFS, int ammount) {
    int max = sizes_BFS[0];

    for (int i = 1; i < ammount ; i++) {
        if (max < sizes_BFS[i] && typeid(sqrt(sizes_BFS[i])) == typeid(int))
        {
            max = sizes_BFS[i];
        }
    }
    // if (typeid(sqrt(max)) == typeid(int))
    // std::cout<<max;
}

void check_has_zero (int matrix[][10], int size) {
    
    bool has_zero = false;
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] == 0) {
                std::cout<<1;
                return;
            }
        }
    }
    std::cout<<0;
}


void check_all_zeros (int matrix[][10], int size) {
    
    bool all_zero = true;
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != 0 ) {
                all_zero = false;
            }
        }
    }
    if (all_zero) std::cout<<size*size;
}


bool check_all_zeros_true (int matrix[][10], int size) {
    
    bool all_zero = true;
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != 0 ) {
                all_zero = false;
            }
        }
    }
    return all_zero;
}


int main()
{   
    int n;

    std::cin>>n;

    int matrix[10][10];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            std::cin>>matrix[i][j];
        }
    }

    int sizes_BFS[100] = {0};
    int ammount = 0;

    if(check_all_zeros_true(matrix,n)) {
        check_all_zeros(matrix,n);
    } else {
        check_has_zero(matrix,n);
    }

    BFS(matrix,n,sizes_BFS,ammount);

    find_square(sizes_BFS,ammount);



    return 0;
}