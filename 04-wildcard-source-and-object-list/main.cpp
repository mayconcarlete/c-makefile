#include <iostream>
#include "add.hpp"
#include "sub.hpp"

int main(){
    int a = 2;
    int b = 2;
    int c = 2;
    int d = 2;

    int result = add(a, b);

    std::cout << "Resultado da soma: " << result << "\n";

    result = sub(c, d);

    std::cout << "Resultado da subtracao: " << result << "\n";
    
    return 0;
}