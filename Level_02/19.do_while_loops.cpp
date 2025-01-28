#include <iostream>

int main() {

    // do while loop is a variant of the while loop
    // The difference is that the do while loop will always execute the code block at least once and then it will check the condition of the condition and if it is true it will execute the code block again. 

    int num;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    }while(num <0);
    
    std::cout << "You entered a positive number: " << num << std::endl;

    return 0;
}