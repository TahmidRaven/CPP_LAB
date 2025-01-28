#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);   // std::ws removes any leading or trailing whitespace
    name.clear();
    name.append("John Doe");

    if(name.length() > 12) {
        std::cout << "Name is too long!" << std::endl;
    }
    else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
    name.empty() ? std::cout << "Name is empty!" : std::cout << "Name is not empty!" << std::endl;

   
    std::cout << "Char at 2nd position is!";
    std::cout << name.at(2) << std::endl;

    name.insert(0, "Mr. ");
    std::cout << "Updated name: " << name << std::endl;

    std::cout << name.find(" ") << " is the white space position between name" << std::endl;
    
    name.erase(9, 11); // remove "Doe"
    std::cout << "2nd Updated name: " << name << std::endl;


    name.insert(9, "Smith");
    std::cout << "3rd Updated name: " << name << std::endl;
    
    // remove "Smith: with "Wick"
    name.replace(9, 5, "Wick");
    std::cout << "4th Updated name: " << name << std::endl;
        
    return 0;

}