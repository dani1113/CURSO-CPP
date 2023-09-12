#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    int numeros[] = {1,2,3,4,5,6,7,8,9,10};

    std::cout << "Array de números: int numeros[] = {1,2,3,4,5,6,7,8,9,10} " << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Leer fuera de los límites de un array
    std::cout << "Leer fuera de los límites del array de números: " << std::endl;
    std::cout << "numeros[12]: " << numeros[12] << std::endl; //Leerá basura o crasherá el programa

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Escribir fuera de los límites de un array
    std::cout << "Escribir fuera de los límites del array de números: " << std::endl;
    //Aunque el compilador lo permite, al no ser el propietario de la posición de memoria en el índice 12, el programa dueño podrá venir y modificar la posición de memoria de nuevo, si intento leer la nueva posición de memoria, leeré basura en vez de mi valor modificado previamente.
    //También puede ocurrir que corrompa datos usados por otras partes de mi propio programa.
    numeros[12] = 1000;
    std::cout << "numeros[12]: " << numeros[12] << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Otra prueba de escribir fuera de los límites del array de números: " << std::endl;
    numeros[32654623] = 3000;
    std::cout << "numeros[32654623]: " << numeros[32654623] << std::endl; //CRASH

    return 0;
}