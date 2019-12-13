#include <iostream>
using namespace std;

int main()
{
	int a;
	cout<<"a= ";
	cin>>a;
	if((a%10 == a/1000) && (a/100%10 == a/10%10)) cout<<"palindrome";
	else cout<<"not a palindrome";
	return 0;
	system("pause");
}
