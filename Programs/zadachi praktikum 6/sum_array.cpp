#include <iostream>

int main()
{
	int numbers_ammount;
	int numbers[100];
	int sum = 0;
	
	std::cin>>numbers_ammount;
	
	for (int i = 0; i < numbers_ammount; i++) {
		std::cin>>numbers[i];
	}
	
	for (int i = 0; i < numbers_ammount; i++) {
		sum = sum + numbers[i];
	}
	
	
	std::cout<<sum;
	
	return 0;
}
