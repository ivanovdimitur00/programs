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

	for (int i = 0 ; i < N ; i++) {

		for (int j = 0; j < N+i; j++) {

                std::cout<<std::setw((N*2)-i-j+n-2);

		for (int k = 1-i; k < 2*(j+1)+i; k++) {
			std::cout<<"*";
		}
		std::cout<<std::endl;
	}
	}
return 0;
}
