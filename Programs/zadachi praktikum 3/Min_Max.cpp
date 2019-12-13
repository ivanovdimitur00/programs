#include <iostream>
using namespace std;

int main()
{
	int num1,num2,num3;
	
	cin>>num1>>num2>>num3;
	
	int max = num1;
	int min = num1;
	
	
	if ( max < num2 ) {
		max = num2 ;
	}
	
	if ( max < num3 ) {
		max = num3 ;
	} 
	
	if ( min > num2 ) {
		min = num2 ;
	}
	
	if ( min > num3 ) {
		min = num3 ;
	}
	
	cout<<"min= "<<min<<" "<<"max= "<<max<<endl;
	system("pause");
	return 0;
	
}
