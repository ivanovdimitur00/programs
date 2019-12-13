#include <iostream>

void input_array_numbers (int* num, int size) {
    for (int i = 0; i < size; i ++) {
        std::cin>>num[i];
    }
}

void input_array_numbers_1 (double* num, int size) {
    for (int i = 0; i < size; i ++) {
        std::cin>>num[i];
    }
}

void recursion_output_array_numbers (int* num,int size) {

    if (size > 0) {
        std::cout<<num[size-1]<<" ";
        return recursion_output_array_numbers (num,size-1);
    }

}


   int find_number_ToThePowerOf (int num,int power,int mult) {

       if (power == 0) {
           return mult;
       }

       if (power > 0) {
           mult = mult * num;
           power--;
           return find_number_ToThePowerOf (num,power,mult);
       }

       return mult;
   }

   int find_max(int* num, int size, int end, int max) {

       for (int i = 1; i <= end; i++) {
           if (max < num[i]) {
               max = num[i];
             }
       }
       
       if (end < size-1) {
           end++;
           return find_max(num,size,end,max);
       }

    return max;

   }

   void letter_triangle(char letter,int len) {

      for (int i = 0; i <= len; i++) {
           std::cout<<(char)('A' + i)<<" ";
       }
       std::cout<<std::endl;

       if (len > 0) {
            len--;
           letter_triangle (letter,len);
       }

   }

double recursive_poly (double* num, int size,double x) {
    
}

int main()
{
    int numbers[100];
    int n;


        //zad 1 - cout recursion


    /*
    std::cin>>n;
    input_array_numbers (numbers,n);

    recursion_output_array_numbers (numbers,n);
    */


        //zad 2 -  step recursion


    /*
    int number,step;

    std::cin>>number>>step;

    int step_mult = 1;

    std::cout<<find_number_ToThePowerOf(number,step,step_mult);
    */


         //zad 3 - max recursion style


    /*
    std::cin>>n;
    input_array_numbers (numbers,n);

    int end = 0;
    int max=numbers[0];

    std::cout<<find_max(numbers,n,end,max);
    */


        //zad 4 - triangle letters recursion

    /*
    char letter;       
    
    std::cin>>letter;

    int length = letter - 'A';

    letter_triangle (letter,length);
    */


        //zad 5 - polinom rekursivno;
    
    std::cin>>n;
    double numbers_1[100];
    input_array_numbers_1 (numbers_1,n);

    double x;

    std::cin>>x;

    std::cout<<recursive_poly (numbers_1,n,x);

    return 0;
}