#include <iostream>
#include <assert.h>

int sum (int n) { //tradicionna rekursiq
    
    assert (n >= 0);

    if (n == 0) {
        return 0;
    }
    return n + sum(n-1);
}

int sum_tail (int n,int sum) { //opashkova rekursiq
    
    assert (n >= 0);

    if (n == 0) {
        return sum;
    }
    return sum_tail(n-1, sum + n);
}

int main()
{
    std::cout<<sum(100)<<std::endl;
    
    std::cout<<sum_tail(100,0)<<std::endl;
    return 0;
}