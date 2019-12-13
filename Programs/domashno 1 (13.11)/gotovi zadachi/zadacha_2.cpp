#include <iostream>
// using namespace std;

int main()
{
    int P[101],Q[101],mult_poly[202] = {0}; // x^100*x^100 = x^200 . poziciqta na starshiq 
                                                // koeficient e 0 v masiva. a na mladshiq - 199.

    int n,m;

    std::cin>>n;
    for (int i = 0; i <= n; i++) {
        std::cin>>P[i];
    }

    std::cin>>m;
    for (int i = 0; i <= m; i++) {
        std::cin>>Q[i];
    }

    for (int i = 0 ; i <= n; i ++) {
        for (int j = 0; j <= m; j++) {
            mult_poly[i+j] = mult_poly[i+j] + ( P[i]*Q[j] );
        }
    }

    for (int i = 0; i <= n+m ; i ++) {
        std::cout<<mult_poly[i]<<" ";
    }

    return 0;
}