// razlaga se chisloto na mnoziteli.
// mnozitelite , sustavqshti chisloto, se umnozavat vzaimno do poluchavane na 3 chisla.
// !!! pri umnozenieto se vzemat naj-malkite ot tqh
// tezi 3 chisla sa minimalnite elementi m,p,q.
#include <iostream>

int main()
{
    int n;
    std::cin>>n;

    int dividers[32] = {1,1,1};
    int index = 0;

    int divider = 2;
    
    while (n > 1) { 

        if (n % divider == 0) {

            dividers[index] = divider;
            n = n / divider;
            index++;
        } else {
            divider++;
        }
    }

    std::cout<<index<<std::endl;

    for (int i = 0 ; i < index; i++) {
        std::cout<<dividers[i]<<' ';
    }

    std::cout<<std::endl;


    if (index <= 3) { 
        std::cout<<"m= "<<dividers[0]<<std::endl;    
        std::cout<<"p= "<<dividers[1]<<std::endl;
        std::cout<<"q= "<<dividers[2]<<std::endl;
        return 0;

    } else {
        while (index > 3) {
            int min_1= dividers[0];
            int min_1_index = 0;

            
            for (int i = 1; i < index; i ++) {
            if (min_1 > dividers[i]) {

                min_1 = dividers[i];
                min_1_index = i;
                }
            }

            bool same_element = false;

            for (int i = 0; i < index; i++) {
                if (min_1 == dividers[i] && i != min_1_index) {
                    dividers[i] = dividers[i] * dividers[min_1_index];
                    dividers[min_1_index] = 1;
                    min_1 = 1;
                    same_element = true;
                }
            }

            int min_2 = dividers[0];
            int min_2_index = 0;

            if (same_element == false) {
                for (int i = 1; i < index; i++){
                    if ((min_2 > dividers[i] || min_2 < dividers[i] ) && 
                        (min_2 == dividers[min_1_index] || min_2 < dividers[min_1_index])) {
                        min_2 = dividers[i];
                        min_2_index = i;
                    }
                }

                dividers[min_1_index] = dividers[min_1_index] * dividers[min_2_index];
                dividers[min_2_index] = 1;
                min_2 = 1;
            }

            if (same_element == true) {
                int swap;
                swap = dividers[min_1_index];
                dividers[min_1_index] = dividers[index-1];
                dividers[index - 1] = swap;
                index--;
            } else {
                int swap;
                swap = dividers[min_2_index];
                dividers[min_2_index] = dividers[index-1];
                dividers[index - 1] = swap;
                index--;
            }
        }
    }

    std::cout<<"m= "<<dividers[0]<<std::endl;
    std::cout<<"p= "<<dividers[1]<<std::endl;
    std::cout<<"q= "<<dividers[2]<<std::endl;

    return 0;
}