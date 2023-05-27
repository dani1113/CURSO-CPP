#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    int boli = 10;
    int rotulador = 20;
    int borrador = 30;
    int rectangulo = 40;
    int circulo = 50;
    int elipse = 60;

    int herramienta = circulo;

    if (herramienta == boli) {
        std::cout << "La herramienta actual es el boli" << std::endl;
    }
    else if (herramienta == rotulador) {
        std::cout << "La herramienta actual es el rotulador" << std::endl;
    }
    else if (herramienta == borrador) {
        std::cout << "La herramienta actual es el borrador" << std::endl;
    }
    else if (herramienta == rectangulo) {
        std::cout << "La herramienta actual es el rectangulo" << std::endl;
    }
    else if (herramienta == circulo) {
        std::cout << "La herramienta actual es el circulo" << std::endl;
    }
    else if (herramienta == elipse) {
        std::cout << "La herramienta actual es la elipse" << std::endl;
    }

    //Solo se ejecuta el bloque de código que cumple la condición y a continuación continua con el resto de la ejecución del programa

    std::cout << "Continúa" << std::endl;
    
    

    return 0;
}