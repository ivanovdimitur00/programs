#include <iostream>
#include <math.h>

int main()
{
    int a,b;
    int n;
    int m[9];
    long long int numbers_base[6561]; 
    long long int new_numbers[59049];

    std::cin>>a>>b;
    std::cin>>n;

    for (int i = 0; i < n ; i++) {
        std::cin>>m[i];
    }

    bool in_interval = true;

    for (int i = 0; i < n; i ++) {
        if (m[i] >=a && m[i] <= b) {
            std::cout<<m[i]<<' ';
        } 
    }

    int index_base = 0;

            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                numbers_base[index_base] = m[i]*10 + m[j];
                index_base++;
            }
        }

        for (int i = 0; i < index_base; i ++) {
        if (numbers_base[i] >=a && numbers_base[i] <= b) {
            std::cout<<numbers_base[i]<<' ';
        }
    }

    while (in_interval == true) {

        int index_new_num = 0;

        for (int i = 0 ; i < index_base; i++) {
            for (int j = 0; j < n ; j++) {
                new_numbers[index_new_num] = numbers_base[i]*10 + m[j];
                index_new_num++;
            }
        }

    for (int i = 0; i < index_new_num; i ++) {
        if (new_numbers[i] >=a && new_numbers[i] <= b) {
            std::cout<<new_numbers[i]<<' ';
            } 
        }

        for (int i = 0; i < index_new_num; i++) {
            numbers_base[i] = new_numbers[i];
        }
        index_base = index_new_num;

        if (new_numbers[index_new_num-1] > b) {
            in_interval = false;
            return 0;
        }

    }

    

    return 0;
}