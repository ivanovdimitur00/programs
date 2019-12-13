#include <iostream>

int main()
{
	bool istrue = 0;
	int day, month, year;
	std::cin>>day>>month>>year;
	
	if (year >= 0) {
		switch (month) {
			case 1 : case 3 : case 5 : 
			case 7 : case 8 : case 10 : case 12 : {
				if (day >= 1 && day <= 31) {
					istrue = 1;
				}
				break;
			}
			
			case 4 : case 6 : case 9 : case 11 : {
				if (day >= 1 && day <= 30) {
					istrue = 1;
				}
				break;
			}
			
			case 2 : {
				if ((year % 4 == 0 ) || 
				(year % 100 == 0 && year % 400 != 0) || 
				(year % 400 == 0)) {
					
					if (day >= 1 && day <= 29) {
					istrue = 1;
				}
				else {
					if (day >= 1 && day <= 28) {
					istrue = 1;
				}
				
				}
				
				}
				
				break;
			}
		}
	}
	std::cout<<istrue;
	
	system("pause");
	return 0;
}
