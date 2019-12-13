#include <iostream>

int main()
{
	bool IsTrue = false;
	int number,sum_numbers;
	std::cin>>number;
	
	sum_numbers = 0;
	
	while (number!= 0) {
			sum_numbers = sum_numbers + (number % 10);
			number = number / 10;
	}
	
	if (sum_numbers % 3 == 0) {
		IsTrue = true;
		std::cout<<IsTrue;
	}
	
	else {
		std::cout<<IsTrue;
	}
	
	system("pause");
	return 0;
}
