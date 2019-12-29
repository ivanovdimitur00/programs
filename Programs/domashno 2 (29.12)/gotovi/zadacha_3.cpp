#include <iostream>


bool check_if_bigger (int n, int k) {
    if (n < k) return true;
    else return false;
}


void check_if_equal(int n, int k) {
     std::cout<<1<<std::endl;
        std::cout<<"(";
        for (int i = 0; i < k-1; i++) {
            std::cout<<"1,";
        }
        std::cout<<"1"<<")"<<std::endl;
}


void check_with_diff1(int n, int i, int* vect){
            std::cout<<"(";
            vect[i] = 0;
        for (int j = 0; j < n; j++) {
           if (n-j == 1) {
               std::cout<<vect[j];
           }
           else {
               std::cout<<vect[j]<<",";
           } 
        }
        std::cout<<")"<<std::endl;
}

void reset(int* vect, int n) {
    for (int i = 0; i < n; i++) {
        vect[i] = 1;
    }
}


void nullify(int* vect, int n) {
    for (int i = 0; i < n; i++) {
        vect[i] = 0;
    }
}


int calculate_combinations(int n,int k) {
    int mult = 1;
    for (int i = n; i > k; i--) {
        mult = mult*i;
    }

    return mult;
}


void check_with_bigger_diff(int n, int k,int* vectors) {
    std::cout<<calculate_combinations(n,k)<<std::endl;
}


void check(int n, int i, int* vect){
            std::cout<<"(";
            vect[i] = 1;
        for (int j = 0; j < n; j++) {
           if (n-j == 1) {
               std::cout<<vect[j];
           }
           else {
               std::cout<<vect[j]<<",";
           } 
        }
        std::cout<<")"<<std::endl;
}



int main()
{
    int n,k;

    std::cin>>n;
    std::cin>>k;

    int combinations = 1;

    if (check_if_bigger(n,k)) {
        std::cout<<0;
        return 0;
    }

    if (n == k) {
       check_if_equal(n,k);
       return 0;
    }

    int vectors[100];
    
    if (n - k == 1) {
        reset(vectors,n);
        std::cout<<n<<std::endl;

        for (int i = 0; i < n; i++) {
        
        check_with_diff1(n,i,vectors);
        reset(vectors,n);
        }
        return 0;
    }

    if (k == 1) {
        nullify(vectors,n);
        std::cout<<n<<std::endl;

        for (int i = 0; i < n; i++) {
            check (n,i,vectors);
            nullify(vectors,n);
        }

        return 0;
    }

    check_with_bigger_diff(n,k,vectors);


    return 0;
}