?
#include <iostream>
using namespace std;

int main()
{
	int F=81943;	//fak. nomer
	int flag; // za opredelqne na prosto chislo
	int Prime[4290];  // masiv s prosti chisla
	int z=0; // da pomni poziciqta w Prime[]
//	int br=0; (opredelq mi broq prosti chisla do moq fakulteten nomer (4289))
	
	for (int i=0;i=<4290;i++) prime[i] = 0; //zanulqvane
	
	//namirane na prosti chisla do fakultetniq nomer
	
	for (int i =2;i<=F/2;i++){
		
		flag=0;
		
		for (int j=2;j<=i/2;j++){
			
			if (i%j==0) {
				flag =1;
				break;
			}
			
		}
		if (flag == 0) { Prime[z]=i; z++; }
	}
	
	//namirane na broq prosti deliteli na fakultetniq mi nomer i tqhnoto otpechatwane
	
	for (int i=0;i<4290;i++){
		
		for (int j =0;j<=F/2;j++){
			
			if (F%Prime[i]== 0) 
			{
				cout<<Prime[i]<<" ";
				F=F/Prime[i];
			}
			else break;
		}
		
	}
		
	return 0;	
}
