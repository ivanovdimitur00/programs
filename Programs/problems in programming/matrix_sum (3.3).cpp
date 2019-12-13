#include <iostream>
//using namespace std;

int main()
{
	int A[50][50];
	int n;
	
	std::cin>>n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin>>A[i][j];
		}
		std::cout<<std::endl;
	}
	
	int sum = 0;
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i][j] % 2 == 1) {
				sum += A[i][j];
			}
		}
	}
	
	std::cout<<sum;
	return 0;
}
