// pri i - edinichna stupka 
// add_or_sub - (-1)^i
//fact = fact * i;
//step = step * x;

#include <iostream>

int main()
{

    // podtochka a

    int x, n;
    // std::cin>>n>>x;

    double sum = 0;
    // double step;
    // double fact;
    // bool add_or_sub = true;

    // for (int i = 1 ; i <= n*2; i += 2) {

    //     step = 1;
    //     fact = 1;

    //     for (int j = 1; j <= i; j++) {
    //         step = step * x;
    //     }

    //     for (int j = 1; j <= i; j++) {
    //         fact = fact * j;
    //     }

    //     if (add_or_sub == true) {
    //         sum = sum + (step/fact);
    //         add_or_sub = false;
    //     } else {
    //         sum = sum - (step/fact);
    //         add_or_sub = true;
    //     }
    // }

    // std::cout<<sum;


    //podtochka b


    std::cin>>n;


    for (int i = 1; i <= n; i++) {
        sum = sum + (double)1/((i*(i+1))); // double/int ---> double . zatova se cast-va 1-cata ot tip double
    }

    std::cout<<sum;
    return 0;
}