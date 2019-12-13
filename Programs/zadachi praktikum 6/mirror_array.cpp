#include <iostream>

int main()
{
	int array[100];
	int n;
	
	std::cin>>n;
	
	for (int i = 0 ; i < n ; i++) {
		std::cin>>array[i];
	}
	
	int swap;
	
	for (int i = 0 ; i < n/2 ; i++) {
		swap = array[i];
		array[i] = array[n-1-i];
		array[n-1-i] = swap;
	}
	
	for (int i = 0 ; i < n ; i++) {
		std::cout<<array[i]<<" ";
	}
}
