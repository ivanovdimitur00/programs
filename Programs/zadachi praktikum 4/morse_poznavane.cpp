#include <iostream>
using namespace std;
int main()
{
	string morse[10] = {"-----","....","...-","..--","..---",".---","-...","--..","---..","----."} ;
	
	int morse_guess;
	cin>>morse_guess;
	
	for (int i = 0; i < 10 ; i++) {
		if (morse_guess == i) {
			cout<<morse[i];
		}
	}
	
	system("pause");
	return 0;
}
