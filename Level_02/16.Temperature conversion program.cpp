#include <iostream>

int main() {

    double temperature;
    char scale;

    std::cout << "******* Temperature Conversion ********" << std::endl;
    std::cout << "C = Celsius \n"; 
    std::cout << "F = Fahrenheit \n";

    std::cout << "what scale to convert from (C/F): ";
    std::cin >> scale;

    if (scale == 'C' || scale == 'c') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temperature;
        std::cout << "Temperature in Fahrenheit: " << (temperature * 9/5) + 32 << std::endl;
    } else if (scale == 'F' || scale == 'f') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temperature;
        std::cout << "Temperature in Celsius: " << (temperature - 32) * 5/9 << std::endl;
    } else {
        std::cout << "Invalid scale entered. Please enter C or F." << std::endl;
    }




    return 0;
}