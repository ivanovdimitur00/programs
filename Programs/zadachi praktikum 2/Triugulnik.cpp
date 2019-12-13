#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1;
	cin>>y2>>x2;
	cin>>y3>>x3;
	double ab,bc,ac;
	
	ab=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	bc=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	ac=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	
	cout<<"P= "<<ab+bc+ac<<endl;
	
	double p=(ab+bc+ac)/2;
	
	cout<<"S= "<<sqrt(p*(p-ab)*(p-bc)*(p-ac));
	
	return 0;
}
