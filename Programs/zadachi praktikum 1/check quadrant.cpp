#include <iostream>
using namespace std;

int main()
{
	int x,y;
	
	cout<<"x= ";
	cin>>x;
	cout<<"y= ";
	cin>>y;
	
	for (int i=1;i<=9;i++){
	switch(i){
		case 1 : if((x==0 && y==0)) {cout<<"center";break;}
		
		case 2 : if(x>0 && y==0) {cout<<"between first and fourth quadrant";break;}
		
		case 3 : if(x>0 && y>0) {cout<<"first quadrant";break;}
		
		case 4 : if(x==0 && y>0) {cout<<"between first and second quadrant";break;}
		
		case 5 : if(x<0 && y>0) {cout<<"second quadrant";break;}
		
		case 6 : if(x<0 && y==0) {cout<<"between second and third quadrant";break;}
		
		case 7 : if(x<0 && y<0) {cout<<"third quadrant";break;}
		
		case 8 : if(x==0 && y<0) {cout<<"between third and fourth quadrant";break;}
		
		case 9 : if(x>0 && y<0) {cout<<"fourth quadrant";break;}
	}
	break;
}
	return 0;
	system ("pause");
}
