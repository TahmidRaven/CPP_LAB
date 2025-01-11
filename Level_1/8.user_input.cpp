#include <iostream>

int main(){
    // user input 
    // std::cin >> variable_name; 
    // std::cout << variable_name; 

    int age;
    std::string name;

    std::cout << "Enter your name: " << "\n";
   // std::cin >> name;   // only takes the first word

    std::getline(std::cin >>std::ws, name);   // can take multiple words

    std::cout << "Hello There Lord, " << name << "\n";
    std::cout << "Enter your age: " << "\n";
    std::cin >> age;
    std::cout << "O MY Goddo! You are " << age << " years old" << "\n";


    return 0;


}