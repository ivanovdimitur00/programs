#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"a= ";
	cin>>a;
	if (a%2==0 && a!=0) cout<<"even";
	else if(a%2!=0) cout<<"odd";
	else cout<<"neither even, nor odd. it is 0 !";
	return 0;
	system("pause");
}
