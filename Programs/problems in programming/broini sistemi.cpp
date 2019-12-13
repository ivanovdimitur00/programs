#include <iostream>

int main()
{
	int n, k;
	char numbers[64];
	int counter;
	std::cin>>n;
	std::cin>>k;
	
	for (counter = 0 ; counter < 64; counter++) {
		numbers[counter] = 0;
	}
	
	counter = 0;
	
	while (n != 0) {
		
		if (k > 10) {
			
			switch (n % k) {
				
			case 10 : {
				numbers[counter] = 'A';
				n = n/k;
				counter++;
				break;
			}
			case 11 : {
				numbers[counter] = 'B';
				n = n/k;
				counter++;
				break;
			}
			case 12 : {
				numbers[counter] = 'C';
				n = n/k;;
				counter++;
				break;
			}
			case 13 : {
				numbers[counter] = 'D';
				n = n/k;
				counter++;
				break;
			}
			case 14 : {
				numbers[counter] = 'E';
				n = n/k;
				counter++;
				break;
			}
			case 15 : {
				numbers[counter] = 'F';
				n = n/k;
				counter++;
				break;
			}
			deafult : {
				numbers[counter] =  48 + (n % k);
				n = n/k;
				counter++;
				break;
			}
			
		} // switch
		
		} // if
		
		else {
			numbers[counter] = 48 + (n % k);
				n = n / k;
				counter++;
		}
	}
	
	for (counter = counter - 1;counter >= 0; counter--){
		std::cout<<numbers[counter];
	}
	
	system("pause");
	return 0;
}
