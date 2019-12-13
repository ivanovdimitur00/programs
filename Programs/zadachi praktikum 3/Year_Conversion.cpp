#include <iostream>
using namespace std;

int main()
{
	int Person_Age;
	
	cin>>Person_Age;
	
	
	cout<<"You have lived for: "<<Person_Age<<" Years."<<endl;
	
	cout<<"Converted to days (approx.) : " <<Person_Age * 365 <<" Days."<<endl;
	
	cout<<"Converted to hours (approx.) : " <<Person_Age * 365 * 24 <<" Hours."<<endl;
	
	cout<<"Converted to minutes (approx.) : " <<Person_Age * 365 * 24 * 60 <<" Minutes."<<endl;
	
	cout<<"Converted to seconds (approx.) : " <<Person_Age * 365 * 24 * 60 * 60 <<" Seconds."<<endl;
	
	system("pause");
	return 0 ;
}
