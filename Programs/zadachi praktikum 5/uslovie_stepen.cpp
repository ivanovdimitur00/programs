#include <iostream>

int main()
{

    for (int i = 101; i<= 981; i++) {
            if ( (i/100)*(i/100) == i%100 ) {
                std::cout<<i<<" ";
            }

    }

            return 0;

}