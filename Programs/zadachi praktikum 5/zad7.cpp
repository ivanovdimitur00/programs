#include <iostream>
using namespace std;

int main()
{
	bool statement = false;
	
	// a
	
	int p ;
	
	cout<<"p="<<p;
	cin>>p;
	
	
	if (p%4==0 || p%7==0) {
		statement = true;
		cout<<statement;
	}
	else {
		cout<<statement;
	}
	
	system("pause");
	return 0;
}
