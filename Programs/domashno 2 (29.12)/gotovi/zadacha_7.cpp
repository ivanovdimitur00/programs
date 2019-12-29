#include <iostream>
#include <cstring>

int main()
{
    char string[1001];
    int k;

    std::cin>>string;
    std::cin>>k;

    for (int i = 0; i <= strlen(string) - k; i++) {
        for (int j = 0; j < k; j ++) {
            std::cout<<string[i + j];
        }
        std::cout<<std::endl;
    }

    std::cout<<string;

    return 0;
}