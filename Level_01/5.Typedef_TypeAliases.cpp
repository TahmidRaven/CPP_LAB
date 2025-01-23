#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairList_t; // PairList is now an alias for the type std::vector<std::pair<std::string, int>>

typedef std::string txt_t;
typedef int num_t;

using text_t = std::string;   // "using" is another way of doing typedef 
using number_t = int;
int main(){

    // typedef is a reserved keyword in C++ used to give data types a new name.

    // typedef int integer; // integer is now an alias for int

    // pairList_t pairList; // pairList is now an alias for std::vector<std::pair<std::string, int>>

    txt_t name = "John Doe";
    num_t age = 30;
    text_t msg = "World Ends in ";
    number_t num = 7;

    std::cout << name << " " << age << std::endl;
    std::cout << msg << num << " days" << std::endl;
}