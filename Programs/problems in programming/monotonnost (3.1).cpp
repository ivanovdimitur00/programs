#include <iostream>

int main()
{
	int n;
	int number;
	int previous_number;
	bool is_true = true;
	std::cout<<"how many numbers?";
	std::cout<<std::endl;
	
	std::cin>>n;
	
	if (n == 0 || n == 1 || n < 0) {
		std::cout<<"no";
		return 0;
	} else {
			std::cin>>number;
	}
	
	previous_number = number;
	
	for (int i = 2;i <= n; i++) {
		std::cin>>number;
		if (previous_number >= number) {
			is_true = false;
		}
		previous_number = number;
	}
	
	if (is_true == true) {
		std::cout<<"yes";
	} else {
		std::cout<<"no";
	}
}
