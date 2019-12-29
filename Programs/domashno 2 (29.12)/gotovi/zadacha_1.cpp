#include <iostream>
#include <cstring>



void change_to_small_letter(char* a) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i]>='A' && a[i] <= 'Z') {
            a[i] = a[i] + ('a' - 'A');
        }
    }
}


void swap(char& x, char& y) {
    char swap = x;
    x = y;
    y = swap;
}

void selection_sort(char* a){
    
    for (int i = 0; i < strlen(a) - 1; i++) {
        char min_el = a[i];
        int min_el_pos = i;

        for (int j = i + 1; j < strlen(a); j++) {
            if (min_el > a[j]) {
                min_el = a[j];
                min_el_pos = j;
            }
        }

        swap(a[i],a[min_el_pos]);
    }
}


void concatenate(char* sent_1, char* sent_2, char* conc_sent) {
    for (int i = 0; i < strlen(sent_1); i++) {
        conc_sent[i] = sent_1[i];
    }

    for (int i = 0; i < strlen(sent_2); i++) {
        conc_sent[strlen(sent_1) + i] = sent_2[i];
    }
}


void compare(char* conc_sent, char* tgt_sent) {
    for (int i = 0; i < strlen(conc_sent); i++) {
        if (conc_sent[i] != tgt_sent[i]) {
            std::cout<<"false";
           return;
        }
    }

    std::cout<<"true";
}


int main()
{
    char sentence_1[256];
    char sentence_2[256];
    char concatenated_sentence[511];
    char target_sentence[511];

    std::cin>>sentence_1;
    std::cin>>sentence_2;
    std::cin>>target_sentence;

    if (strlen(sentence_1) + strlen(sentence_2) > strlen(target_sentence) ||
        strlen(sentence_1) + strlen(sentence_2) < strlen(target_sentence)  )  {
           std::cout<<"false";
           return 0;
       }

    change_to_small_letter(sentence_1);
    change_to_small_letter(sentence_2);
    change_to_small_letter(target_sentence);

    concatenate(sentence_1,sentence_2,concatenated_sentence);

    selection_sort(concatenated_sentence);
    selection_sort(target_sentence);

    compare(concatenated_sentence,target_sentence);
    
    return 0;
}