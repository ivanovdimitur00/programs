#include <iostream>
#include <math.h>
//using namespace std;

int main()
{
	double an_vector_tail,an_vector_head;
	double bn_vector_tail,bn_vector_head;
	double dot_product;
	double magnitude_a,magnitude_b,magnitude;
	double cosine;
	
	int n;
	
	std::cout<<"how many numbers?"<<std::endl;
	std::cin>>n;
	
	for (int i = 1;i <= n; i++ ) {
		std::cin>>an_vector_tail>>an_vector_head;
		std::cin>>bn_vector_tail>>bn_vector_head;
		
		dot_product = an_vector_tail * an_vector_head +
		bn_vector_tail * bn_vector_head;
		
		magnitude = sqrt(an_vector_tail*an_vector_tail + 
		an_vector_head*an_vector_head) *
		sqrt(an_vector_tail*an_vector_tail + 
		an_vector_head*an_vector_head);
		
		cosine = dot_product / magnitude;
		
		magnitude_a = sqrt(an_vector_tail*an_vector_tail + 
		an_vector_head*an_vector_head);
		
		magnitude_b = sqrt(bn_vector_tail*bn_vector_tail + 
		bn_vector_head*bn_vector_head);
		
		std::cout<<"a"<<i-1<<'*'<<"b"<<i-1<<"= "<<
		magnitude_a*magnitude_b*cosine
		<<std::endl;
	}
	
	system("pause");
	return 0;
}
