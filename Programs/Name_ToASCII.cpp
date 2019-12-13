#include <iostream>
using namespace std;

int main()
{
	char Name[7];
	cin>>Name;
	
	for (int i = 0 ; i <= 6 ; i++) {
		cout<<(int) Name[i]<<" ";
	}
	system("pause");
	return 0;
}
