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

    //Bucle while
    std::cout << "Bucle while:" << std::endl;

    const size_t CONTADOR = 10;
    size_t i = 0;

    while (i < CONTADOR)
    {
        std::cout << i <<" - Mostrando por pantalla..." << std::endl;
        i++;
    }
    std::cout << "Fin del bucle." << std::endl;
    
    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Bucle while infinito
    while (true) //La condición siempre es cierta por lo que el bucle es infinito, hay que tener cuidado y asegurarse de que hay una forma de salir del bucle ya que puede hacer crashear el pc con facilidad.
    {
        std::cout << i <<" - Mostrando por pantalla..." << std::endl;
        i++;
        if (i == 50)
        {
            std::cout << "Fin del bucle." << std::endl;
            break; //Cuando i = 50, me salgo del bucle infinito
        }
    }
    

    return 0;
}