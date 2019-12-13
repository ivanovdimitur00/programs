#include <iostream>

int main()
{
	unsigned int n;
	
	std::cin>>n;
	
	int sum_dividers = 0;
	
	for (int i = 1; i < n;i++ ) {
		for (int j = 1;j <= i/2; j++) {
		if (i % j == 0) {
			sum_dividers += j;
		}
		
		}
		if (sum_dividers == i) std::cout<<i<<" ";
		sum_dividers = 0;
	}
	
	system("pause");
	return 0;
}
