#include <iostream>

int main()
{
	int n, k;
	int numbers[64];
	int counter;
	std::cin>>n;
	std::cin>>k;
	
	for (counter = 0 ; counter < 64; counter++) {
		numbers[counter] = 0;
	}
	
	counter = 0;
	
		while (n != 0) {
			
			if (k == 1) {
				numbers[counter] = 1;
				counter++;
				n--;
			}
			else if (k > 1 && k <= 10) {
			numbers[counter] = n%k;
				counter++;
				n = n / k;
		}
		
			else {
				
				int num = n/k;
				
				switch (num) {
					
					case 10 : {
					numbers[counter] = n%k;
					counter++;
					n = n/k;
					break;
					}
					
					case 11 : {
					numbers[counter] = n%k;
					counter++;
					n = n/k;
					break;
					}
					
					case 12 : {
					numbers[counter] = n%k;
					counter++;
					n = n/k;
					break;
					}
					
					case 13 : {
					numbers[counter] = n%k;
					counter++;
					n = n/k;
					break;
					}
					
					case 14 : {
					numbers[counter] = n%k;
					counter++;
					n = n/k;
					break;
					}
					
					case 15 : {
					numbers[counter] = n%k;
					counter++;
					n = n/k;
					break;
					}
					
				default : {
					numbers[counter] = n%k;
				counter++;
				n = n / k;
					break;
				}
			}
		}
	}
	
	for (counter = counter - 1;counter >= 0; counter--){
		if (numbers[counter] >= 10) {
			std::cout<<(char)(numbers[counter] + 55);
		} else {
			std::cout<<numbers[counter];
		}
	}
	
	std::cout<<std::endl;
	system("pause");
	return 0;
}
