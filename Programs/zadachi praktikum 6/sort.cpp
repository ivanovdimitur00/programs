#include <iostream>

int main()
{
	int array[100];
	int n;

	std::cin>>n;

	for (int i = 0 ; i < n; i++) {
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

	for (int i = 0 ; i < n; i++) {
		std::cout<<array[i]<<" ";
	}

	return 0;
}
