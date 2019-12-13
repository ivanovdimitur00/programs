#include <iostream>
#include <math.h>

int main()
{
    int number , n ,new_system;

    std::cin>>number>>n>>new_system;

    int numbers_of_number[36]; 
    int number_decimal = 0;
    int step = 0; 
    int index = 0;
    int counter_numbers = 0;

    int new_number = 0;


    if (n == new_system) {
        std::cout<<number<<std::endl;
        return 0;
    }


     if (new_system == 1) {
         while (number > 0) {
             number_decimal = number_decimal + ((number%10) * pow(n,step));
             step++;
             number = number/10;
         }

         while (number_decimal > 0) {
             std::cout<<"1";
             number_decimal--;
         }
         return 0;
     }


    if (n < new_system || n > new_system) {
        while (number > 0) {
             number_decimal = number_decimal + ((number%10) * pow(n,step));
             step++;
             number = number/10;
         }

        while (number_decimal > 0) {
            numbers_of_number[index] = number_decimal % new_system;
            index++;
            counter_numbers++;
            number_decimal = number_decimal / new_system;
        }

        for (int i = counter_numbers-1 ; i >= 0; i --) {
            std::cout<<numbers_of_number[i];
        }

        return 0;

    }

    return 0;
}