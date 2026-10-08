#include<iostream>
#include<fstream>
#include<string>
#include<limits>

std::string write(std::string name, std::string ui){
    std::ofstream sFile(name);
    std::cout << "/start typing.../\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, ui);
    sFile << ui;
    sFile.close();
    return ui;
}

int main(){
    std::string input, filename;
    std::cout << "enter filename: ";
    std::cin >> filename;
    std::cout << write(filename, input);
}