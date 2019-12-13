#include<iostream>
using namespace std;

int main()
{
	double a,b,c;
	
	cout<<"a= ";
	cin>>a;
	
	cout<<"b= ";
	cin>>b;
	
	cout<<"c= ";
	cin>>c;
	
	if (a>=b && a>=c){
		if (b>=c) cout<<c<<" "<<b<<" "<<a<<endl;
		else cout<<b<<" "<<c<<" "<<a<<endl;
	}
	
	else if (b>=a && b>=c){
		if (a>=c) cout<<c<<" "<<a<<" "<<b<<endl;
		else cout<<a<<" "<<c<<" "<<b<<endl;
	}
	
	else if (b>a) cout<<a<<" "<<b<<' '<<c<<endl;
	else cout<<b<<" "<<a<<' '<<c<<endl;
	
	return 0;
	system("pause");
	}
