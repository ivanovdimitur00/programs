#include <iostream>
#include <string.h>
#include <math.h>

int main()
{
    char sentence[1001];
    std::cin.getline(sentence,1001);

    int sentence_length = strlen(sentence);

    int numbers[500] = {0};
    int number_index = 0;
    int numbers_length[500];
    int number_length;
    int counter_numbers = 0;

    int temp;
    int reverse = 0;

    char text[500][3];
    int row_text = 0;
    int text_len = 0;
    int text_length = 2;


    for (int i = 0 ; i < sentence_length; i++) {

        if (sentence[i] >='0' && sentence[i] <= '9') {
            temp = i;
            while (sentence[temp] >='0' && sentence[temp] <= '9') {
                
                number_length++;
                temp++;
            }
            
            while (sentence[i] >='0' && sentence[i] <= '9') {
                numbers[number_index] = numbers[number_index] + ( (sentence[i] - '0') * pow(10,number_length-1-reverse));
                reverse++;
                i++;
            } 

            numbers_length[counter_numbers] = number_length;
            number_length = 0;
            number_index++;
            reverse = 0;
            counter_numbers++;

            if (sentence[i] >= 'a' && sentence[i] <='z') {
            do {
                text[row_text][text_len] = sentence[i];
                text_len++;
                i++;
            } while (sentence[i] != ' ' && sentence[i] !='.');

            text_len = 0;
            row_text++;
            }
        }    
    }

    for (int i = 0; i < counter_numbers;i++) {
        std::cout<<numbers[i]<<' ';
    }

    std::cout<<std::endl;

    for (int i = 0; i < counter_numbers; i++) {
        for (int j = 0; j < text_length; j++) {
            std::cout<<text[i][j];
        }
        std::cout<<std::endl;
    }

    

    return 0;
}