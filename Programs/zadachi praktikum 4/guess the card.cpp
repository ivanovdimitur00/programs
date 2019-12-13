#include <iostream>
using namespace std;

int main()
{
	string Cards[13] = {"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
	string Paints[4] = {"Of Clubs","Of Diamonds","Of Hearts","Of Spades"};
	
	int card_guess;
	cin>>card_guess;
	
	card_guess--;
	cout<<Cards[card_guess%13]<<" ";
	
	cout<<Paints[card_guess/13];
	system("pause");
	return 0;
}
