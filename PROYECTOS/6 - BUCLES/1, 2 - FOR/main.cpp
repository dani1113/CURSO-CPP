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

    //Bucle for
    std::cout << "Bucle for:" << std::endl;

    for (unsigned int i = 0; i < 10; i++) //En un for el incremento del operador puede ser posterior o previo, por lo general no hay problema, a no ser que se realize algo muy concreto, no va a influir
    {
            std::cout << i << " - Mostrando por pantalla..." << std::endl;
    }
    std::cout << "Fin del bucle." << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Bucle for con size_t
    std::cout << "Bucle for con size_t:" << std::endl;
    
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << i << " - Mostrando por pantalla..." << std::endl;
    }
    std::cout << "Fin del bucle." << std::endl;
    std::cout << "El tamaño de size_t es: " <<sizeof(size_t) << " bytes." << std::endl;
    //std::cout << "i:" << i << std::endl; //Error de compilador ya que i está fuera del alcance del bucle

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Iterador declarado fuera del for para poder usarlo fuera del bucle
    std::cout << "Iterador declarado fuera del for para poder usarlo fuera del bucle:" << std::endl;

    size_t i = 0;
    
    for (i ; i < 10; i++) //Si el iterador está definido fuera no es necesario añadirlo al for --> for ( ; i < 10 ; ++i) <-- Esto funcionaría sin problemas
    {
        std::cout << i << " - Mostrando por pantalla..." << std::endl;
    }
    std::cout << "Fin del bucle." << std::endl;
    std::cout << "Valor de i: " << i << std::endl; //No hay error de compilador ya que i está definido fuera del bucle

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Bucle for sin valores hardcodeados
    std::cout << "Bucle for sin valores hardcodeados (RECOMENDADO):" << std::endl;
    
    const size_t CONTADOR = 10; //Las constantes se definen en mayúsculas

    for (size_t i = 0; i < CONTADOR; i++)
    {
        std::cout << i << " - Mostrando por pantalla..." << std::endl;
    }
    std::cout << "Fin del bucle." << std::endl;
    
    return 0;
}