#include <iostream>

int main()
{
	char s2[255];
	char s1[255];
	
	int s2_length;
	int s1_length;
	
	std::cout<<"enter length of substring: ";
	std::cin>>s2_length;
	std::cout<<"enter substring: ";
	std::cin>>s2;
	
	std::cout<<"enter length of targeted string: ";
	std::cin>>s1_length;
	std::cout<<"enter targeted string: ";
	std::cin>>s1;
	
	bool is_substring = true;
	bool exists = false;
	int j = 1;
	
	for (int i = 0; i < s1_length ; i ++) {
		
		if (s2[0] == s1[i]) { 
			exists = true;
			
				while (j < s2_length) {
					if (s2[j] != s1[j+i])  {
						is_substring = false;
					}
					j++;
				}
				
			if (exists == true) break;
		}
		
	}
	if (exists == false) is_substring = false;
	if (is_substring == true) return 1;
	else return 0;
}
