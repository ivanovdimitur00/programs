#include <iostream>
using namespace std;

int main()
{
	int x,y;
	
	cin>>x>>y;
	
	if ( y % x == 0 ) {
		cout<<"y se deli na x ."<<endl;
	}
	else if ( x % y == 0 ) {
		cout<<"x se deli na y ."<<endl;
	} 
	else {
		cout<<"Nito ednoto ne se deli na drugoto"<<endl;
	}
	
	system("pause");
	return 0;
	
}
