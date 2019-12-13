//redici . TURSENE NA RAVNI ELEMENTI
#include <iostream>

int main()
{
    int n , counter = 0;
    double a[30], b[30];

    a[0] = 0;
    b[0] = 9;

    std::cin>>n;

    for (int i = 1; i < n; i++) {
        a[i] = (a[i-1]/4)+1;
        b[i] = (b[i-1]/4)+(1 - (i%2)*2);
    }

    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n ; j++) {
            if (a[i] == b[j]) {
                counter ++;
            }
        }
    }

    std::cout<<counter<<std::endl;
    return 0;
}