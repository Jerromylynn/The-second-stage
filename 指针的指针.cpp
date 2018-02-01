#include <iostream>
int main(){
	int p=221;
	int *p1=&p;
	int **p2=&p1;
	std::cout<<p<<"\n"
		 <<*p1<<"\n"
		 <<**p2;
	return 0; 
} 
