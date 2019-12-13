#include <iostream>

int min_height (int a, int b) {
    if (a <= b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    int n;
    int walls[1000];

    std::cin>>n;

    for (int i = 0; i < n; i ++) {
        std::cin>>walls[i];
    }

    int volume;
    int max_volume = (1 - 0) * min_height(walls[0],walls[1]);

    for (int i = 0 ; i < n-1 ; i++) {
        for (int j = i+1; j < n; j++) {

            volume = (j - i) * min_height(walls[j],walls[i]);

            std::cout<<j-i<<" "<<volume<<std::endl;

            if (max_volume < volume) {
                max_volume = volume;
            }
        }
    }

    std::cout<<max_volume<<std::endl;

    return 0;
}