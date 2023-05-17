#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    int variable1 = 123; 
    std::cout << "Variable 1: " << variable1 << std::endl;
    variable1 = 55;
    std::cout << "Variable 1: " << variable1 << std::endl;

    std::cout << std::endl;

    double variable2 = 78.0; 
    std::cout << "Variable 2: " << variable2 << std::endl;
    variable2 = 46.0;
    std::cout << "Variable 2: " << variable2 << std::endl;

    std::cout << std::endl;

    bool variable3 = false;
    std::cout << std::boolalpha; 
    std::cout << "Variable 3: " << variable3 << std::endl;
    variable3 = true;
    std::cout << "Variable 3: " << variable3 << std::endl;

    /*
    auto variable4 = 78u;
    std::cout << "Variable 4: " << variable4 << std::endl;
    variable4 = -46; //Error de compilción, variable4 es de tipo int unsigned, es decir solo admite números positivos
    std::cout << "Variable 4: " << variable4 << std::endl;
    */

    return 0;
}