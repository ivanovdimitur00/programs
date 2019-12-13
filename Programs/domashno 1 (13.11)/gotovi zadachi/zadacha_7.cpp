#include <iostream>

int main()
{
    int n;
    std::cin>>n;

    int sorted_numbers[1000];

    for (int i = 0; i < n; i++) {
        std::cin>>sorted_numbers[i];
    }

    int x;
    std::cin>>x;

    int sum_equal_x = 0;

    for (int i = 0; i < n-1; i ++) {
        for (int j = i+1; j < n; j++){
            if (sorted_numbers[i] + sorted_numbers[j] == x) {
                sum_equal_x++;
            }
        }
        
    }

    std::cout<<sum_equal_x<<std::endl;

    return 0;
}