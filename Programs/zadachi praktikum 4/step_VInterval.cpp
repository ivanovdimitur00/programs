#include <iostream>
#include <math.h>
//using namespace std;

int main()
{
	const int two = 2;
	
	
	int number = 1;
	int i = 0;
	
	int interval;
	std::cin>>interval;
	
	//sus pow(,);
	
	while (number <= interval){
		std::cout<<pow(two,i)<<" ";
		i++;
		number = pow(two,i);
	}
	
	std::cout<<std::endl;
	
	number = 1;
	
	//bez pow(,);
	
	while (number <= interval){
		for (;true;){
			std::cout<<number<<" ";
			number = number * 2;
			break;
		}
	}
	
	system("pause");
	return 0;
}
