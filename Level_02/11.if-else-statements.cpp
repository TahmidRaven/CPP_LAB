#include <iostream>


int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else if (age <0) {
        std::cout << "You are not born yet." << std::endl;
    }
     else {
        std::cout << "You are a minor." << std::endl;
    }

    if (age < 18) {
        std:: cout << "You should not drink at a party.";
    }
    else {
        std:: cout << "you can drink as much as you like."; 
    }
    return 0;
}