#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"a= ";
	cin>>a;
	
	cout<<"b= ";
	cin>>b;
	
	cout<<"c= ";
	cin>>c;
	
	if(a>b && a>c && b>c) {
		a=abs(a);
		b=abs(b);
		c=abs(c);
		
		cout<<"a= "<<a<<" b= "<<b<<" c= "<<c;
		}
	else {
		
		a=3*a;
		b=3*b;
		c=3*c;
		
		cout<<"a= "<<a<<" b= "<<b<<" c= "<<c;
	}
	return 0;
}
