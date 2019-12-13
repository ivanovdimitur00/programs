#include <iostream>

int main()
{
	int array[100];
	
	int numbers_array;
	
	std::cin>>numbers_array;
	
	for (int i = 0; i < numbers_array ; i++) {
		std::cin>>array[i];
	}
	
	int counter = 0;
	
	for (int i = 0; i < numbers_array/2 ; i++) {
		if (array[i] == array[numbers_array-1-i]) {
			counter++;
		}
	}
	
	if (counter == numbers_array/2) {
		std::cout<<"symmetrical";
	} else {
		std::cout<<"not symmetrical";
	}
	
	return 0;
}
