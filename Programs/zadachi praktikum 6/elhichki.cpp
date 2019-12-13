#include <iostream>
#include <iomanip>

int main()
{
	int n;
	
	std::cin>>n;
	
	//ravnobedren triugulnik
	
	for (int i = 1; i <= n; i++) {
		
		std::cout<<std::setw(n-i+1);
		
		for (int j = 1 ; j < 2*i; j++) {
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	
	std::cout<<std::endl;
	
	//kwadrat
	
	for (int i = 1; i <= n; i++) {
		
		for (int j = 1 ; j <= n; j++) {
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	
	std::cout<<std::endl;
	
	//pravougulen triugulnik
	
	for (int i = 1; i <= n; i++) {
		
		for (int j = 1 ; j <= i; j++) {
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	
	std::cout<<std::endl;
	
	// elha
	
	int N=n;
	
	for (int i = 1 ; i <= N ; i++) {
		
		for (int j = 1; j <= N+i-1; j++) {
		
		for (int k = 1; k < 2*j; k++) {
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	}
	
	
	return 0;
	}
	
