#include <iostream>

int main() {

    int temp;
    std::cout << "Enter your current temperature: ";
    std::cin >> temp;

    if(temp >0 && temp< 30){
        std::cout << "the temperature is good." << std::endl;
    }
    else{
        std::cout << "the temperature is not good." << std::endl;
    }
    return 0;
}