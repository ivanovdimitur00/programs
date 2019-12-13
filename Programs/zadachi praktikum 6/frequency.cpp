#include <iostream>

int main()
{
	int n;
	int array[100];
	
	std::cin>>n;
	
	for (int i = 0; i < n ; i++) {
		std::cin>>array[i];
	}
	
	
	int min;
	int min_pos;
	int swap;

	for (int i = 0; i < n ; i++) {

		min = array[i];
		min_pos = i;

		for (int j = i; j < n-1; j++) {


			if (min > array[j+1]) {
				min = array[j+1];
				min_pos = j+1;
			}
		}

		swap = array[min_pos];
		array[min_pos] = array[i];
		array[i] = swap;
	}
	
	int unique_number= array[0];
	int unique_number_ammount = 1;
	int unique_numbers[100];
	int unique_numbers_ammount[100];
	int j = 0;
	
	for (int i = 1; i < n; i++) {
		
		if (unique_number == array[i]) {
		unique_number_ammount++;
	} else { 
			unique_numbers[j] = unique_number;
			unique_numbers_ammount[j] = unique_number_ammount;
			j++;
			unique_number= array[i];
			unique_number_ammount = 1 ;
		}	
	}
	
	int max_number = unique_numbers[0];
	int max_number_ammount = unique_numbers_ammount[0];
	
	for (int i = 1; i < j; i++) {
		
		if (max_number_ammount < unique_numbers_ammount[i]) {
			max_number_ammount = unique_numbers_ammount[i];
			max_number = unique_numbers[i];
		}
	}
	
	std::cout<<max_number<<" is present "
			 <<max_number_ammount<<" times in the array.";
	return 0;
}
