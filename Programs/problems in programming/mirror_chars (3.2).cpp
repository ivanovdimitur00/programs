#include <iostream>

int main()
{
	char characters[255];
	int characters_length;
	int temp;
	
	std::cout<<"how many characters?"<<std::endl;
	std::cin>>characters_length;
	
	std::cin>>characters;
	
	for (int i = 0 ; i < characters_length / 2; i++) {
		temp = characters[characters_length - 1 - i];
		characters[characters_length - 1 - i] = characters[i];
		characters[i] = temp;
	}
	
	std::cout<<characters;
	
	system("pause");
	return 0;
}
