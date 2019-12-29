#include <iostream>
#include <cstring>

int* create_array(int size) {

    int* array = new int [size];

    for (int i = 0; i < size; i ++) {
        std::cin>>array[i];
    }

    return array;
}


int* create_array_validated(int size) {

    int* array = new int [size];

    for (int i = 0; i < size; i ++) {
        
        std::cin>>array[i];
        do {
            if (array[i] <= -1000 || array[i] >= 1000) {
                std::cout<<"invalid number. try again."<<std::endl;
                std::cin>>array[i];
            }
        } while (array[i] <= -1000 || array[i] >= 1000);
    }

    return array;
}


char* create_string(int size) {

    char* string = new char [size];

    for (int i = 0; i < size; i ++) {
        std::cin>>string[i];
    }

    return string;

}


void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout<<arr[i]<<' ';
    }
}

void print_string(char* string) {
    for (int i = 0; i < strlen(string); i++) {
        std::cout<<string[i]<<' ';
    }
    std::cout<<std::endl;
}


int find_sum(int*arr, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}


int find_min(int*arr, int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    return min;
}


int find_max(int*arr, int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}


char* concatenate_strings(char* str_1, char* str_2) {
    char* string = new char [strlen(str_1) + strlen(str_2)];

    for (int i = 0; i < strlen(str_1); i++) {
        string[i] = str_1[i];
    }

    int index = 0;

    for (int i = strlen(str_1); i < strlen(str_1)+ strlen(str_2); i++) {
        string[i] = str_2[index];
        index++;
    }

    return string;
}


 void swap(int& a, int& b) {
     int swap = a;
     a = b;
     b = swap;
 }


void symmetrical_swap(int* arr, int size) {
    for (int i = 0; i < size/2; i++) {
        if (arr[i] > arr [size - 1 - i]) {
            swap(arr[i],arr[size - 1 - i]);
        }
    }
}


void selection_sort(int* arr, int size) {

    int min;
    int min_pos;

    for (int i = 0; i < size - 1; i++) {

        min = arr[i];
        min_pos = i;

        for (int j = i + 1; j < size; j++) {
            if (min > arr[j]) {
                min = arr[j];
                min_pos = j;
            }
        }
        swap (arr[i],arr[min_pos]);
    }
}


int main()
{

    //zad 1 - dinamichen masiv


    /*
    int array_size;
    std::cin>>array_size;
    
    int* array = create_array(array_size);

    std::cout<<array<<std::endl;

    print_array(array,array_size);

    std::cout<<std::endl;

    // delete [] array;
    */


    //zad 2 - suma, max, min


    /*
    std::cout<<find_sum(array,array_size)<<std::endl;
    std::cout<<find_min(array,array_size)<<std::endl;
    std::cout<<find_max(array,array_size)<<std::endl;
    
    delete [] array;
    */


    //zad 3 - char,char and charchar


    /*
    char* string_1;
    int string_length;
    std::cin>>string_length;
    string_1 = create_string(string_length);

    char* string_2;
    std::cin>>string_length;
    string_2 = create_string(string_length);

    char* new_string;    
    new_string = concatenate_strings(string_1,string_2);

    print_string(string_1);
    print_string(string_2);
    print_string(new_string);

    delete [] string_1;
    delete [] string_2;
    delete [] new_string;
    */


   //zad 4 - simetrichna razmqna


    /*
    int array_size;
    std::cin>>array_size;
    int* array = create_array(array_size);

    print_array(array,array_size);
    std::cout<<std::endl;

    symmetrical_swap(array,array_size);

    print_array(array,array_size);
    std::cout<<std::endl;

    delete [] array;
    */


    //zad 5 - validate el. in array and sort

    int array_size;
    std::cin>>array_size;
    int* array = create_array_validated(array_size);

    print_array(array,array_size);
    std::cout<<std::endl;

    selection_sort(array,array_size);

    print_array(array,array_size);
    std::cout<<std::endl;

    delete [] array;




    return 0;
}