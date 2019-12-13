#include <iostream>
#include <math.h>
//using namespace std;

int main()
{
	const int two = 2;
	int n;
	
	int number = 1;
	
	std::cin>>n;
	
	//sus pow(,);
	
	for (int i = 0; i <= n; i++) {
		std::cout<<pow(two,i)<<" ";
	}
	
	std::cout<<std::endl;
	
	//bez pow(,);
	
	for (int i = 0; i <= n; i++) { 
		for (int j = 0; j < i ; j++) {
			number = number * 2;
		}
		std::cout<<number<<" ";
		number = 1;
	}
	
	system("pause");
	return 0;
}
