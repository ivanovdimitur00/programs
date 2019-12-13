#include <iostream>

int main()
{
	unsigned int n;
	int sum = 0;
	
	do {
		std::cin>>n;
		if (n/10 > 0) {
			sum += n;
		}
	} while (n >= 10 && n<= 99);
	
	std::cout<<sum<<std::endl;
	
	system("pause");
	return 0;
}
