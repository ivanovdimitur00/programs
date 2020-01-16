#include <iostream>
#include <cstring>
char words[60][18];


void make_string_with_exception(char words[][18],int rows, char* word,char* string) {
    string[0] = 0;
    for (int i = 0; i <= rows; i++) {
        if (strcmp(words[i],word) != 0 ) {
            strcat(string,words[i]);
            if (i != rows){
                strcat(string," ");
            }
        }
    }
}

void substitute(char* word, char* replacement) {
    for (int i = 0; i < strlen(replacement); i++){
            word[i] = replacement[i];
    }
    word[strlen(replacement)] = 0;
}

void make_string_with_replacement(char words[][18],int rows, char* oldWord, char* newWord ,char* string) {
    for (int i = 0; i <= rows; i++) {
        if (strcmp(words[i],oldWord) == 0) {
            substitute(words[i],newWord);
            strcat(string,words[i]);
            if (i != rows){
                strcat(string," ");
            }
        } else {
            strcat(string,words[i]);
            if (i != rows){
                strcat(string," ");
            }
        }
    }
}

void print_string (char* string){
    std::cout << string << std::endl;
}

void my_remove (char* source, char* word) {

    
    int index_row = 0;
    int index_len = 0;
    char symbol = source[strlen(source)-1];

    for (int i = 0; i < strlen(source) - 1; i++) {
        if (source[i] != ' ') {
            words[index_row][index_len] = source[i];
            index_len++;
        } else {
            words[index_row][index_len] = 0;
            index_row++;
            index_len = 0;
        }
    }

    char string[256];
    make_string_with_exception(words,index_row,word,string);
    int s = strlen (string);
    string[s] = symbol;
    string[s+1] = 0;
    print_string(string);
}

void replace (char* source, char* oldWord, char* newWord) {

    int index_row = 0;
    int index_len = 0;
    char symbol = source[strlen(source) - 1];

    for (int i = 0; i < strlen(source) - 1; i++) {
        if (source[i] != ' ') {
            words[index_row][index_len] = source[i];
            index_len++;
        } else {
            words[index_row][index_len] = 0;
            index_row++;
            index_len = 0;
        }
    }

    char string[273];
    make_string_with_replacement(words,index_row,oldWord,newWord,string);
    int s = strlen (string);
    string[s] = symbol;
    string[s+1] = 0;
    print_string(string);
}


int main()
{
    //1 част - remove

    char source[256];
    // char word[18];


    std::cin.getline(source,256);
    // std::cin>> word;

    // my_remove (source,word); // remove е заето;
    

//   ----------------------------------------
//    2 част - replace

    char oldWord[18];
    char newWord[18];

    std::cin>> oldWord;
    std::cin>> newWord;

    replace (source,oldWord,newWord);
   

    return 0;
}