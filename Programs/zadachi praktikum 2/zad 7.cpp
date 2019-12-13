#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//zamesti return s bool statement;
	
	//a
	
	int n;
	
	cout<<"n= ";
	cin>>n;
	
	if (n%3==0 && n%5==0 && n%2==0 && n%7==0) return 1;
	else return 0;
	
	//b
	
	int a,b,c;
	
	cout<<"a= ";
	cin>>a;
	
	cout<<"b= ";
	cin>>b;
	
	cout<<"c= ";
	cin>>c;
	
	if (b*b - 4*a*c > 0) return 1;
	else return 0;
	
	//c
	
	double x,y;
	
	cout<<"x= ";
	cin>>x;
	
	cout<<"y= ";
	cin>>y;
	
	if (x<=10 && x>=-4 && y<=6 &&y>=-8){
		if (sqrt(x*x+y*y)<=7) return 1;
	}
	else return 0;
	
	//d
	
	cout<<"x= ";
	cin>>x;
	
	cout<<"y= ";
	cin>>y;
	
	if ( (x<=12 && x>=0 && y<=12 &&y>=0) || (x>=-12 && x<=0 && y>=-12 &&y<=0) ){
		if (sqrt(x*x+y*y)<=12) return 1;
	}
	else return 0;
	
	//e
	
	cout<<"x= ";
	cin>>x;
	
	cout<<"y= ";
	cin>>y;
	
	if (sqrt((x*x)/(8*8)+(y*y)/(2*2))> 1) return 1;
	else return 0;
	
	//f
	
	cout<<"a= ";
	cin>>a;
	
	cout<<"b= ";
	cin>>b;
	
	cout<<"c= ";
	cin>>c;
	
	if (a>0 || b>0 || c>0) return 1;
	else return 0;
	
	//g
	
	cout<<"n= ";
	cin>>n;
	
	int a1,a2,a3,a4;
	
	a1 = n/1000;
	a2 = n/100%10;
	a3 = n/10%10;
	a4 = n%10;
	
	if (a1==a2 || a1==a3 || a1==a4 || a2==a3 || a2==a4 || a3==a4) return 1;
	else return 0;
}

