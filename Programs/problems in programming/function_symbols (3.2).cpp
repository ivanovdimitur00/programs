#include <iostream>

int main()
{
	char s1[255];
	char s2[255];
	
	int s1_length;
	
	std::cout<<"length of strings ?";
	std::cin>>s1_length;
	
	std::cin>>s1;
	std::cin>>s2;
	
	char func_s1_element;
	char s1_element;
	
	bool func_exists = true;
	
	for (int i = 0; i < s1_length-1; i++) {
		
		s1_element = s1[i];
		func_s1_element = s2[i];
		
		for (int j = i+1; j < s1_length; j++) {
			if (s1_element == s1[j]){
				if (s2[j] != func_s1_element) {
					func_exists = false;
				}
			}
		}
	}
	
	std::cout<<func_exists;
	return 0;
}
