#include<iostream>
void LS(int a,int b){

	if(a == 0 && b == 0){
		std::cout<<"any value of x is suitable."<<std::endl;
	}else if (a != 0){
		-b / a;
	}else if (a == 0 && b != 0){
		std::cout<<"There are no solutions."<<std::endl;
}
int main(){
	int a = 0;
	int b = 0;
	std::cout<<"a";
	std::cin>>a;
	std::cout<<"b";
	std::cin>>b;
	LS(a ,b);
	return 0;
}
