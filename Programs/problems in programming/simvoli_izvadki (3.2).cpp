#include <iostream>

int main()
{
	char characters[255];
	int characters_length;
	
	std::cout<<"how many characters?"<<std::endl;
	std::cin>>characters_length;
	
	std::cin>>characters;
	
	for (int i = 0 ; i < characters_length ; i++) {
		if (characters[i] >= 48 && characters[i] <= 57) {
			std::cout<<characters[i];
		}
	}
	
	std::cout<<std::endl;
	
	for (int j = 0 ; j < characters_length ; j++) {
		if (characters[j] >= 97 && characters[j] <= 122) {
			std::cout<<characters[j];
		}
	}
	
	std::cout<<std::endl;
	
	for (int k = 0 ; k < characters_length ; k++) {
		if (characters[k] < 48 || 
		(characters[k] > 57 && characters[k] < 97) ||
		characters[k] > 122) {
			std::cout<<characters[k];
		}
	}
	
	std::cout<<std::endl;
	
	system("pause");
	return 0;
}
