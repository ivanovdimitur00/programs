#include <iostream>

int main()
{
	char letters[33] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int letters_number[33] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	char characters[255];
	int characters_length;
	
	std::cout<<"how many characters?"<<std::endl;
	std::cin>>characters_length;
	
	std::cin>>characters;
	
	for (int i = 0; i < characters_length; i++) {
		
		for (int j = 0 ; j < 33; j++) {
			
			if (characters[i] == letters[j]) {
				
				letters_number[j]++;
			}
		}
	}
	
	for (int k = 0 ; k < 33 ; k++) {
		if (letters_number[k] > 0) {
			std::cout<<letters[k]<<": "<<letters_number[k]<<std::endl;
		}
	}
	
	system("pause");
	return 0;
}
