#include <iostream>
#include <math.h>

int main()
{
    int n;
    std::cin>>n;

    int N=n;

    int count_numbers = 0;

    while (n != 0) {
        count_numbers++;
        std::cout<<n%10;
        n /= 10;
    }


    

        std::cout<<std::endl;
        std::cout<<count_numbers;

    return 0;
}