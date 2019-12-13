#include <iostream>
#include <cstdlib>

int main()
{
	int array[10];
	int n;
	
	std::cin>>n;
	
	for (int i = 0 ; i < n ; i++) {
		std::cin>>array[i];
	}
	
	int random = rand () % n-1;
	
	array[random] = -1;
	
	int swap;
	
	for (int i = random ; i < n-1; i++) {
		swap = array[i];
		array[i] = array[i+1];
		array[i+1] = swap;
	}
	
	for (int i = 0 ; i < n ; i++) {
		std::cout<<array[i]<<' ';
	}
	
	return 0;
}
