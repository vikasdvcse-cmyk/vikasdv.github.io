//program which tells an ATM to dispense cash based on user input 
#include <iostream>

int main(){
int amount,//variable to store the amount of cash to be dispensed
      n500,//variable to store the number of 500 notes 
      n200,//variable to store the numer of 200 notes 
      n100,//variable to store the number of 100 notes 
       n50,//variable to store the number of 50 notes 
       n10,//variable to store the number of 10 notes 
 userinput;//variable to store the user input
 
     std::cout<<"Enter the amount needed:";
     std::cin>>userinput;
        amount=userinput;
        int inputvalidator;//variable to validate the user input
        inputvalidator=amount%10;
        if(inputvalidator==0 && amount>0 && amount<=25000){
            n500=amount/500;
            std::cout<<"The number of 500 notes to be dispensed is:"<<n500<<std::endl;
            amount=amount-(n500*500);
            n200=amount/200;
            std::cout<<"The number of 200 notes to be dispensed is:"<<n200<<std::endl;
            amount=amount-(n200*200);
            n100=amount/100;
            std::cout<<"The number of 100 notes to be dispensed is:"<<n100<<std::endl;
            amount=amount-(n100*100);
            n50=amount/50;
            std::cout<<"The number of 50 notes to be dispensed is:"<<n50<<std::endl;
            amount=amount-(n50*50);
            n10=amount/10;
            std::cout<<"The number of 10 notes to be dispensed is:"<<n10<<std::endl;
             std::cout<<"Entered amount is:"<<userinput<<std::endl;
        }
        else{
            std::cout<<"The amount entered is not valid, please enter a valid amount"<<std::endl;
        }
        std::cout<<"THANK YOU FOR USING OUR ATM"<<std::endl;
        if(amount>25000){
            std::cout<<"The amount entered is greater than the maximum limit of 25000"<<std::endl;
        }
        return 0;

    }
