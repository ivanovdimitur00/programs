#include <iostream>

int main()
{
	int numbers_ammount;
	int numbers[100];
	
	std::cin>>numbers_ammount;
	
	int max;
	
	for (int i = 0; i < numbers_ammount; i++) {
		std::cin>>numbers[i];
	}
	
	max = numbers[0];
	
	for (int i = 1; i < numbers_ammount; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}
	}
	
	std::cout<<max;
	
	return 0;
}
