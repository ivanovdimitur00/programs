#include <iostream>
using namespace std;

int main()
{
	double grade;
	cin>>grade;
	
	switch ((int)grade) {
		case 2 : { 
		cout<<"Poor"<<" ("<<grade<<")";
			break;
		}
		case 3 : { if (grade >= 3.00 && grade < 3.50){
			cout<<"Satisfactory"<<" ("<<grade<<")";
			break;
		}
		else {
			cout<<"Good"<<" ("<<grade<<")";
		}
			break;
		}
		case 4 : { if (grade >= 4.00 && grade < 4.50){
			cout<<"Good"<<" ("<<grade<<")";
			break;
		}
		else {
			cout<<"Very good"<<" ("<<grade<<")";
		}
			break;
		}
		case 5 : { if (grade >= 5.00 && grade < 5.50){
			cout<<"Very good"<<" ("<<grade<<")";
			break;
		}
		else {
			cout<<"Excellent"<<" ("<<grade<<")";
		}
			break;
		}
	}
	
	system("pause");
	return 0;
}
