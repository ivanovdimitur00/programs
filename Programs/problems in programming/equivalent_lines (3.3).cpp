#include <iostream>

int main()
{
	int a[50];
	int b[50];
	int n;
	std::cin>>n;
	
	for (int i = 0; i < n ; i++) {
		std::cin>>a[i];
	}
	
	for (int i = 0; i < n ; i++) {
		std::cin>>b[i];
	}
	
	int counter = 0;
	
	for (int i = 0; i < n ; i++) {
		for (int j = 0; j < n ; j++) {
		if (a[i] == b[j]) {
			counter ++;
			break;
		}
	}
	}
	
	if (counter == n) {
		std::cout<<"yes";
	} else {
		std::cout<<"no";
	}
	
	return 0;
}
