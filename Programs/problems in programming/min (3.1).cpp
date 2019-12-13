#include <iostream>

int main()
{
	int number_count,number;
	int min;
	
	std::cout<<"how many numbers?";
	std::cin>>number_count;
	
	std::cin>>number;
	min = number;
	
	for (int i=2; i<= number_count; i++) {
		std::cin>>number;
		if (min > number) {
			min = number;
		}
	}
	
	std::cout<<min;
	
	system("pause");
	return 0;
	
}
