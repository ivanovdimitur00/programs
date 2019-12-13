#include <iostream>
//using namespace std;

int main()
{
	int arr1[4] = {15,44,77,13};
	int arr2[100];
	
	int arr2_elements;
	
	std::cin>>arr2_elements;
	
	for (int i = 0 ; i < arr2_elements ; i++) {
		std::cin>>arr2[i];
	}
	
	int counter = 0;
	
	for (int i = 0 ; i < 4 ; i++) {
		for (int j = 0 ; j < arr2_elements ; j++) {
			if (arr1[i] == arr2[j]) {
				counter++;
			}
		}
	}
	
	if (counter >= 4 ) {
		std::cout<<"array 2 contains all elements of array 1.";
	} else {
		std::cout<<"array 2 does not contain all elements of array 1.";
	}
	
	return 0;
}
