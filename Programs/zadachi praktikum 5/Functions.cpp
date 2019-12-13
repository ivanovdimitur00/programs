#include <iostream>
//using namespace std;

//delkaraciq na funkciq sled main
// int log(int number1 ; int number2)

//func struct.

/*

Return_Type func_name ([params]) {


}

*/


//return_type = int | char | Double | unsigned int (ima po golqm obhvat) | Float ...
// return type_void (ne vrushta stoinost posredstwom (return) (zatowa cout<<...)

/*

void log (int number) {
	std::cout<<number<<std::endl;
}

*/

/*

void log () {
	int number;
	number = 2;	
	std::cout<<number<<std::endl;	
}

*/

/*

bool log (int number) {	
	std::cout<<number<<std::endl;	
	return 1; // samo 0 i 1
}

*/

int log(int number){
	int number_2 = 7;
	std::cout<<number<<std::endl;
	return number_2;
	
	return 3; // nqma da se izpulni. prikluchva s gorniq return
}

int main()
{
	int a;
	a=4;
	
//	log(2);
//	log();
//	log(a);
	std::cout<<log(a);
	return 0;
}

int log(int number1,int number2){
	int number_2 = 7;
	std::cout<<number<<std::endl;
	return number_2;
	
	return 3; // nqma da se izpulni. prikluchva s gorniq return
}
