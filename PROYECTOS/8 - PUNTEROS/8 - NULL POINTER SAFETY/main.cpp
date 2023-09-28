#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Null Pointer Safety
    std::cout << "Null Pointer Safety:" << std::endl;

    int *pNumero = {}; //Inicializado a nullptr
    pNumero = new int(7); //Asignando memoria

    if (pNumero != nullptr) //Comprobación de null pointer
    {
        std::cout << "pNumero apunta a una dirección de memoria válida." << std::endl;
        std::cout << "*pNumero: " << *pNumero << std::endl; //Ahora que el puntero apunta a una drección válida, uso el puntero
    }
    else
    {
        std::cout << "pNumero apunta a una dirección de memoria inválida." << std::endl;
    }

    /* Comprobación de null pointer directa. Los punteros se pueden convertir implícitamente en booleans si el if así lo espera.
    if (pNumero)
    {
        std::cout << "pNumero apunta a una dirección de memoria válida." << std::endl;
        std::cout << "*pNumero: " << *pNumero << std::endl; 
    }
    else
    {
        std::cout << "pNumero apunta a una dirección de memoria inválida." << std::endl;
    }
    */

    delete pNumero; //Una vez usada la memoria, hay que liberarla
    pNumero = nullptr; //Y reiniciar el puntero


    //No hay problema en llamar a delete en un puntero que tenga nullptr como valor
    int *pNumero1 = {};
    delete pNumero1; //No es necesario hacer una comprobación previa, es redundate

    return 0;
}