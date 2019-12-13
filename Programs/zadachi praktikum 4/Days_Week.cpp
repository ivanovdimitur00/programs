#include <iostream>
using namespace std;

int main()
{
	int day;
	cin>>day;
	
	if (day == 0 || day == 6) {
		cout<<"Weekend"<<" - ";
	}
	else {
		cout<<"Workday"<<" - ";
	}
	
	system("pause");
	return 0;
	
	switch (day) {
		case 0 : { cout<<"Sunday";
			break;
		}
		case 1 : { cout<<"Monday";
			break;
		}
		case 2 : { cout<<"Tuesday";
			break;
		}
		case 3 : { cout<<"Wednesday";
			break;
		}
		case 4 : { cout<<"Thursday";
			break;
		}
		case 5 : { cout<<"Friday";
			break;
		}
		case 6 : { cout<<"Saturday";
			break;
		}
	}
}
