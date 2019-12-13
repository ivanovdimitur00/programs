#include <iostream>

int main()
{
	char characters[255];
	int characters_length;
	
	std::cout<<"how many numbers?"<<std::endl;
	std::cin>>characters_length;
	
	std::cin>>characters;
	
	for (int i = 0; i < characters_length; i++) {
		if (characters[i] >= 97 && characters[i] <= 122) {
			characters[i] = characters[i] - 32;
		}
	}
	
	std::cout<<characters;
}
