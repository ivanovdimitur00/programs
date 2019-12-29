#include <iostream>

void f(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        delete [] arr[i];
    }

    delete [] arr;
}

int main()
{
    int** arr = new int* [5];
    for (int i = 0 ; i < 5; i ++) {
        arr[i] = new int[5];
    }
    f(arr,5);

    return 0;
}