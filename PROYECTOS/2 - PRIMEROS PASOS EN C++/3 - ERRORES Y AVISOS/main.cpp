#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");
    
    //Error de compilación
    //std::cout << "¡Hola mundo!" << std::endl ERROR DE COMPILACIÓN AL NO PONER EL ; AL FINAL
    std::cout << "¡Hola mundo!" << std::endl;

    //Error de ejecución
    int test = 7/0; //Provoca un Warning
    std::cout << "Valor: " << test << std::endl;

    return 0;
}