#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");
	
    //Variables
    int x = 2;
    int y = 5;

    //Sumar
    int suma = x + y;
    std::cout << "Suma: " << suma << std::endl;
    
    //Restar
    int resta1 = y - x;
    int resta2 = x - y;
    std::cout << "Resta 1: " << resta1 << std::endl;
    std::cout << "Resta 2: " << resta2 << std::endl;
    
    //Multiplicar
    int multiplicación = x * y;
    std::cout << "Multiplicación: " << multiplicación << std::endl;

    //Dividir
    int división = x / y; //Al ser un int, no puede tener decimales por lo que el resultado será 0 --> (2 / 5 = 0.4)
    std::cout << "División: " << división << std::endl;

    //Calcular el resto/módulo
    int módulo = x % y; //El resto de 2 / 5 = 2
    std::cout << "Módulo: " << módulo << std::endl;

    return 0;
}