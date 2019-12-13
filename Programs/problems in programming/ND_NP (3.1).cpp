#include <iostream>

int main()
{
	int n;
	int number;
	int previous_number;
	int counter = 1;
	int counter_previous = 1;
	
	
	std::cout<<"how many numbers? "<<std::endl;
	std::cin>>n;
	
	std::cin>>number;
	
	previous_number = number;
	
	for (int i = 2; i <= n; i++) {
		std::cin>>number;
		if (previous_number <= number) {
			previous_number = number;
			counter++;
		} else {
			if (counter_previous < counter) {
				counter_previous = counter;
			}
			counter = 1;
		}
	}
	
	if (counter > counter_previous) {
			std::cout<<counter;
	} else {
		std::cout<<counter_previous;
	}
	
	system("pause");
	return 0;
	
}
