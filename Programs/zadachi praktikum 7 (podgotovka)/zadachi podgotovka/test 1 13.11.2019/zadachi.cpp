//Variant A test

#include <iostream>

void enter_array(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		std::cin>>a[i];
	}
}

int main()
{
	
	// zadacha 1
	
	/*
	
	int n;
	
	std::cin>>n;
	
	int counter_left = 0;
	int counter_right = 0;
	
	while ((n - counter_left) % 20 != 0) {
		counter_left++;
	}
	
	while ((n + counter_right) % 20 != 0) {
		counter_right++;
	}
	
	if (counter_left < counter_right) {
		std::cout<<counter_left;
	} else {
		std::cout<<counter_right;
	}
	
	*/
	
	//zadacha 2
	
	int n;
	std::cin>>n;
	
	int a[100];
	
	enter_array(a,n);
	
	bool is_increasing = false;
	bool is_declining = false;
	
	int i = 0;
	
	while (i<n-1) {
		if ( a[i] <= a[i+1] ) {
			i++;
		} 
	}
	
	int increasing_row_final_position = i;
	
	if (i >= 1) {
		is_increasing = true;
		while (i < n-1) {
			if (a[i] > a[i+1]) {
				i++;
			}
		}
	}
	
	if (i == n-1) {
		is_declining = true;
	}
	
	if (is_increasing == true && is_declining == true) {
		std::cout<<"Yes: "<<increasing_row_final_position;
	} else {
		std::cout<<"No";
	}
	
	return 0;
	
	
}
