#include <iostream>

int main()
{
	int number;
	
	int sum = 0;
	int mult = 1;
	
	do {
		std::cin>>number;
		
		if (number == 0) {
			break;
		}
		
		
		sum += number;
		mult *= number;
		
	} while (number !=  0);
	
	std::cout<<"sum = "<<sum<<"\n";
	std::cout<<"mult = "<<mult<<"\n";
	
	system("pause");
	return 0;
}
