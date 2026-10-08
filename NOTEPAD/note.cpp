//fully functional notepad in terminal itself 
/*work under progress*/


#include<iostream>
#include<fstream>
#include<string>

std::string write(std::string ui,std::string name){
    std::ofstream sFile(name);
    std::cout<<"/start typing.../\n";
    std::cin>>name;
    std::getline(std::cin,ui);
    sFile << ui;
    return ui;
    sFile.close();
}
std::string read(){
    std::cout<<"Enter filename to be open:\n";
    std::string fname;
    std::cin>>fname;
    std::ifstream sFile(fname);
    std::cout<<fname;
    sFile.close();
    return 0;
}
int main(){
    std::string input,filename;

    std::cout<<"enter filename:";
    std::cin>>filename ,"\n";
    std::cout<<write(input,filename);
    
}
