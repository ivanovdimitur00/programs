#include <iostream>
#include <string.h>

void input_array (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cin>>arr[i];
    }
}

void print_array (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int frequency_of_number (int arr[],int size,int num) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (num == arr[i]) {
            counter++;
        }
    }

    return counter;
}

void swap_numbers_array (int arr[],int num_1,int num_2){
    int swap;
    swap = arr[num_1];
    arr[num_1] = arr[num_2];
    arr[num_2] = swap;

}

void swap_numbers_1 (int& num_1,int& num_2){ //psevdonimi svurzani sus stojnostite na dvata nomera.
    int swap;                                // ako stojnostite na psevdonimite se promeni, se promenqt i originalite.
    swap = num_1;                            // prosto sochat kum tehniq adres ot drugo mqsto i polzwat tehnite stojnosti.
    num_1 = num_2;
    num_2 = swap;

}

void swap_numbers_2 (int* num_1,int* num_2){//promenqt se adresite, bez da se zasqga stojnosta na nomerata
    int* swap;
    swap = num_1;
    num_1 = num_2;
    num_2 = swap;
}

void swap_numbers_3 (int* num_1,int* num_2){ //promenq stojnosta na nomerata sled dereferensirane
    int swap;
    swap = *num_1;
    *num_1 = *num_2;
    *num_2 = swap;
}

void swap_letters (char* let_1,char* let_2){ //promenq stojnosta na nomerata sled dereferensirane
    char swap;
    swap = *let_1;
    *let_1 = *let_2;
    *let_2 = swap;
}

void selection_sort (int arr[],int size) {
       int max_pos;
       int i, j;

       for (i = 0; i < size; i++) {
           max_pos = i;

           for (j = i+1; j < size; j++) {
               if (arr[max_pos] < arr[j]) {
                   max_pos = j;
               }
           }
           swap_numbers_3 (&arr[i],&arr[max_pos]);
       }

       print_array (arr,size);
   }


   void replace_exact (char text[],int size_text,
                       char substr[],int size_substr,
                       char rep[]) {

       int i,j,counter;

       for (i = 0; i < size_text; i ++) {
          counter = 0;
           if (text[i] == substr[0]) {
               counter++;

                for (j = 1; j < size_substr; j++) {
                    if (text[i+j] == substr[j]) {
                        counter++;
                    }

                }
           }

           if (counter == size_substr) {
               for (int k = 0; k < size_substr; k++) {
                   text[i+k] = rep[k];
               }
               i = i + size_substr - 1;
           }

       }
    }

    void print_text (char arr[],int size) {
        for (int i = 0; i < size; i++) {
        std::cout<<arr[i];
         }
        std::cout<<std::endl;
    }

    
    void replace_with_shorter (char text[], int text_size,
                               char substr[], int substr_size,
                               char rep[], int rep_size) {

    int i,j,counter;

       for (i = 0; i < text_size; i ++) {
          counter = 0;
           if (text[i] == substr[0]) {
               counter++;

                for (j = 1; j < substr_size; j++) {
                    if (text[i+j] == substr[j]) {
                        counter++;
                    }

                }
           }

           if (counter == substr_size) {
               for (int k = 0; k < rep_size; k++) {
                   text[i+k] = rep[k];
               }
                // da se premestqt otdqsno nalqvo zapochvaiki ot lipsvashtata
               }
               i = i + substr_size - 1;
            //    text_size = text_size - substr_size + rep_size;
           }

       }    
    }

    // replace_with_longer (sentence,sentence_length,
    //                      sentence_target,sentence_target_length);

int main()
{
    int numbers[100];
    int numbers_ammount;

    /*
    std::cout<<"How many numbers?"<<std::endl;
    std::cin>>numbers_ammount;
    */

    //zad 1 - I/O

    /*
    input_array (numbers,numbers_ammount);

    print_array (numbers,numbers_ammount);
    */

    //zad 2 - frequency

    /*
    int target_number = 5;

    std::cout<<frequency_of_number (numbers,numbers_ammount,target_number);
    */

    //zad 3 - swap;

    int first_number = 1;
    int second_number = 4;

    int first_num_pos = 0;
    int second_num_pos = 3;

    /*
    std::cout<<first_number<<" "<<second_number<<std::endl;

    swap_numbers_1 (first_number,second_number);

    std::cout<<first_number<<" "<<second_number<<std::endl;

    swap_numbers_2 (&first_number,&second_number);

    std::cout<<first_number<<" "<<second_number<<std::endl;

    swap_numbers_3 (&first_number,&second_number);

    std::cout<<first_number<<" "<<second_number<<std::endl;

    swap_numbers_array (numbers,first_num_pos,second_num_pos);

    print_array (numbers,numbers_ammount);
    */

   //zad 4 - sort

    //    selection_sort (numbers,numbers_ammount);

    //zad 5 - string modify

    char sentence[256] = {' '};
    int sentence_length;

    std::cout<<"size ot text?: ";
    std::cin>>sentence_length;
    std::cout<<"what do you want to say?: ";
    std::cin>>sentence;


    char sentence_target[256];
    int sentence_target_length;

    
    std::cout<<"size of substring?: ";
    std::cin>>sentence_target_length;
    std::cout<<"what do you want to repalce?: ";
    std::cin>>sentence_target;

    char replacement[256];
    int replacement_length;

    std::cout<<"size of replacement?: ";
    std::cin>>replacement_length;
    std::cout<<"what do you want to repalce it with?: ";
    std::cin>>replacement;

    if (replacement_length == sentence_target_length) {

            replace_exact (sentence,sentence_length,
                   sentence_target,sentence_target_length,
                   replacement);

    } else if (replacement_length < sentence_target_length) {

            replace_with_shorter (sentence,sentence_length,
                                  sentence_target,sentence_target_length,
                                  replacement,replacement_length);
    } else {

        // replace_with_longer (sentence,sentence_length,
        //                      sentence_target,sentence_target_length,
        //                      replacement,replacement_length);
    }

    

    print_text (sentence,sentence_length);

    return 0;
}