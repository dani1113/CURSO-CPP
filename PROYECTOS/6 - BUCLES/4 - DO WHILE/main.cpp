#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Mostrando por pantalla sin bucle
    std::cout << "Mostrando por pantalla sin bucle:" << std::endl;

    std::cout << "1 - Mostrando por pantalla..." << std::endl;
    std::cout << "2 - Mostrando por pantalla..." << std::endl;
    std::cout << "3 - Mostrando por pantalla..." << std::endl;
    std::cout << "4 - Mostrando por pantalla..." << std::endl;
    std::cout << "5 - Mostrando por pantalla..." << std::endl;
    std::cout << "6 - Mostrando por pantalla..." << std::endl;
    std::cout << "7 - Mostrando por pantalla..." << std::endl;
    std::cout << "8 - Mostrando por pantalla..." << std::endl;
    std::cout << "9 - Mostrando por pantalla..." << std::endl;
    std::cout << "10 - Mostrando por pantalla..." << std::endl;
    
    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Bucle Do While
    std::cout << "Bucle do while:" << std::endl;

    const int CONTADOR = 10;
    size_t i = 0;

    do
    {
        std::cout << i << " - Mostrando por pantalla..." << std::endl;
        i++;
    } while (i < CONTADOR);
    std::cout << "Fin del bucle." << std::endl;

    return 0;
}