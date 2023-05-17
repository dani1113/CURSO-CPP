#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
    char caracter1 = 'f';
    char caracter2 = 'l';
    char caracter3 = 'e';
    char caracter4 = 'c';
    char caracter5 = 'h';
    char caracter6 = 'a';

    //Muestro por pantalla
    std::cout << caracter1 << std::endl;
    std::cout << caracter2 << std::endl;
    std::cout << caracter3 << std::endl;
    std::cout << caracter4 << std::endl;
    std::cout << caracter5 << std::endl;
    std::cout << caracter6 << std::endl;

    std::cout << std::endl;

    //sizeof()
    std::cout << "Un char ocupa: " << sizeof(char) << " byte." << std::endl;

    std::cout << std::endl;

    //ASCII
    char valor = 65; //Caracter ASCII de 'A'
    std::cout << "Valor: " << valor << std::endl; //A
    std::cout << "Valor casteado a int: " << static_cast<int>(valor) << std::endl; //65

    return 0;
}