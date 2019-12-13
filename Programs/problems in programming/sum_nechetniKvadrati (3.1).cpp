#include <iostream>
#include <math.h>

int main()
{
	int n;
	int number;
	int is_odd; // double?
	int sum = 0;
	std::cout<<"how many numbers?"<<std::endl;
	std::cin>>n;
	

	for (int i = 1; i <= n; i++) {
			std::cin>>number;
			if ((int)sqrt(number)*(int)sqrt(number) < number &&
			 	(int)sqrt(number) % 2 == 1) {
			 		
				is_odd = ceil(sqrt(number));
			} else {
				is_odd = floor(sqrt(number));
			}
			
		if (is_odd % 2 == 1) {
			sum += number;
		}
	}
	
	std::cout<<sum;
	
	system("pause");
	return 0;
}
