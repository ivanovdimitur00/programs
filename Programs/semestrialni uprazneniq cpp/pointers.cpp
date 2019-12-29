#include <iostream>

void swap_address(int* a, int* b) {
    int swap = *a;
    *a = *b;
    *b = swap;
}

void swap_pseydonym(int& a, int& b) {
    int swap = a;
    a = b;
    b = swap;
}

// int* one()
// {
//     // int a = 1; nevalidna (raboti se s dinamichna pamet)
//     return &a;
// }

int main()
{
    int a = 2;
    int* pointer_to_a = &a; // pomni adresa na a

    int b = 3;
    int* pointer_to_b = &b; // pomni adresa na b

    int** pointer_to_pointer_to_b = &pointer_to_b;


    std::cout<<"a= "<<a<<std::endl; //sudurzanie na a
    std::cout<<"&a= "<<&a<<std::endl; //stojnosta adres na a

    std::cout<<"b= "<<b<<std::endl; //sudurzanie na b
    std::cout<<"&b= "<<&b<<std::endl; //stojnosta adres na b

    std::cout<<"pointer_to_a= "<<pointer_to_a<<std::endl;  // printira adres na a;
    std::cout<<"*pointer_to_a= "<<*pointer_to_a<<std::endl; //printira stojnosta na a;
    std::cout<<"&pointer_to_a= "<<&pointer_to_a<<std::endl; // printira ADRESA NA UKAZATELQ , okazvasht kude se namira a

    std::cout<<"pointer_to_pointer_to_b= "<<pointer_to_pointer_to_b<<std::endl; // printira ADRESA NA UKAZATELQ , okazvasht kude se namira b
    std::cout<<"**pointer_to_pointer_to_b= "<<**pointer_to_pointer_to_b<<std::endl; // printira ADRESA NA UKAZATELQ , okazvasht kude se stojnosta na  namira b
    std::cout<<"&pointer_to_pointer_to_b= "<<&pointer_to_pointer_to_b<<std::endl; // printira ADRESA NA UKAZATELQ , okazvasht kude se adresa na ukazatela koito sochi kude se namira b


    int arr[2]= {1,2};

    std::cout<<"*(arr + 0)= "<<*(arr + 0)<<std::endl;
    std::cout<<"*(arr + 1)= "<<*(arr + 1)<<std::endl;


    int c = 3 , d = 5;

    std::cout<<"c= "<<c<<std::endl;
    std::cout<<"d= "<<d<<std::endl;

    swap_address(&c,&d);

    std::cout<<"c= "<<c<<std::endl;
    std::cout<<"d= "<<d<<std::endl;
    
    swap_pseydonym(c,d);

    std::cout<<"c= "<<c<<std::endl;
    std::cout<<"d= "<<d<<std::endl;

    int f = 17;
    int& g = f;

    std::cout<<"f= "<<f<<std::endl;
    std::cout<<"g= "<<g<<std::endl;

    // int* new_one = one();

    // std::cout<<"new_one= "<<new_one<<std::endl;  // printira adres na a;

    return 0;
}