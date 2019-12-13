#include <iostream>
#include <math.h>

int main()
{
	int x,n;
	std::cin>>x;
	std::cin>>n;
	int sum=0;
	int step= 1;
	int operation=1;
	
	while (step <= n)
	{
		if (operation % 2 == 1) {
			sum += pow(x,step);
		} else {
			sum -= pow(x,step);
		}
		step += 2;
		operation++;
//		std::cout<<step<<" ";
	}
	
	std::cout<<sum;
	
	system("pause");
	return 0;
}
