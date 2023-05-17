#include <iostream>

int sumarNumeros (int parametro1, int parametro2){ //Función
    int suma = parametro1 + parametro2;
    return suma;
}

int multiplicarNumeros (int parametro1, int parametro2){ //Función
    int multiplicación = parametro1 * parametro2;
    return multiplicación;
}

int main(){
    setlocale(LC_ALL, ".UTF8");

    int numeroA = 3; //Sentencia
    int numeroB = 7;

    std::cout << "Número A: " << numeroA << std::endl; //3
    std::cout << "Número B: " << numeroB << std::endl; //7

    int suma = sumarNumeros(numeroA, numeroB);
    std::cout << "La suma del Número A y el Número B es: " << suma << std::endl; //10


    suma = sumarNumeros(25, 7);
    std::cout << "La suma de 25 y 7 es: " << suma << std::endl; //32


    suma = sumarNumeros(30, 54);
    std::cout << "La suma de 30 y 54 es: " << suma << std::endl; //84


    std::cout << "La suma de 3 y 42 es: " << sumarNumeros(3, 42) << std::endl; //45


    int numeroC = 8;
    int numeroD = 9;
    
    std::cout << "La multiplicación del Número C: " << numeroC << " y el Número D: " << numeroD << ", es: " << multiplicarNumeros(numeroC, numeroD) << std::endl; //72

    return 0;
}