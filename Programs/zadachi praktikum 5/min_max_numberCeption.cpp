#include <iostream>
//using namespace std;

int main()
{
	unsigned int number_chars[20],number,number_length = 0;
	int min_number,max_number;
	
	std::cin>>number;
	
	int i=0;
	
	while (number != 0) {
		number_chars[i] = number % 10;
		number /= 10;
		number_length++;
		i++;
	}
	
//	for (int j=0; j < number_length; j++) {
//		std::cout<<number_chars[j];
//	}

	min_number = number_chars[0];
	max_number = number_chars[0];
	
	for (int k = 1; k < number_length; k++) {
		if (min_number > number_chars[k]) {
			min_number = number_chars[k];
		}
		if (max_number < number_chars[k]) {
			max_number = number_chars[k];
		}
	}
	
	std::cout<<"min. num. of number: "<<min_number;
	std::cout<<std::endl;
	std::cout<<"max. num. of number: "<<max_number;
	
	system("pause");
	return 0;
}
