#include<iostream>
#include<string>
void store(const std::string&notes){
    std::cout<<"Successfully Stored\n";
    
    
}

int main(){
    std::string userinput;
    std::cout<<"START TYPING"<<std::endl;
    std::getline(std::cin,userinput);
    store (userinput); 
    return 0;

}