#include <iostream>
#include <string.h>

void find_substr (char* sent, char* letter) {
    for (int i = 0; i < strlen(sent) ; i ++) {
        if (sent[i] == *letter) {
            int pos = i+1;

            std::cout<<"position of symbol ("
            <<letter
            <<"): "
            <<pos
            <<std::endl;
            std::cout<<"substring: ";

            for (int j = i ; j < strlen(sent); j++) {
                std::cout<<sent[j];
            }
        }
        
    }
}

void print_numbers (int* primes, int size) {
    for (int i = 0; i < size; i++) 
    {
        std::cout<<primes[i]<<" ";
    } 
}

void find_primes (int* num, int size, int* primes) {
    int prime_pos = 0;
    for (int i = 0; i < size; i++) {
        int counter = 0;
        for (int div = 2; div <= num[i]/2; div++) {
            if (num[i] % div == 0) {
                counter ++;
            }
        }
        if (counter == 0) {
            primes[prime_pos] = num[i];
            prime_pos++;
        } else {
            counter = 0;
        }
    }

    print_numbers (primes,prime_pos);
}

int hamming_distance (char* sent_1,char* sent_2) {
    int diff = 0;
    for (int i = 0; i < strlen(sent_1); i++) {
        if (sent_1[i] != sent_2[i]) {
            diff++;
        }
    }

    return diff;
}

void input_numbers (int* numbers, int size) {

    for (int i = 0; i < size; i++)
    {
    std::cin>>numbers[i];
    }
}

void  find_numbers_equal (int* num_1,int* num_2,int size,char sym,int* new_num) {
    
    int num_pos = 0;
    int act;
    
    for (int i = 0; i < size; i++) {
       
        if (sym == '+') {
            act = num_1[i] + num_2[i];
        } else {
            act = num_1[i] - num_2[i]; 
        }

        for (int j = 0; j < size; j++) {
            if (num_1[j] == act) {
                new_num[num_pos] = num_1[j];
                num_pos++;
            }

            if (num_2[j] == act) {
                new_num[num_pos] = num_2[j];
                num_pos++;
            }
        }
    }
    print_numbers (new_num,num_pos);
}

void  find_numbers (int* num_1,int* num_2,int size,char sym,int* new_num) {
    
    int num_pos = 0;
    int act;
    
    for (int i = 0; i < size; i++) {
       
        if (sym == '+') {
            act = num_1[i] + num_2[i];
        } else {
            act = num_1[i] - num_2[i]; 
        }

        
                new_num[num_pos] = act;
                num_pos++;
    }

    print_numbers (new_num,num_pos);
}

int main()
{
    //zad 1 - substr

    /*
    char sentence[256];
    // int sentence_length;
    char letter;

    // std::cin>>sentence_length;
    std::cin>>sentence;
    std::cin>>letter;

    find_substr (sentence,&letter);
    */

    //zad 2 - hamming distance

    /*
    char sentence_1[256];
    char sentence_2[256];

    std::cin>>sentence_1;
    std::cin>>sentence_2;

    std::cout<< hamming_distance (sentence_1,sentence_2);
    */

    //zad 3 - primes array

    /*
    int numbers[100];
    int numbers_size;
    int primes [100] = {0};

    std::cin>>numbers_size;
    
    intput_numbers (numbers,numbers_size);
    
    
    find_primes (numbers,numbers_size,primes);
    */

   //zad 4 - sum/sub array

   int numbers_1[15];
   int numbers_2[15];
   int new_numbers[30];
   int N;
   char symbol;

   std::cin>>N;
   std::cin>>symbol;

   input_numbers (numbers_1,N);
   input_numbers (numbers_2,N);

//    find_numbers_equal (numbers_1,numbers_2,N,symbol,new_numbers);
      find_numbers (numbers_1,numbers_2,N,symbol,new_numbers);

      //zad 5 - encoding

   return 0;
}