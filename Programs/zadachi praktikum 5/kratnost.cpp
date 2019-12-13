#include <iostream>

int main()
{
    unsigned int n;
    std::cin>>n;

    for (int i = n;i >= 10; i--) {
        if (i % 7 == 0) {
            std::cout<<i<<" ";
        }
    }
    return 0;
}