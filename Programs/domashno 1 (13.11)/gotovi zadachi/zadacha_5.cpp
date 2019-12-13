#include <iostream>

int main()
{
    int n;

    std::cin>>n;

    int walls[1000]; // n - 1 posledna stena (index)
    int volume = 0;

    for (int i = 0; i < n; i++) {
        std::cin>>walls[i];
    }

        //before max

    int max = walls[0];
    int max_index = 0;

    for (int i = 1; i < n; i++) {
        if (max <walls[i]) {
            max = walls[i];
            max_index = i;
        }
    }

    int max_before;
    int max_before_index;

    for (int i = 0; i < max_index; i++) {
        if (walls[i] < walls[i+1]) {
            volume = volume + walls[i] * 1;
            walls [i] = 0;
        } else {
            max_before_index = i;
            max_before = walls[i];
            break;
        }
    }


        for (int i = max_before_index + 1; i <= max_index; i++) {
        if (walls[max_before_index] < walls[i]) {
            volume = volume + walls[max_before_index] * (i - max_before_index);
            walls[max_before_index] = 0;
            max_before = walls[i];
            max_before_index = i;
        } else {
            walls[i] = 0;
            }
        }

    //after max - ogledalno na before max

    int max_after;
    int max_after_index;

    for (int i = n-1; i > max_index; i--) {
        if (walls[i] < walls[i-1]) {
            volume = volume + walls[i] * 1;
            walls [i] = 0;
        } else {
            max_after_index = i;
            max_after = walls[i];
            break;
        }
    }

        for (int i = max_after_index - 1 ; i >= max_index; i--) {
            if (walls[max_after_index] < walls[i]) {
                volume = volume + walls[max_after_index] * (max_after_index - i);
                walls[max_after_index] = 0;
                max_after = walls[i];
                max_after_index = i;
            } else {
                walls [i] = 0;
            }
        }

     std::cout<<volume<<std::endl;

    return 0; 
}