#include <iostream>

int main()
{
	int numbers_ammount;
	int numbers[100];
	
	int sum = 0;
	
	int dividers_of_sum[1000];
	int position = 0;
	
	std::cin>>numbers_ammount;
	
	for (int i = 0 ; i < numbers_ammount; i++) {
		std::cin>>numbers[i];
	}
	
	for (int i = 0 ; i < numbers_ammount; i++) {
		sum += numbers[i];
	}
	
	std::cout<<"sum: "<<sum<<std::endl;
	
	for (int i = 2; i < sum/2; i++) {
		if (sum % i == 0) {
			dividers_of_sum[position] = i;
			position++;
		}
	}
	
	/*
	for (int i = 0 ; i < position; i++) {
		std::cout<<dividers_of_sum[i]<<' ';
	}
	*/
	
	int counter_prime = 1;
	
	std::cout<<"dividers: ";
	
	for (int i = 0 ; i < position ; i++) {
	
		for (int j = 1; j < dividers_of_sum[i]; j++) {
			
			if (dividers_of_sum[i] % j == 0) {
				counter_prime++;
			}
		}
		
		if (counter_prime == 2) {
			std::cout<<dividers_of_sum[i]<<" ";
			counter_prime = 1;
		} else {
			counter_prime = 1;
		}
		
	}
	
	return 0;
}
