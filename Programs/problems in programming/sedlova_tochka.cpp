#include <iostream>

int main()
{
	int A[20][30];
	int n,m;
	
	std::cout<<"rows = ";
	std::cin>>n;
	std::cout<<"columns = ";
	std::cin>>m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m ; j++) {
			std::cin>> A[i][j];
		}
	}
	
	int min,max;
	
	int sedlova[20][30];
	bool is_min;
	bool is_max;
	int i,j,a,b;
	
	for ( i = 0; i < n; i++) {
		
		for ( j = 0; j < m ; j++) {
		
			min = A[i][j];
			max = A[i][j];
			is_min = true;
			is_max = true;
			
				for ( a = 0; a < m ; a++) {   //min v reda
					if (A[i][j] > A[i][a]) {
						is_min = false;
					}
				}
			
				for ( b = 0; b < n ; b++) {   //max v kolona
					if (A[i][j] < A[b][j]) {
						is_max = false;
						}
					}
			
					if (is_min == true && is_max == true) {
							sedlova[i][j] = 1;
						} else {
							sedlova[i][j] = 0;
						}
		}
	}
	
	std::cout<<std::endl;
	
	for (i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (sedlova[i][j] == 1) {
				std::cout<<A[i][j]<<" ";
			}
		}
			std::cout<<std::endl;
	}
	
	return 0;
}
