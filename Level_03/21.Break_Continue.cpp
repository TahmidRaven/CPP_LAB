#include <iostream>

int main(){

        // break = break our of a loop and
        // continue = skip the current iteration and move to the next one

        for(int i = 1; i <=20; i++){
            if(i == 13){

                break;
                // continue; 
            
            }
            std::cout << i << "\n";
        }

    return 0;

}
