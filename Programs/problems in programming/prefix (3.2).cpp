#include <iostream>

int main()
{
	char characters_a[255];
	char characters_b[255];
	
	int characters_b_length,characters_a_length;
	int counter = 0;
	
	std::cout<<"how many characters? (a)"<<std::endl;
		std::cin>>characters_a_length;
		
	std::cout<<"how many characters? (b)"<<std::endl;
		std::cin>>characters_b_length;

	std::cin>>characters_a;
	std::cin>>characters_b;
	
	if (characters_a_length < characters_b_length) {
		for (int i = 0; i < characters_a_length; i++) {
			if (characters_a[i] == characters_b[i]) {
			counter++;
			} else {
				std::cout<<counter;
				return 0;
			}
		}
	} else {
		for (int i = 0; i < characters_b_length; i++) {
			if (characters_b[i] == characters_a[i]) {
			counter++;
			} else {
				std::cout<<counter;
				return 0;
			}
	}
}
}
