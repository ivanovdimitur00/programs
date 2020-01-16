#include <iostream>
#include <cstring>


void replace_exact (char* word, char* sent_word) {
    for (int i = 0; i < strlen(word); i++) {
        sent_word[i] = word[i];
    }
}

void replace_with_shorter (char* word, char* sent_word) {
    for (int i = 0; i < strlen(word); i++) {
        sent_word[i] = word[i];
    }

    sent_word[strlen(word)] = '\0';
}

void replace_with_longer (char* word, char* sent_word) {
    for (int i = 0; i < strlen(word); i++) {
        sent_word[i] = word[i];
    }

    sent_word[strlen(word)] = '\0';
}


void find_replacement(char* sent_word, char word[][101],int n) {
    for (int i = 0 ; i < 2*n; i = i+2) {
            if (strcmp(sent_word,word[i]) == 0) {
                
                if (strcmp(word[i+1],sent_word) == 0) {
                    replace_exact (word[i+1],sent_word);
                    break;

                } else if (strcmp(word[i+1],sent_word) < 0) {
                    replace_with_shorter (word[i+1],sent_word);
                    break;

                } else {
                    replace_with_longer (word[i+1],sent_word); 
                    break;
                }
            }
    }
}



int main()
{
    int n;
    std::cin>>n;

    char words[200][101];
    for (int i = 0; i < 2*n; i++) {
        std::cin>>words[i];
    }

    char sentence[4097];
    std::cin.getline(sentence,4097);

    char sentence_word[101];
    int index = 0;

    char symbol = sentence[strlen(sentence) - 1];

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] != ' ' && 
            sentence[i] != '.' &&
            sentence[i] != '?' &&
            sentence[i] != '!' ) {

            sentence_word[index] = sentence[i];
            index++;
        } else {
            index++;
            sentence_word[index] = '\0';
            find_replacement(sentence_word,words,n);
           
            if (strlen(sentence) - i != 1) {
                std::cout<<sentence_word<<" ";
            } else {
                std::cout<<sentence_word;
            }

            index = 0;
        }
    }

    std::cout<<symbol<<std::endl;

    return 0;
}