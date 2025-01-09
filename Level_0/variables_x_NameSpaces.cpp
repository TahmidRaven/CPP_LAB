#include <iostream>

namespace firstNamespace{
    int x = 11;
}

namespace secondNamespace{
    int x = 99;
}
int main(){

//  using namespace firstNamespace; // this will make the x in the firstNamespace the default x
//  using namespace secondNamespace; // this will make the x in the secondNamespace the default x
    int x = 69;

    std::cout << "localNamespace: " << x << "\n";
    std::cout << "firstNamespace: "<< firstNamespace::x << "\n";
    std::cout << "secondNamespace: "<< secondNamespace::x << "\n";

    return 0;

}