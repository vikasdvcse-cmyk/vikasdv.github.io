//a program to roll two dice and check for uncommon and rare throws
#include <iostream>
#include <random>

int main() {
    std::random_device rd;//lines 5 and 6 constants for this entropy engine 
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double>dist(1.0,7.0); //the number generated should always be in 
    int throws;                                          //float or double format ,rest same    
    std::cout<<"Enter the number of throws:";
    std::cin>>throws;
    for(int i=1;i<=throws;i++){
       int die1=dist(gen);//dist(gen) is a function call whenever mentioned a new num is created
       int die2=dist(gen);//every new loop a real num is given we convert it into real num by using int inside loop
    std::cout<<"#########################################################################################"<<std::endl;
    std::cout<<"                                     THROW "<<i<<"                                        "<<std::endl;
    std::cout<<"#########################################################################################"<<std::endl;
std::cout<<"                               DOUBLE DICE ROLL"<<std::endl;
std::cout<<"                                DIE 1||DIE 2"<<std::endl;
std::cout<<"                                    "<<die1<<"||"<<die2<<std::endl;
if(die2-die1==1){
    std::cout<<"UNCOMMON THROW"<<std::endl;
}
else if (die1==die2 ||die1==6 ||die2==6){
    std::cout<<"$RARE$ THROW"<<std::endl;
}
 else{
    std::cout<<"COMMON THROW"<<std::endl;
 }
}
    
return 0;
}
