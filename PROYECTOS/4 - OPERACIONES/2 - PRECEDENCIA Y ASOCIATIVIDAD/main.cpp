#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
    int resultado{};
    int a = 6;
    int b = 3;
    int c = 8;
    int d = 9;
    int e = 3;
    int f = 2;
    int g = 5;

    //Operaciones
    resultado = a + b * c - d / e - f + g;
    std::cout << "Resultado 1: a + b * c - d / e - f + g = " << resultado << std::endl;

    resultado = a / b * c + d - e + f;
    std::cout << "Resultado 2: a / b * c + d - e + f = " << resultado << std::endl;

    resultado = (a + b) * c - d / e - f + g;
    std::cout << "Resultado 3: a / b * c + d - e + f = " << resultado << std::endl;

    return 0;
}