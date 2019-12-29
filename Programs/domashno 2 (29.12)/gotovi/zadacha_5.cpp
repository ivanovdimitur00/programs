#include <iostream>
#include <cmath>

//Фак. Номер: 81943
//T(10) = 72273747


long long int T(int n,int x,int y, int z) {
    if (n == 0) {
        return z;
    }

    if (n%2 != 0) {
        return x*T(floor(n/2),x,y,z) + y*T(n-1,x,y,z);
    } else {
        return x*T(n/2,x,y,z) + y*T(n-1,x,y,z);
    }

}


int main()
{
    int fac_number;
    std::cin>>fac_number;
    int X,Y,Z;

    Z = fac_number % 10;
    Y = (fac_number % 100) / 10;
    X = (fac_number % 1000) / 100;

    int n;

    std::cin>>n;

    int T_0 = Z;
    int i = 0;

    std::cout<<T(n,X,Y,Z);

    return 0;
}



//T(0) = Z = 3
//T(1) = X*t_0 + y*t_0 = 27 + 12 = 39
//t(2) = X*t_1 + y*t_1 = 9*39 + 4*39 = 507
//t(3) = X*t_1 + y*t_2 = 9*39 + 4*507 = 2379
//...


