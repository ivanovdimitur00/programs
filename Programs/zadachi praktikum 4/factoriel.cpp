#include <iostream>

int main()
{
	int n;
	int factorial = 1;
	std::cin>>n;
	
	for (int i=1; i<=n; i++) {
		factorial *= i;
	}
	
	std::cout<<factorial;
	
	system("pause");
	return 0;
}
