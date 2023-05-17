#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    int numeroDecimal = 15; //Sistema decimal.
    int numeroOctal = 017; //Sistema octal.
    //El 0x/0b que va delante del número hezadecimal/binario debe de ser minúscula.
    int numeroHexadecimal = 0x0F; //Sistema hexadecimal, puedes usar la mayúscula o la minúscula en el hexadecimal no importa.
    int numeroBinario = 0b00001111; //Sistema binario.

    //La representación va a ser la misma, depende de lo que estemos haciendo usaremos un sistema u otro.
    std::cout << "Número decimal: " << numeroDecimal << std::endl;
    std::cout << "Número octal: " << numeroOctal << std::endl;
    std::cout << "Número hexadecimal: " << numeroHexadecimal << std::endl;
    std::cout << "Número binario: " << numeroBinario << std::endl;

    return 0;
}