#include <iostream>
using namespace std;

int main()
{
	double AB,BC,AC;
	cin>>AB>>BC>>AC;
	
	if (AB == BC && AB == AC && BC == AC) {
		cout<<"ravnostranen"<<endl;
	}
	
	else if (AB == BC || AB == AC || BC == AC) {
		cout<<"ravnobedren"<<endl;
	}
	
	else {
		cout<<"raznostranen"<<endl;
	}
	
	double cos_ALPHA = ((AB*AB)+(AC*AC)-(BC*BC))/(2*AB*AC);
	double cos_BETA = ((AB*AB)+(BC*BC)-(AC*AC))/(2*AB*BC);
	double cos_GAMMA = ((BC*BC)+(AC*AC)-(AB*AB))/(2*BC*AC);
	
//	cout<<cos_ALPHA<<" "<<cos_BETA<<" "<<cos_GAMMA<<endl;
	
	if ((cos_ALPHA > 0 && cos_ALPHA < 1) && 
	(cos_BETA > 0 && cos_BETA < 1) && 
	(cos_GAMMA > 0 && cos_GAMMA < 1)) {
		cout<<"ostrougulen"<<endl;
	}
	
	else if ( cos_ALPHA == 0 || 
	cos_BETA == 0 || 
	cos_GAMMA == 0 ) {
		cout<<"pravougulen"<<endl;
	}
	
	else {
		cout<<"tupougulen"<<endl;
	}
	
	system("pause");
	return 0;
}
