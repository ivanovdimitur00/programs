#include <iostream>
#include <cstring>

struct PersonalName {

    char first_name[21];    
    char maiden_name[21];
    char family_name[21];
};

struct Student {

    PersonalName Student_name;
    int faculty_number;
    double student_grades[4]; //pos 1: DIS ; pos 2: Algebra ; pos 3: UP ; pos 4: DSTR
};



void init_student_grades (Student* students, const int pos) {
    std::cout << "{Grades}: " << std::endl;
    
    std::cout << "-DIS: ";
    std::cin >> students[pos].student_grades[0];
    
    std::cout << "-Algebra: ";
    std::cin >> students[pos].student_grades[1];
    
    std::cout << "-UP: ";
    std::cin >> students[pos].student_grades[2];
    
    std::cout << "-DSTR: ";
    std::cin >> students[pos].student_grades[3];
}

void init_student (Student* students, size_t size) {
    for (int i = 0; i < size; i++) {
        std::cout << "--------------------------------" << std::endl;
        std::cout << "Student " << i+1 << ":" << std::endl;

        std::cout << "First name: ";
        std::cin >> students[i].Student_name.first_name;

        std::cout << "Maiden name: ";
        std::cin >> students[i].Student_name.maiden_name;

        std::cout << "Family name: ";
        std::cin >> students[i].Student_name.family_name;

        std::cout << "Faculty number: ";
        std::cin >> students[i].faculty_number;

        init_student_grades(students,i);

    }
}

void information (Student* students, const int pos) {
    std::cout << "Name: "
                  << students[pos].Student_name.first_name
                  << " "
                  << students[pos].Student_name.maiden_name
                  << " "
                  << students[pos].Student_name.family_name
                  << std::endl
                  << "Faculty number: "
                  << students[pos].faculty_number
                  << std::endl
                  << "{Grades}: "
                  << std::endl
                  << "-DIS: "
                  << students[pos].student_grades[0]
                  << std::endl
                  << "-Algebra: "
                  << students[pos].student_grades[1]
                  << std::endl
                  << "-UP: "
                  << students[pos].student_grades[2]
                  << std::endl
                  << "-DSTR: "
                  << students[pos].student_grades[3]
                  << std::endl;
}

void print_all_students (Student* students, size_t size) {
    for (int i = 0; i < size; i++) {
    std::cout << std:: endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Student " << i+1 << ":" << std::endl;
    information (students,i);
    }
}

void print_specific_student (Student* students, const int pos) {
    std::cout << std:: endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Information about student " << pos << ":" << std::endl;
    information (students,pos - 1);
}

void print_student (Student* students, const int pos) {
    std::cout << std:: endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "student " << pos + 1 << ":" << std::endl;
    information (students,pos);
}



void print_best_student (Student* students, const int pos, const double GPA ) {

        std::cout << std:: endl;
        std::cout << "--------------------------------" << std::endl;
        std::cout << "The student with the highest GPA is - " << "student " << pos+1 << ":" << std::endl;
                  information (students,pos);
        std::cout <<"with a GPA of: "
                  << GPA
                  << std::endl;
}

void find_best_student (Student* students, size_t size) {
    
    double GPA = (students[0].student_grades[0] +
                  students[0].student_grades[1] +
                  students[0].student_grades[2] +
                  students[0].student_grades[3]) / 4;
    int student_number = 0;
    
    for (int i = 0; i < size; i++) {
        double GPA_iter = (students[i].student_grades[0] +
                  students[i].student_grades[1] +
                  students[i].student_grades[2] +
                  students[i].student_grades[3]) / 4;

        if (GPA < GPA_iter) {
            GPA = GPA_iter;
            student_number = i;
        }
    }

    print_best_student (students,student_number,GPA);

}



void swap_char(char* x, char* y) {
    char swap[21];
    strcpy(swap,x);
    strcpy(x,y);
    strcpy(y,swap);
}

void swap_int(int& x, int& y) {
    int swap = x;
    x = y;
    y = swap;
}

void swap_double(double& x, double& y) {
    double swap = x;
    x = y;
    y = swap;
}

char* which_name (Student* students, int pos, int choice){
    switch (choice) {
        case 1: {
            return students[pos].Student_name.first_name;
        }
        case 2: {
            return students[pos].Student_name.maiden_name;
        }
        case 3: {
            return students[pos].Student_name.family_name;
        }
        default: {
            return nullptr;
        }
    }
}

bool which_compare (int min_el, int stud_num, int choice){
    switch (choice) {
        case 4: {
            return min_el > stud_num;
        }
        case 5: {
            return min_el < stud_num;
        }
    }
    return 0;
}

void sort_name (Student students[],size_t size,const int choice) {
    for (int i = 0; i < size - 1; i++) {
        char* min_el = which_name(students,i,choice);
        int min_el_pos = i;

        for (int j = i + 1; j < size; j++) {
            if (strcmp(min_el,which_name(students,j,choice)) < 0) {
                min_el = which_name(students,j,choice);
                min_el_pos = j;
            }
        }
        swap_char(students[i].Student_name.first_name,students[min_el_pos].Student_name.first_name);
        swap_char(students[i].Student_name.maiden_name,students[min_el_pos].Student_name.maiden_name);
        swap_char(students[i].Student_name.family_name,students[min_el_pos].Student_name.family_name);

        swap_int(students[i].faculty_number,students[min_el_pos].faculty_number);

        swap_double(students[i].student_grades[0],students[min_el_pos].student_grades[0]);
        swap_double(students[i].student_grades[1],students[min_el_pos].student_grades[1]);
        swap_double(students[i].student_grades[2],students[min_el_pos].student_grades[2]);
        swap_double(students[i].student_grades[3],students[min_el_pos].student_grades[3]);
    }
}

void sort_facNumber (Student* students,size_t size,const int choice) {
    for (int i = 0; i < size - 1; i++) {
        int el = students[i].faculty_number;
        int el_pos = i;

        for (int j = i + 1; j < size; j++) {
            if (which_compare(el,students[j].faculty_number,choice)) {
                el = students[j].faculty_number;
                el_pos = j;
            }
        }
        swap_char(students[i].Student_name.first_name,students[el_pos].Student_name.first_name);
        swap_char(students[i].Student_name.maiden_name,students[el_pos].Student_name.maiden_name);
        swap_char(students[i].Student_name.family_name,students[el_pos].Student_name.family_name);

        swap_int(students[i].faculty_number,students[el_pos].faculty_number);

        swap_double(students[i].student_grades[0],students[el_pos].student_grades[0]);
        swap_double(students[i].student_grades[1],students[el_pos].student_grades[1]);
        swap_double(students[i].student_grades[2],students[el_pos].student_grades[2]);
        swap_double(students[i].student_grades[3],students[el_pos].student_grades[3]);
    }
}

void path_sort(const int choice, Student* students, size_t size) {
    switch (choice) {
        case 1: case 2: case 3: {
            sort_name (students,size,choice);
            break;
        }
        case 4: case 5: {
            sort_facNumber (students,size,choice);
            break;
        }
        case 6: {
            // sort_grade (students,size,choice);
            break;
        }
        default : {
            std::cout << "Sorting aborted!" << std::endl;
            break;
        }
    }
}

void sort_students (Student* students, size_t size) {
    int choice;

    std::cout << "--------------------------------" << std::endl;
    std::cout << "Table of contents:" << std::endl;
    std::cout << "1 - by first name;" 
              << std::endl
              << "2 - by second name;"
              << std::endl
              << "3 - by third name;"
              << std::endl
              << "4 - by ascending faculty number;"
              <<std::endl
              << "5 - by descending faculty number;"
              << std::endl
              << "6 - by grade (same as (5)); (X)"
              <<std::endl
              <<std::endl;

    std::cout << "Choose what sorting you want done?: ";
    std::cin >> choice;

    std::cout << std::endl;

    path_sort (choice,students,size);
}



void filter_facNumber (Student* students,size_t size, const int fac_num) {
    
    int found = 0;
    
    for (int i = 0; i < size; i++) {
        if (students[i].faculty_number == fac_num) {
            print_student (students,i);

            found++;
        }
    }

    if (found == 0){
        std::cout << "No matches found!" << std::endl;
    }
    if (found > 1) {
        std::cout << "Warning: more than 1 matches were found! check database entry/university registry for errors." << std::endl;
    }
}

void filter_name (Student* students,size_t size, const int choice, const char* name) {
    
    bool found = false;
    
    for (int i = 0; i < size; i++) {
        if (strcmp(which_name(students,i,choice),name) == 0) {
            print_student (students,i);

            found = true;
        }
    }

    if (!found){
        std::cout << "No matches found!" << std::endl;
    }
}

void path_filter(const int choice, Student* students, size_t size) {
    switch (choice) {
        case 1: case 2: case 3: {
            std::cout << "Enter a name: ";
            
            char name[21];
            std::cin >> name;

            std::cout << std::endl;

            filter_name (students,size,choice,name);
            break;
        }
        case 4: {
            std::cout << "Enter faculty number: ";

            int fac_number;
            std::cin >> fac_number;

            std::cout << std::endl;

            filter_facNumber (students,size,fac_number);
            break;
        }
        /*
        case 5: {
            //extra (includes equals to, greater/lower than)
            // filter_grade (students,size,choice);
            break;
        }
        */
        default : {
            std::cout << "Filtering aborted!" << std::endl;
            break;
        }
    }
}

void filter_students (Student* students, size_t size) {
    int choice;

    std::cout << "--------------------------------" << std::endl;
    std::cout << "Table of contents:" << std::endl;
    std::cout << "1 - by first name;" 
              << std::endl
              << "2 - by second name;"
              << std::endl
              << "3 - by third name;"
              << std::endl
              << "4 - by faculty number;"
              << std::endl
              << "5 - by grade (same as (4)); (X)"
              <<std::endl
              <<std::endl;

    std::cout << "Choose what criteria you would like for filtering?: ";
    std::cin >> choice;

    std::cout << std::endl;

    path_filter (choice,students,size);
}



int main()
{
    size_t number;
    std::cout << "How many student would you like? : ";
    std::cin >> number;

    Student* students = new Student[number];
    

    // students = init_number (number);

    init_student (students,number);

    // find_best_student (students,number); // works

    // filter_students (students,number); // works

    sort_students (students,number);
    print_all_students (students,number); //works

    /*
    std::cout << std::endl; 
    std::cout << "pick a student you wish to view (pick a number between 1 and "  
              << number 
              << ",incl.): ";
    int target;
    std::cin >> target;

    print_specific_student(students,target);  //(works)
    */ 

    delete [] students;

    return 0;
}

/*
3
dimitar 
plamenov 
ivanov
81943
5
5
5
5

verginiq
toshkova
koleva
88997
4
4
4
4

nikolaj
dimov
paev
81983
3.97
4.10
6.00
5.70

*/