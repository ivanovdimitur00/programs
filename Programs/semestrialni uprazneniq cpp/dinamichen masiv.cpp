#include <iostream>

int* array_init(int* arr_container, int& size) { // pesvdonim size - zakacha se v main
    std::cin>>size;
    arr_container = new int[size];
    arr_container[0] = -10;

    return arr_container;
}

int main()
{
    int size;
    int* arr;
    arr = array_init(arr,size);

    std::cout<<size;
    std::cout<<arr[0];
}