#include <iostream>
#include <cmath>

int main ()
{
    double a, b, c;


    std:: cout << "Enter side A: " << "\n";
    std:: cin >> a;

    std:: cout << "Enter side B: " << "\n";
    std:: cin >> b;

    c = sqrt(a * a + b * b);

    std:: cout << "The hypotenuse is: " << c << "\n";

    return 0;

}