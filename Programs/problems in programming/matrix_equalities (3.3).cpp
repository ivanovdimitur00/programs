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
	
	int axb[50][50] = {0};
	
	for (int i = 0; i < n ; i++) {
		
		for (int j = 0; j < n; j++) {
			if (a[i] == b[j]) {
				axb[i][j] = 1;
			}
		}
	}
		
		for (int i = 0; i < n; i++) {
			
			for (int j = 0; j < n; j++) {
				std::cout<<axb[i][j]<<" ";
			}
			std::cout<<std::endl;
		}
		
	return 0;
}
