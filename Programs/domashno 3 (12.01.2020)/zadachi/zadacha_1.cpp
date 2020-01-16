#include <iostream>


void delete_timetable (int** tt,const int size) {
    for (int i = 0; i < size; i++) {
        delete [] tt[i];
    }

    delete [] tt;
}

void swap(int& x, int& y) {
    int swap = x;
    x = y;
    y = swap;
}

void sort(int** tt,const int size){
    
    for (int i = 0; i < size - 1; i++) {
        int min_el = tt[i][0];
        int min_el2 = tt[i][1];
        int min_el_pos = i;

        for (int j = i + 1; j < size; j++) {
            if (min_el >= tt[j][0] && (min_el2 > tt[j][1] || min_el > tt[j][0])) {
                min_el = tt[j][0];
                min_el2 = tt[j][1];
                min_el_pos = j;
            }
        }

        swap(tt[i][0],tt[min_el_pos][0]);
        swap(tt[i][1],tt[min_el_pos][1]);
    }
}


void print_matrix (int** tt,const int size) {
    for (int i = 0; i < size; i++) {
        std::cout<<i<<". ";

        for (int j = 0; j < 2; j++) {
            std::cout<<tt[i][j]<<" ";
        }

        std::cout<<std::endl;
    }
}

void number_ofLectures (int** tt, int size) {
    int counter = 0;
    int start = 1;

    for (int i = 0; i < size; i++) {
        if (start <= tt[i][0]) {
            start = tt[i][1];
            counter++;
        }
    }

    std::cout << counter;
}


int main()
{
    int N; // подразбира се, че ограниченията за часовете са 1 <= начален/краен час  <= 24 (24:00 == 00:00 --> 0). няма лекции , траещи 0 часа.
    std::cin >> N;

    int** timetable = new int*[N]; // dinamichno zadelqne
    for (int i = 0; i < N; i++) {
        timetable[i] = new int[2];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin>>timetable[i][j];
        }
    }

    // print_matrix (timetable,N);

    sort (timetable,N); // sortirame po nachalen chas i po chas na svurshvane                       

    // std::cout<<"-------------"<<std::endl<<std::endl;

    // print_matrix (timetable,N);

    number_ofLectures (timetable,N);

    delete_timetable (timetable,N);

    return 0;
}