#include <iostream>


bool find(int elem,int* arr, int size) {
    int start = 0, end = size - 1;
    int mid = (start + end)/2;
    while (start < end && arr[(start + end)/2] != elem) {
    int mid = (start + end)/2;
    if (arr[mid] > elem) {
        end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return arr[(start + end)/2] == elem;
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i <= 11; i++) {

        std::cout<<"i= "<<i<<" "<< std::boolalpha << find(i,arr,10)<<std::endl;
    }
    

    return 0;
}