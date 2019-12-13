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
	
	int d=b*b - 4*a*c;
	
	if (d<0) cout<<"no solution";
	
	if(d==0) cout<<"x= "<<-b/(2*a);
	
	if(d>0) {
		cout<<"x1= "<<round((-b+sqrt(d))/(2*a))<<endl;
		cout<<"x2= "<<round((-b-sqrt(d))/(2*a));
	}
 return 0;
 system("pause");
}
