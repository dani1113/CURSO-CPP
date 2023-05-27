#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
    int mayor = 0;
    int x = 35;
    int y = 20;

    //if
    std::cout << "Usando un if normal:" << std::endl;
    if (x > y)
    {
        mayor = x;
    }
    else
    {
        mayor = y;
    }
    std::cout << "El mayor es: " << mayor << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Operador ternario
    std::cout << "Usando un operador ternario:" << std::endl;
    mayor = (x > y) ? x : y; //Ambos operandos deben de ser del mismo tipo o que al menos sean convertibles al mismo tipo. La conversión puede ser realizada de forma implícita por el compilador.
    std::cout << "El mayor es: " << mayor << std::endl;

    return 0;
}