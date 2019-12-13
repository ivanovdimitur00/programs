#include <iostream>
using namespace std;

int main()
{
	int p;
	cin>>p;
	
	//a
	
	if (p % 4 == 0 || p % 7 == 0) {
		cout<<"1"<<endl;
	}
	
	else {
		cout<<"0"<<endl;
	}
	
	//b
	
	int p1;
	cin>>p1;
	
	if (p % 10 == 7 || p / 10 % 10 == 7 || p / 100 == 7) {
		cout<<"1"<<endl;
	}
	
	else {
		cout<<"0"<<endl;
	}
	
	//c
	
	int m;
	cin>>m;
	
	if (m / 100 != m / 10 % 10  &&  
	m / 100 != m % 10  &&  
	m / 10 % 10 != m % 10) {
		cout<<"1"; 
	}
	
	else{
		cout<<"0";
	}
	
	//d
	
	int m1;
	cin>>m1;
	
	if (m1 / 100 == m1 / 10 % 10  ||  
	m1 / 100 != m1 % 10  ||  
	m1 / 10 % 10 != m1 % 10) {
		cout<<"1"; 
	}
	
	else{
		cout<<"0";
	}
	
	system("pause");
	return 0;
}
