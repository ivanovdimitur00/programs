#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x,y;
	cin>>x>>y;
	
	double r,cx,cy;
	cin>>r>>cx>>cy;
	
	if (sqrt((x-cx)*(x-cx)+(y-cy)*(y-cy)) < r) {
		cout<<"yes";
	}
	else {
		cout<<"no";
	}
	
	system("pause");
	return 0;
}
