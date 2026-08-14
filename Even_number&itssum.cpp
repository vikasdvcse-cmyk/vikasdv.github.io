//  A program to display even numbers and their sum 
#include <iostream>

int main(){
    int num1,i;
    long evenSum=0;
    std::cout<<"Enter till where you want the even numbers :";
    std::cin>>num1;
    for(int i=1 ;i<=num1;i++){
        if(i%2==0){
            std::cout<<"["<<i<<"]"<<std::endl;
            evenSum= evenSum+i;
        }
    }
    std::cout<<"  "<<std::endl;
    std::cout<<"The sum of the even numbers is:"<<evenSum<<std::endl;
    return 0;

}
