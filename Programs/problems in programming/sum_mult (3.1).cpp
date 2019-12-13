#include <iostream>

int main()
{
	int n; 
	int number;
	int sum = 0 , mult = 1;
	
	std::cout<<"how many numbers?";
	std::cout<<std::endl;
	std::cin>>n;
	
	for (int i = 1; i <= n; i++) {
		std::cin>>number;
		if (number >= 0 ) {
			sum += number;
		} else {
			mult *= number;
		}
	}
	
	std::cout<<"sum= "<<sum<<" ; "<<"mult= "<<mult;
	
	system("pause");
	return 0;
}
