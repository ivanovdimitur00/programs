#include <iostream>
//using namespace std;

int main()
{
	char characters[255];
	int characters_length;
	bool is_true = true;
	
	std::cout<<"how many characters?";
	std::cout<<std::endl;
	std::cin>>characters_length;
	
	std::cin>>characters;
	
	for (int i=0; i<characters_length/2; i++) {
		if (characters[i] != characters[characters_length - 1 - i]) {
			is_true = false;
		}
	}
	
	if (is_true == false) {
		std::cout<<"no";
	} else {
		std::cout<<"yes";
	}
	
	system("pause");
	return 0;
}
