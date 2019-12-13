#include <iostream>
using namespace std;

int main()
{
	char name[7];
	cin>>name;
	
	for (int i=0;i<7;i++)
	{
			cout<<name[i]- 'a' + 1 <<",";
	}
	
	return 0;
	system("pause");
}
