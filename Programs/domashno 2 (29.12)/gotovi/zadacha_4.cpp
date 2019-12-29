#include <iostream>
#include <cmath>


int convert_time_toMinutes(char* time) {
    int t = 0;

    t = t + (time[0]-'0')*600;
    t = t + (time[1]-'0')*60;
    t = t + (time[3]-'0')*10;
    t = t + (time[4]-'0');

    return t;
}


void swap(int& x, int& y) {
    char swap = x;
    x = y;
    y = swap;
}

void selection_sort(int* times, int coords[][2], int n){
    
    for (int i = 0; i < n - 1; i++) {
        char min_el = times[i];
        int min_el_pos = i;

        for (int j = i + 1; j < n; j++) {
            if (min_el > times[j]) {
                min_el = times[j];
                min_el_pos = j;
            }
        }

        swap(times[i],times[min_el_pos]);
        swap(coords[i][0],coords[min_el_pos][0]);
        swap(coords[i][1],coords[min_el_pos][1]);
    }
}


double find_distance(int coords[][2], int n) {
    double dist = 0;
    for (int i = 0; i < n-1; i++) {
        dist = dist + sqrt((coords[i][0] - coords[i+1][0])*
                           (coords[i][0] - coords[i+1][0])+
                           (coords[i][1] - coords[i+1][1])*
                           (coords[i][1] - coords[i+1][1]));
    }

    return dist;
}



int main()
{
    int n;
    char time[6];
    int coordinates[1000][2];
    int times[1000];

    std::cin>>n;

    for (int i = 0; i < n; i++) {
        std::cin>>coordinates[i][0]
                >>coordinates[i][1]
                >>time;
    times[i] = convert_time_toMinutes(time);
    }

    selection_sort(times,coordinates,n);

    std::cout<<"Distance: "
             <<find_distance(coordinates,n)
             <<std::endl;

    std::cout<<"Parked on the same place: ";

    if (coordinates[0][0] == coordinates[n-1][0] &&
        coordinates[0][1] == coordinates[n-1][1]) {
            std::cout<<"Yes";
        } else {
            std::cout<<"No";
        }


    return 0;
}