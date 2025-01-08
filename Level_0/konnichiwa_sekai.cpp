# include <iostream>

int main(){

    std::cout << "Konnichiwa, Sekai!" << std::endl;  // Japanese for "Hello, World!" 
    std::cout << "Sayonara! Sekai" << std::endl; // std::endl; gives a endline

    std::cout << "Konnichiwa, Sekai!" << '\t'; // tab
    std::cout << "Konnichiwa, Sekai!" << '\n'; // newline
/* 
    std::endl will flush the output buffer;
    which means that it will write all the output to the console at that point.
    tho '\n' is kinda better for performance wise. 
*/

    return 0;
}