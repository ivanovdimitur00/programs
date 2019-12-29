#include <iostream>

struct My_array {
    int* arr;
    int size;
};
// memory leak!!!!
// My_array array_init ()
// {
//     My_array res;
//     std::cin>>res.size;
//     res.arr = new int[res.size];
//     res.arr[0] = - 10;
//     return res;
// }

int* array_init(int& size) {
    std::cin>>size;
    int* arr_container = new int[size];
    arr_container[0] = -10;

    return arr_container;
}

void array_init(int*& arr, int& size) {
    std::cin>>size;
    int* arr = new int[size];
    arr[0] = -10;
    delete [] arr; // triene na masiv
}

std::pair<int*,int*> array_init(int*& start, int*& end) {
    int size;
    std::cin>>size;
    start = new int[size];
    end = start + size;
    std::pair <int*, int*> p(start,end);
    return p;
}

std::pair<int*,int*> array_init() {
    int size;
    std::cin>>size;
    int* start = new int[size];
    int* end = start + size;
    std::pair <int*, int*> p(start,end);
    return p;
}

int main()
{
    // My_array t;
    // int size;
    // int*arr;

    // //1 -
    // t = array_init();
    // //2 - 
    // arr = array_init(size);
    // //3 - mem leak (fixed?)
    // array_init(arr,size);
    // std::cout<<t.size;
    // std::cout<<t.arr[0];

    std::pair<int*,int*> tt = array_init();
    // tt.first;

    return 0;
}