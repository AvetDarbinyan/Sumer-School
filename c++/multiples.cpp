#include<iostream>
void multiples(){
    int n = 0;
    std::cout<<"Ներմուծեք թիւ (0-100)"<<std::endl;
    std::cin>>n;
    
    int sum = 0;
    for(int i = 1;i < n;i++){
        if(i % 3 == 0 || i % 5 ==0){
            sum += i;
        }
    }
    std::cout<<sum<<std::endl;
}
int main(){
    multiples();
    return 0;
}
