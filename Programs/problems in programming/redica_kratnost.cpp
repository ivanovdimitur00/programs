#include <iostream>

int main()
{
	int n;
	std::cin>>n;
	
	for (int i = 1 ; i <= n; i++) {
		
		if ((i*i*i + 13 * i * n + n*n*n) % 5 == 0 || 
		(i*i*i + 13 * i * n + n*n*n) % 5 == 0) {
			
			std::cout<<i*i*i + 13 * i * n + n*n*n<<" ";
		}
	}
	
	system("pause");
	return 0;
}
