#include<iostream>


int gcd(int a,int b){
	while(b != 0){
	int temp = b;
	b = a % b;
	a = temp;
		
	}
	return a;
}
int main(){
	int a = 0;
	int b = 0;
	std::cin>>a;
	std::cin>>b; 
	std::cout<<"GCD(" << a << "," << b << "=)" << gcd(a,b) <<std::endl;
	return 0;
}













