#include <iostream>
#include <math.h>

int main()
{
	int n,k;
	std::cin>>n;	
	std::cin>>k;
	
	int count=0;
	int N=n;
	
	while (n!= 0)
	{
		count++;
		n = n / k;
	}
	
	count--;
	
	
	if (N==1) {
		std::cout<<"n e stepen na k";
	}
	else if (pow(k,count) == N) {
		std::cout<<"n e stepen na k";
	} else {
		std::cout<<"n NE e stepen na k";
	}
	
	system("pause");
	return 0;
	
}
