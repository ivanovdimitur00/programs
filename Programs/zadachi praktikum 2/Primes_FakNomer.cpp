#include <iostream>
using namespace std;

int main()
{
	int F;	//fak. nomer
	
	cout<<"F= ";
	cin>>F;
	
	int flag; // za opredelqne na prosto chislo
	
	int Prime[5132];  // masiv s prosti chisla
	
	int z=0; // da pomni poziciqta w Prime[]
	
/*   int br=0;  (opredelq mi broq prosti chisla do moq fakulteten nomer (4289) za 81943)   */	
	
    int br1 =0; // da sledi broq deliteli
	
	for (int i=0;i<=5132;i++) Prime[i] = 0; //zanulqvane
	
	//namirane na prosti chisla do fakultetniq nomer

	for (int i=2;i<=sqrt(F);i++){
		
		flag=0;
		
		for (int j=2;j<=i/2;j++){
			
			if (i % j == 0) {
				flag = 1;
				break;
			}
			
		}
		if (flag == 0) { Prime[z]=i; z++; br++; }
	}
	
	
	//namirane na broq prosti deliteli na fakultetniq mi nomer i tqhnoto otpechatwane
	
	
	for (int i=0;i<=5132;i++){
		
		if(F!=1 && Prime[i]!=0)
		
		for (int j =0;j<10;j++){
			
			if (F % Prime[i] == 0) 
			{
				cout<<Prime[i]<<" ";
				F=F/Prime[i];
				br1++;
			}
			else break;
		}
		else break;
	}
	
	if (br1 == 0) cout<<1<<" "<<F<<endl;
	
	return 0;	
}
