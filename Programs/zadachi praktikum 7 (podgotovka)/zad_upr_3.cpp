// ploshtadka na niz

#include <iostream>
#include <string.h>
#include <math.h>

int main()
{
    char characters[31];
    int counter = 0, max = 1;

    std::cin>>characters;

    for (int i = 0 ; i <=strlen(characters); i++) {
        if (characters[i] >= 'A' && characters[i] <= 'Z') {
            characters[i] = characters[i] + fabs('A' - 'a');
        }
    }

    counter = 1;

    for (int i = 1; i < strlen(characters); i++) {
        if (characters[i] != characters[i-1]) {
            if(counter > max) {
                max = counter;
            }
            counter = 1;
        } else {
            counter ++;
        }
    }

    if (counter > max) {
        max = counter;
    }

    std::cout<<max<std::endl;

    // std::cout<<characters<<std::endl;
    return 0;
}