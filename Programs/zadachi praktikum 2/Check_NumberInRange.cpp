#include <iostream>
using namespace std;

int main()
{
	double a,b,x;
	
	cout<<"select interval:"<<endl;
	
	cout<<"beginning (a) = ";
	cin>>a;
	
	cout<<"end (b) = ";
	cin>>b;
	
	cout<<"your number = ";
	cin>>x;
	
	if (x>=a && x<=b) cout<<"Number is in range"<<endl;
	else cout<<"Number is out of range"<<endl;
	
	return 0;
	system("pause");
}
