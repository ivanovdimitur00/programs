#include <iostream>

int main()
{
	int array[100];
	int n;
	int curr_pos = 0;
	
	std::cin>>n;
	
	for (int i = 0 ; i < n; i++) {
		std::cin>>array[i];
	}
	
	int min;
	int min_position;
	int swap;
	
	for (int j = 0 ; j < n; j++) {
		for (int i = j; i < n-1 ; i ++) {
		min = array[i];
		min_position = i;
		if (min > array[i+1]) {
			min = array[i+1];
			min_position = i+1;
		}
	}
		swap = array[curr_pos];
		array[curr_pos] = array[min_position];
		array[min_position] = swap;
		curr_pos++;
	}
	
	for (int i = 0 ; i < n; i++) {
		std::cout<<array[i]<<" ";
	}
	
	return 0;
}
