#include <iostream>

int main() {

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "January has 31 days." << std::endl;
            break;
        case 2:
            std::cout << "February has 28 days." << std::endl;
            break;
        case 3:
            std::cout << "March has 31 days." << std::endl;
            break;
        case 4:
            std::cout << "April has 30 days." << std::endl;
            break;
        case 5:
            std::cout << "May has 31 days." << std::endl;
            break;
        case 6:
            std::cout << "June has 30 days." << std::endl;
            break;
        case 7:
            std::cout << "July has 31 days." << std::endl;
            break;
        case 8:
            std::cout << "August has 31 days." << std::endl;
            break;
        case 9:
            std::cout << "September has 30 days." << std::endl;
            break;
        case 10:
            std::cout << "October has 31 days." << std::endl;
            break;
        case 11:
            std::cout << "November has 30 days." << std::endl;
            break;
        case 12:
            std::cout << "December has 31 days." << std::endl;
            break;
        default:
            std::cout << "Invalid month. Enter 1-12" << std::endl;
    }

    return 0;
}