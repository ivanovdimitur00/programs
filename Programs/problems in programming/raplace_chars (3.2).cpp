#include <iostream>
//using namespace std;

int main()
{
	char s[255];
	int s_length;
	
	int small_chars_counter = 0;
	int big_chars_counter = 0;
	
	std::cout<<"how many characters?"<<std::endl;
	std::cin>>s_length;
	
	std::cin>>s;
	
	for (int i=0; i < s_length; i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			small_chars_counter++;
		}
		if (s[i] >= 65 && s[i] <= 90) {
			big_chars_counter++;
		}
	}
	
	if (small_chars_counter > big_chars_counter) {
		for (int i=0; i < s_length; i++) {
			if (s[i] >= 65 && s[i] <= 90) {
			s[i] = s[i] + 32;
		}
		}
	} else {
			for (int i=0; i < s_length; i++) {
			if (s[i] >= 97 && s[i] <= 122) {
			s[i] = s[i] - 32;
		}
		}
	}
	
	std::cout<<s;
	
	system("pause");
	return 0;
}
