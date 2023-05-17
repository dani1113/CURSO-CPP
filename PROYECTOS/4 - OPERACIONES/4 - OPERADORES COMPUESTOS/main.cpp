#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //VARIABLE
    int valor {45};
    std::cout << "Valor: " << valor << std::endl;
    
    //OPERDORES COMPUESTOS
    valor +=5; //Es lo mismo que --> valor = valor + 5;
    std::cout << "Valor (después de +=5): " << valor << std::endl; //50
    //std::cout << "Valor: " << valor +=5 << std::endl; //Error de compilación, no se puede hacer este tipo de operaciones en un cout

    valor -=5; //Es lo mismo que --> valor = valor - 5;
    std::cout << "Valor (después de -=5): " << valor << std::endl; //45 

    valor *=2; //Es lo mismo que --> valor = valor * 2;
    std::cout << "Valor (después de *=2): " << valor << std::endl; //90

    valor /= 3; //Es lo mismo que --> valor = valor / 3;
    std::cout << "Valor (después de /=3): " << valor << std::endl; //30

    valor %= 11; //Es lo mismo que --> valor = valor % 11;
    std::cout << "Valor (después de %=11): " << valor << std::endl; //8

    return 0;
}