#include <iostream>
using namespace std;

int main()
{
	int x,p;
	
	cin>>x;
	cin>>p;
	
	int Test_x;
	int Count_Numbers;
	int Numbers[10];

//ot dqsno nalqwo
	
	Test_x = x;
	Count_Numbers = 1;
	
	while (Test_x != 0 && Count_Numbers != p) {
		
		Count_Numbers++;
		Test_x = Test_x / 10;
		
	}
	
	cout<<Test_x%10<<endl;
	
//ot lqwo nadqsno
	
	Test_x = x;
	Count_Numbers = 0;
	
		while (Test_x != 0) {
		
		Count_Numbers++;
		Test_x = Test_x / 10;
		
	}
	
	for (int i = 0; i < Count_Numbers - p; i++){
		x = x / 10;
	}
	
	cout<<x % 10<<endl;
	
	system("pause");
	return 0;
}
