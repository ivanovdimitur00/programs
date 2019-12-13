#include <iostream>
//using namespace std;

int main()
{
	int p,q,
	number,
	number_chars[20],
	number_length = 0,
	number_position,
	operation = 1,
	right_comparison,
	NUMBER;

	std::cout<<"p= ";
	std::cin>>p;
	
	std::cout<<"q= ";
	std::cin>>q;
	
	for (int i = p; i <= q; i++) {
		
		
		for (int j = 0 ; j < 20; j++){
			number_chars[j] = 0;
		}
		
		number = i;
		NUMBER = i;
		
		number_position = 0;
		
		number_length = 0;
		
		right_comparison = 0;
		
		operation = 0;
		
		
		while (number != 0 ) {
			number_chars[number_position] = number % 10;
			number /= 10;
			number_position++;
			number_length++;
		}
		
		
		for (int k = 0; k < number_length - 1; k++) {
			
			if (operation % 2 == 1) {
				if (number_chars[k] < number_chars[k+1] ) {
					right_comparison++;
				}
			}
			if (operation % 2 == 0) {
				if (number_chars[k] > number_chars[k+1] ) {
					right_comparison++;
				}
			}
			
			operation++;
		}
		
		if (right_comparison == number_length - 1) {
			std::cout<<NUMBER<<" ";
		}
		
	}	

	system("pause");
	return 0;
}

//	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	

//	for (int i=1;i<=10;i++){
//		
//	for (int j=p;j<=q;j++){
//		n1=j%10;
//		n2=j/10%10;
//		n3=j/100%10;
//		n4=j/1000%10;
//		n5=j/10000%10;
//		n6=j/100000%10;
//		n7=j/1000000%10;
//		n8=j/10000000%10;
//		n9=j/100000000%10;
//		n10=j/1000000000%10;
		
//		switch(i){
			
//			case 1 : if (j/10 == 0) break;
//			case 2 : if (j/10 > 0) { if (n2 < n1) cout<<j<<" "; break;}
//			case 3 : if (j/10 > 10) { if (n3 < n2 && n2 > n1) cout<<j<<" "; break;}
//			case 4 : if (j/10 > 100) { if (n4 < n3 && n3 > n2 && n2 < n1) cout<<j<<" "; break;}
//			case 5 : if (j/10 > 1000) { if (n5 < n4 && n4 > n3 && n3 < n2 && n2 > n1) cout<<j<<" "; break;}
//		case 6 : if (j/10 > 10000) { if (n6 < n5 && n5 > n4 && n4 < n3 && n3 > n2 && n2 < n1) cout<<j<<" "; break;}
//			case 7 : if (j/10 > 100000) { if (n7 < n6 && n6 > n5 && n5 < n4 && n4 > n3 && n3 < n2 && n2 > n1) cout<<j<<" "; break;}
//			case 8 : if (j/10 > 1000000) { if (n8 < n7 && n7 > n6 && n6 < n5 && n5 > n4 && n4 < n3 && n3 > n2 && n2 < n1) cout<<j<<" "; break;}
//			case 9 : if (j/10 > 10000000) { if (n9 < n8 && n8 > n7 && n7 < n6 && n6 > n5 && n5 < n4 && n4 > n3 && n3 < n2 && n2 > n1) cout<<j<<" "; break;}
//			case 10 : if (j/10 > 100000000) { if (n10 < n9 && n9 > n8 && n8 < n7 && n7 > n6 && n6 < n5 && n5 > n4 && n4 < n3 && n3 > n2 && n2 < n1) cout<<j<<" "; break;}
//			 
//		}
//	  }
//	}
