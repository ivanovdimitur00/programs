#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char operation;
	
	cout<<"Insert numbers: "<<endl;
	cout<<"First: ";
	
	cin>>num1;
	
	cout<<"Second: ";
	
	cin>>num2;
	
	cout<<"Enter desired operation (+,-,*,/,%): ";
	
	cin>>operation;
	
	switch(operation) {
		case '+' :  { 
		cout<<"Sum: "<<num1 + num2<<endl; 
		break; 
		}
		case '-' :  { 
		cout<<"Izvazdane: "<<num1 - num2<<endl; 
		break; 
		}
		case '*' :  { 
		cout<<"Mult: "<<num1 * num2<<endl; 
		break; 
		}
		case '/' :  { 
		cout<<"Division (whole): "<<num1 / num2<<endl; 
		break; 
		}
		case '%' :  { 
		cout<<"Division (Leftover): "<<num1 % num2<<endl; 
		break; 
		}
		default :  { 
		cout<<"Invalid operation: "; 
		break; 
		}
	}
	
	system("pause");
	return 0;
	
}
