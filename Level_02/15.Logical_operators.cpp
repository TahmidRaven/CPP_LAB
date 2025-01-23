#include <iostream>

int main() {

    int temp;
    bool sunny;

    std::cout << "Enter your current temperature: ";
    std::cin >> temp;

    if(temp >1 && temp< 30){
        std::cout << "the temperature is good\n";
    }
    else if (temp >= 30 || temp <=0){
        std::cout << "the temperature is bad.\n";
    }

    if(!sunny){
        std::cout << "It is cloudy outside.\n";               
    }
    else{
        std::cout << "It is Sunny outside." << std::endl;
    }   
    return 0;
}