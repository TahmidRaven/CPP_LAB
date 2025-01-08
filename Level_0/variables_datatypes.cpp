#include <iostream>

int main(){


    int num1;    // Declaration of a variable
    num1 = 10;  // Assign of a variable

    int num2 =12.2;   // declare it with float; int will give integer value
    int sum = num1 + num2; 

    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << "The sum of [" << num1 << "] and [" << num2 << "] is " << sum << std::endl;
 
    return 0;

// --------------------DATA TYPES ------------------------

    double temp = 24.604;
    char grade = 'A';
    bool isPassed = true;

    // std::cout << "Temperature: " << temp << std::endl;
    // std::cout << "Grade: " << grade << std::endl;
    // std::cout << "Is passed: " << (isPassed? "Yes" : "No") << std::endl;

    return 0;
}