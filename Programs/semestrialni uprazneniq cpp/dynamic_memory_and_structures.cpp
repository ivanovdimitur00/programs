#include <iostream>
#include <cstring>
using mapper = void (*) (const int&);



/*
void map (int arr[],size_t size, void (*m) (int )) //tip na funkciqta, tip i broj na promenlivite
{

}
*/

void map (int* arr,size_t size,mapper m ) //tip na funkciqta, tip i broj na promenlivite
{
    for (int i = 0; i < size; i++) {
        m(arr[i]);
        // arr[i] = 10;  //int* const
        // arr++; //const int*
    }

    std::cout<<std::endl;
    
}

void map_2 (int* start,int* end,mapper m ) //obhod na masiv chrez podavane na nachalo i kraj
{
    for (int* i = start; i < end; i++) {
        m(*i);
    }

    std::cout<<std::endl;
    
}

void print (const int& elem) {
    std::cout<<elem<<" ";
}

struct Product {
    double price;
    int code;
    char* name; // dinamichno!
    void print(){
        std::cout<<name<<" : "<<code<<" : "<<price<<std::endl;
    }
};

void set_name (Product& p, const char* str) {
    p.name = new char[strlen(str) + 1];
    strcpy(p.name, str);
}

void print_products (Product* p, size_t size) {
    for (int i = 0; i < size; i++) {
        // std::cout<<p[i].name<<" : "<<p[i].code<<" : "<<p[i].price<<std::endl; 
        p[i].print(); // analogichno
    }
}



int main()
{
    size_t arr_size;
    std::cin>>arr_size;

    int* arr = new int[arr_size];

    for (int i = 0; i < arr_size; i++) {
        std::cin>>arr[i];
    }


    // int arr[3] = {1,2,3};

    map (arr,arr_size,print);
    map_2 (arr,arr+arr_size,print);
    delete []arr;

    Product p;
    p.price = 10.50;
    set_name(p, "Wine");
    delete []p.name;
    // print_products (products,size);
    // delete_product(p);
    // p.delete_product();

    // map (arr,size,addOne);

    return 0;
}