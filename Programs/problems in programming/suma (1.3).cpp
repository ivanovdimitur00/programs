#include <iostream>

int main()
{
	int n;
	int sum = 0;
	std::cin>>n;
	
	for (int i = 2; i <= n; i += 3) {
		sum += i;
	}
	
	std::cout<<sum;
	
	system("pause");
	return 0;
}
