#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cin>>x;
	
	
	if ( x / 100 < x / 10 % 10  &&  x / 10 % 10 < x % 10 ) {
		cout<< "TRUE";
	}
	
	else {
		cout<<"FALSE";
	}
	
	system("pause");
	return 0;
}
