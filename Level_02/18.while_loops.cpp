#include <iostream>

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "Enter your name bro:";
        std::cin >> name;
        std::getline(std::cin, name);   
    }
    std::cout << "Hello " << name << "\n";

    return 0;
} 