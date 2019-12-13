#include <iostream>
#include <string>
using namespace std;

int main()
{
	int p;
	string x;
	
	cout<<"x= ";
	cin>>x;
	
	cout<<"p= ";
	cin>>p;
	
	if (p > x.length()) cout<<"invalid number position";
	else cout<<x.substr(p-1,p-2);
}
