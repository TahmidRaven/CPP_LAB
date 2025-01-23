#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z;

    double t = 3.14;
    

    z = std::max(x, y);
    std::cout << "greater between 3 & 4 is "<< z << "\n";

    z = std::min(x, y);
    std::cout << "smaller between 3 & 4 is "<< z << "\n";

    z = pow(x, y);
    std::cout << "3 to the power of 4 is "<< z << "\n";

    z = sqrt(y);
    std::cout << "square root of 4 is "<< z << "\n";

    z = abs(-9);
    std::cout << "absolute value of -9 is "<< z << "\n";

    z = round(t);
    std::cout << "rounding off " << t << " is "<< z << "\n";

    z = ceil(t);
    std::cout << "ceiling of " << t << " is "<< z << "\n";

    z = floor(t);
    std::cout << "floor of " << t << " is "<< z << "\n";
}