#include <iostream>

void activate_decision (int* lamps, int size);
void deactivate_prev (int* lamps, int size);

void activate_first_lamp (int* lamps) {
    lamps[0] = 1;

    std::cout << "+"
              << 1
              << std::endl;
}

void activate_lamp (int* lamps, int size) {
    lamps[size] = 1;
    std::cout << "+"
              << size
              << std::endl;
}

void deactivate_lamp (int* lamps, int size) {
    lamps[size] = 0;
    std::cout << "-"
              << size
              << std::endl;
}

void deactivate_first_lamp (int* lamps) {
    lamps[0] = 0;

    std::cout << "-"
              << 1
              << std::endl;
}
void activate_second_lamp (int* lamps) {
    lamps[1] = 1;

    std::cout << "+"
              << 2
              << std::endl;
}


void activate_decision (int* lamps, int size) {
    if (size == 1) {
        activate_first_lamp(lamps);
    } else {
        activate_decision(lamps, size-1);
        activate_lamp(lamps,size);
        deactivate_prev (lamps,size-1);
      }
}

void deactivate_prev (int* lamps,int size) {
    if (size == 1) {
        deactivate_first_lamp (lamps);
      }  else {
            activate_decision (lamps,size-1);
            deactivate_lamp (lamps,size);
            deactivate_prev (lamps,size - 1);
        }
}

void chain (int* lamps, int size) {

    if (size == 1) {
        activate_first_lamp (lamps);
    } else if (size == 2) {
        activate_first_lamp(lamps);
        activate_second_lamp(lamps);
    } else {
        activate_decision(lamps,size - 1);
        activate_lamp(lamps,size);
        chain (lamps, size - 2);
    }
}

int main()
{
    int N;
    std::cin >> N;

    int* lamps = new int[N];
    

    for (int i = 0; i < N; i++) {
        lamps[i] = 0;
    }

    chain (lamps,N);

    delete []lamps;

    return 0;
}