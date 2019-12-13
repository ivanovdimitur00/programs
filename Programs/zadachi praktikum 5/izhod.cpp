#include <iostream>

int main()
{
    int sum;
    std::cin>>sum;

    for (int i = 101; i <= 999; i++)
    {
        if (i/100 + i/10%10 + i%10 == sum) {
            std::cout<<i<<" ";
        }
    }

    return 0;
}