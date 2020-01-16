#include <iostream>

struct PersonalName {

    char first_name[21];    
    char maiden_name[21];
    char family_name[21];
};

PersonalName init_name (PersonalName& person) {
    
    std::cin >> person.first_name;
    std::cin >> person.maiden_name;
    std::cin >> person.family_name;

    return person;
 }

 void print_name_of_person (PersonalName person) {
     std::cout << person.first_name
               << ' '
               << person.maiden_name
               << ' '
               << person.family_name;
 }

int main()
{
    PersonalName person;

    person = init_name(person);

    print_name_of_person(person);

    return 0;
}

/*
 Primer: Dimitar Plamenov Ivanov

 output: Dimitar Plamenov Ivanov
*/