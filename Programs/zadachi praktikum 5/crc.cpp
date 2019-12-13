#include <iostream>

int main()
{
    int count = 0;

    for (int i = 102; i <= 987; i++) {
        if (i%10 != i/10%10 &&
        i%10 != i/100 &&
        i/10%10 != i/100) {
            std::cout<<i<<" ";
            count++;
        }
    }

    std::cout<<std::endl;
    std::cout<<"the number of numbers are: "<<count;

    return 0;
}