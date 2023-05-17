#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //VARIABLE
    int valor = 5;
    
    //----------------------------------------------------------------
    std::cout << "INCREMENTO Y DECREMENTO DE VARIABLES" << std::endl;
    valor = valor + 1; //También puedo hacerlo directamente en la sentencia.
    std::cout << "Valor: " << valor << std::endl;

    valor = 5; //Reseteo el valor de la variable a 5.

    valor = valor - 1; //También puedo hacerlo directamente en la sentencia.
    std::cout << "Valor: " << valor << std::endl;
    //----------------------------------------------------------------

    std::cout << std::endl;

    //----------------------------------------------------------------
    std::cout << "INCREMENTO Y DECREMENTO DE VARIABLES CON POSTFIJOS" << std::endl;
    valor = 5; //Reseteo el valor de la variable a 5
    
    std::cout << "Incrementando el valor: " << valor++ << std::endl; //5 --> Se captura el valor sin modificar e inmediatamente después de completar la sentencia se incrementa.
    std::cout << "Valor incrementado: " << valor << std::endl; //6

    valor = 5; //Reseteo el valor de la variable a 5.

    std::cout << "Decrementando el valor: " << valor-- << std::endl; //5 --> Se captura el valor sin modificar e inmediatamente después de completar la sentencia se decrementa.
    std::cout << "Valor decrementado: " << valor << std::endl; //4
    //----------------------------------------------------------------

    std::cout << std::endl;

    //----------------------------------------------------------------
    std::cout << "INCREMENTO Y DECREMENTO DE VARIABLES CON PREFIJOS" << std::endl;
    valor = 5; //Reseteo el valor de la variable a 5
    
    ++valor;
    std::cout << "Valor (prefijo ++): " << valor << std::endl; //6 --> El valor se incrementa directamente.
    valor = 5; //Reseteo el valor de la variable a 5
    std::cout << "Valor (prefijo ++ en la sentencia directamente): " << ++valor << std::endl; //6 --> El valor se incrementa directamente.

    valor = 5; //Reseteo el valor de la variable a 5

    --valor;
    std::cout << "Valor (prefijo --): " << valor << std::endl; //4 --> El valor se decrementa directamente.
    valor = 5; //Reseteo el valor de la variable a 5
    std::cout << "Valor (prefijo -- en la sentencia directamente): " << --valor << std::endl; //4 --> El valor se decrementa directamente.
    //----------------------------------------------------------------

    return 0;
}