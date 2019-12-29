#include <iostream>
#include <cstring>


void find_concatenations (char matrix_letters[][20], int rows, int cols, char concs[][21]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            const char letter = matrix_letters[i][j];
            strcat(concs[i],&letter); //???
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            const char letter = matrix_letters[j][i];
            strcat(concs[rows + i],&letter); //???
        }
    }
}


void separate_words (char words[][21],char* sent, int rows, int cols) {
    for (int i = 0; i < strlen(sent); i++) {
        if (sent[i] != ' ' && 
            sent[i] != '.' &&
            sent[i] != '?' &&
            sent[i] != '!' ) {

            words[cols][rows] = sent[i];
            rows++;
        } else {
            rows++;
            words[cols][rows] = '\0';

            rows = 0;
            cols++;
        }
    }
}

int find_words_ammount (char* sent) {
    
    int br = 0;

    for (int i = 0; i < strlen(sent); i++) {
        if (sent[i] == ' ' || 
            sent[i] == '.' ||
            sent[i] == '?' ||
            sent[i] == '!' ) {
                br++;
        } 
    }
    return br;
}


// bool find_substr(char* conc, char* word) {
    
//     bool found;
    
//     for (int i = 0; i < strlen(conc) - strlen(word); i++) {

//         found = true;
//         for (int j = 0; j < strlen(word); j++) {
//             if (conc[i+j] != word[j]) {
//                 found = false;
//             }
//         }
//         if (found) return found;
//     }
//     return found;
// }


void find_matches(char concs[][21], int size,
                  char words[][21], int ammount,
                  bool* found) { // size == ammount

                    for (int i = 0; i < ammount; i++) {
                        for (int j = 0; j < size; j++) {
                            if (strstr(concs[j],words[i])) { // find_substr ---> segmentation fault
                                found[i] = 1;
                            }
                        }
                    }    

} 


void list (bool* found, char words[][21], int ammount) {
    for (int i = 0; i < ammount; i++) {
        if (found[i]) {
            std::cout<<words[i]<<std::endl;
        }
    }
}


void output(bool* found, char words[][21], int ammount) {

    int br = 0;

    for (int i = 0; i < ammount; i++) {
        if (found[i]) {
            br++;
        }
    }

    if (br == 0) {
        std::cout<<"No words are found. ";
        return;
    }
    if (br < ammount) {
        std::cout<<"Some words are found. List: "<<std::endl;
        list(found,words,ammount);
        return;
    }
    if (br == ammount) {
        std::cout<<"All words are found.";
        return;
    }
}



int main()
{
    char sentence[256];
    std::cin.getline(sentence,256);

    int rows,columns;
    std::cin>>rows>>columns;


    char matrix_letters[20][20];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin>>matrix_letters[i][j];
        }
    }


    char concatenations[40][21];
    int size = rows + columns;

    find_concatenations(matrix_letters,rows,columns,concatenations);


    char words[128][21];
    bool found[128] = {0};
    int index_rows = 0; 
    int index_columns = 0; //broi dumi

    separate_words(words,sentence,index_rows,index_columns);
    index_columns = find_words_ammount(sentence);

    find_matches(concatenations, size,
                 words, index_columns,
                 found);

    output(found, words, index_columns);

    return 0;
}