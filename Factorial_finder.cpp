// A program to find the factorial of a number(whole number) using recursion(for loop)
#include <iostream>

int main(){
    long long number, factorial=1;
    std::cout<<"Enter a number to find its factorial:";
    std::cin>>number;

    if (number==0){//factorial of 0 is 1
        std::cout<<"Entered number is 0, the factorial of 0 is 1"<<std::endl;
        return 0;
    }
    if( number < 0 || number > 20){//factorial of numbers greater than 20 will exceed the limit of long long and less than 0 is not valid
        std::cout<<"Enter a valid input ,the limit is 20"<<std::endl;
        return 0;
    }
    
    for(long long i=1;i<=number;i++){
        factorial=factorial*i;//for ex: 5! = 1*2*3*4*5 (here 1 is the initial value of factorial and it gets multiplied till the number entered by user)
    }
    std::cout<<"The factorial of "<<number<<" is "<<factorial<<std::endl;
}
