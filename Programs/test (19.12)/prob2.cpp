#include <iostream>
#include <cstring>

void change_to_small_letter(char* a, char* b) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i]>='A' && a[i] <= 'Z') {
            a[i] = a[i] + ('a' - 'A');
        }
    }

    for (int i = 0; i < strlen(b); i++) {
        if (b[i]>='A' && b[i] <= 'Z') {
            b[i] = b[i] + ('a' - 'A');
        }
    }
}

void swap(char& x, char& y) {
    char swap = x;
    x = y;
    y = swap;
}

void selection_sort(char* a,char* b){
    
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


    for (int i = 0; i < strlen(b) - 1; i++) {
        char min_el = b[i];
        int min_el_pos = i;

        for (int j = i + 1; j < strlen(b); j++) {
            if (min_el > b[j]) {
                min_el = b[j];
                min_el_pos = j;
            }
        }

        swap(b[i],b[min_el_pos]);
    }
}


bool shuffle(char* a,char* b) {

    if (strlen(a) > strlen(b) || strlen(a) < strlen(b)) { // razlichni dylzhini;
        return false;
    }

    int counter = 0;

    for (int i = 0; i < strlen(a); i++) {  //dylzhinite sa ednakvi
            if (a[i] == b[i]) {
                counter++;
            }
    }


    if (counter == strlen(a)) {
        return true;
    } else {
        return false;
    }
}


bool shufflerec(char*a, char* b) {
    
    if (strlen(a) == 0 && strlen(b) == 0) {
        return true;
    }

    if (strlen(a) > strlen(b) || strlen(a) < strlen(b)) {
        return false;
    }

    if (a[0] == b[0] && strlen(a) != 0) {
        shufflerec(a+1,b+1);
    } else {
        return false;
    }
}


int main()
{
    char a[256];
    char b[256];

    std::cin>>a;
    std::cin>>b;

    change_to_small_letter(a,b);
    selection_sort(a,b);

    std::cout<<shuffle(a,b);
    std::cout<<shufflerec(a,b);

    return 0;
}

/* primeri (shuffle) && (shufflerec)

1)

Exam
MaXe

output: 1


2)

exaMmm
mmmAXe

output: 1


3)

aaabb
bbaaa

output: 1


4)

exame
exam

output: 0


5)

mania
exam

output: 0


6)

abcde
xyzwv

output: 0

7)
a = {}  prazni nizove
b = {}

output: 1


*/