#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
	int n;
	std::cin>>n;
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++) {
			std::cout<<'*';
		}
		std::cout<<std::endl;
	}
	
	for (int i = 1; i <= n; i++){
		std::cout<<std::setw(n-i+1);
		for (int j = 1; j <= i; j++) {
			std::cout<<'*';
		}
		std::cout<<std::endl;
	}
	
	for (int i = 1; i <= n; i++){
		std::cout<<std::setw((n-i+2)/2);
		for (int j = 1; j <= i; j++) {
			std::cout<<'*';
		}
		std::cout<<std::endl;
	}
	
	system("pause");
	return 0;
}
