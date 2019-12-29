#include <iostream>

int* array_init(int& size) { // psevdonim size - zakacha se v main
    std::cin>>size;
    int* arr_container = new int[size];
    arr_container[0] = -10;

    return arr_container;
}

int main()
{
    int size;
    int* arr;
    arr = array_init(size);

    std::cout<<size;
    std::cout<<arr[0];
}