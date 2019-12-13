#include <iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"a= ";
	cin>>a;
	
	cout<<"b= ";
	cin>>b;
	
	if(a>b) cout<<"max is a= "<<a<<"; "<<"min is b= "<<b<<endl;
	else if (b>a) cout<<"max is b= "<<b<<"; "<<"min is a= "<<a<<endl;
	else cout<<"even";
	
	return 0;
	system("pause");
}
