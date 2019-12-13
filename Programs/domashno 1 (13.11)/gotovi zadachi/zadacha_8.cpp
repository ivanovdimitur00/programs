#include <iostream>
#include <string.h>
#include <math.h>

int main()
{
    char sentence[1001];
    std::cin.getline(sentence,1001);

    int sentence_length = strlen(sentence);


    int num[500][10];
    int num_len[500];
    int counter_numbers = 0;

    int i=0;
    int index_num = 0,row_num = 0;

    while (i < sentence_length) {

        while (sentence[i] >= '0' && sentence[i] <= '9' && sentence[i] != ' ') {
            num[row_num][index_num] = sentence[i] - '0';
            index_num++;
            i++;
        }

        num_len[row_num] = index_num;
        index_num = 0;
        i++;
        row_num++;
        counter_numbers++;
    }
    

    int new_num[500];
    
    for (int j = 0; j < counter_numbers; j++) {
        int number = 0;
        for (int k = 0 ; k < num_len[j]; k++) {
            number = number + (num[j][k] * pow(10,num_len[j]-k-1)); // za ulesnenie
        }
        new_num[j] = number;
    }

    int max = new_num[0];

    for (int i = 1; i < counter_numbers; i ++) {
        if (max < new_num[i]) {
            max = new_num[i];
        }
    }

    std::cout<<max<<std::endl;

    return 0;
}