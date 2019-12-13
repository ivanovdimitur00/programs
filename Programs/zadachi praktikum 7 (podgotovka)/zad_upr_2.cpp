// kombinacii n elementa k-ti klas

#include <iostream>

int main()
{
    long long int n, k, res = 1, i;

    std::cin>>n>>k;

    for (i = n; i >= n - k + 1; i --) {
        res=res * i;
    }

    for (i = k; i >= 1; i --) {
        res=res / i;
    }

    std::cout<<res<<std::endl;

    return 0;
}