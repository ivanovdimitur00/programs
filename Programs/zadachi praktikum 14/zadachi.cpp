#include <iostream>

struct Student {

char first_name[21];
char maiden_name[21];
char family_name[21];
int faculty_number;
int course;
int semester;
int group;
};


int main()
{
    int N;

    std::cout << "input ammount of students: ";
    std::cin >> N;

    // Student* students = new Student[100];
    Student students[100];

    for (size_t i = 0; i < N; i++) {

        std::cout << "input first,second and third name of sudent faculty number, course, semester and group for student No. "
                  << i 
                  <<":"
                  << std::endl;
        
        std::cin >> students[i].first_name
                 >> students.maiden_name[i]
                 >> students.family_name[i]
                 >> students.faculty_number
                 >> students.course
                 >> students.semester
                 >> students.group;
    }


    //zadacha 1 - student struct + func examples

    return 0;
}