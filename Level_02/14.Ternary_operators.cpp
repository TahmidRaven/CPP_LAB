#include <iostream>

int main() 
{
    int grade = 90;
    int number = 9;
    bool hungry = false;

    grade >= 50 ? std::cout << "Passed\n" : std::cout << "Failed\n";


    // number % 2 == 1 ? std:: cout << "odd" : std::cout << "even" << std::endl;
    std::cout << (number % 2 == 0 ? "Even" : "Odd") << std::endl;


    std::cout << (hungry? "I'm hungry" : "I'm not hungry") << std::endl;

    return 0;
}