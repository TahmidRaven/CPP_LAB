#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);   // std::ws removes any leading or trailing whitespace

    if(name.length() > 12) {
        std::cout << "Name is too long!" << std::endl;
    }
    else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }

    return 0;
}