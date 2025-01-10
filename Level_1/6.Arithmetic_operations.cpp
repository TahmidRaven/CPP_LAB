#include <iostream>

int main(){

    // Arithmetic operations RULE PEMDAS 
    // parentheses, exponentiation, multiplication & division, addition & subtraction 

    int students = 20;

    // students = students + 1;
    // students += 1;
    // students++;

    // students = students - 1;
    // students -= 1;
    // students--;

    // students = students * 2;
    // students *= 2;

    // students = students / 2;
    // students /= 2;

    // students /= 3;

    int remainder = students % 3;
    // students = students % 3;


    std::cout << "The number of students is: " << students << "\n";
    std::cout << "The remainder is: " << remainder << "\n";




    return 0;
}