#include <iostream>
using predicate = bool (*)(const int&, const int&); // polagane na funkciq (da bude sochena ot duma)


void swap(int& a, int &b){
    int swap = a;
    a=b;
    b=swap;
}

bool gt(const int& a, const int& b) {
    return a > b;
}


bool lt(const int& a, const int& b) {
    return a < b;
}

void sort(int *arr, int size, predicate p) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i+1; j < size; j++) {
            if (p(arr[i], arr[j])) { // vuzhodqshto  // nizhodqshto -  "<"
                swap(arr[i],arr[j]);
            }
        }
    }
}

void log(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout<<arr[i]<<' ';
    }
    std::cout<<std::endl;
}

int main()
{
    int arr[10] = {17,54,58,4,-9,0,55,11,44,19};
    log (arr,10);
    sort (arr,10,gt);
    log (arr,10);
    sort (arr,10,lt);
    log (arr,10);

    return 0;
}