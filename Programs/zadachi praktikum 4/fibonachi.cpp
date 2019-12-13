#include <iostream>

int main()
{
	int fib1 = 1;
	int fib2 = 1;
	int counter = 2;
	
	int n;
	
	std::cin>>n;
	
	while (counter < n) {
		fib1 += fib2;
		fib2 += fib1;
		counter += 2;
	}
	
	if (n%2 == 1) {
		std::cout<<fib1;
	}
	
	if (n%2 == 0){
		std::cout<<fib2;
	}
	
	system("pause");
	return 0;
}
