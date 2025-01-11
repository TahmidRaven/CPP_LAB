#include <iostream>

int main(){
    // type conversion  
    // implicit conversion is automatic 
    // explicit conversion is precede value with new data type 


int x = 3.14; // implicit conversion

double y = (int) 3.69; // explicit conversion 

std::cout << "x = " << x << "\n";
std::cout << "y = " << y << "\n";

std::cout << char(100) << " is a ASCII character" << "\n";

    return 0;
}