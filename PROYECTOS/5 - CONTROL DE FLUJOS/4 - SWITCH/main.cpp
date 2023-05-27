#include <iostream>

//Constantes: Variables que no se pueden modificar.
const int boli = 10;
const int rotulador = 20;
const int borrador = 30;
const int rectangulo = 40;
const int circulo = 50;
const int elipse = 60;

int main(){
    setlocale(LC_ALL, ".UTF8");

    int herramienta = elipse;

    switch (herramienta)
    {
    case boli: //Las condiciones de los switch, tienen que ser variables constantes
        std::cout << "La herramienta actual es el boli" << std::endl;
        break; //Hace que el programa salga del switch para continuar con la ejecución del código, si no se incluye se ejcutará la siguiente condición.
            
    case rotulador:
        std::cout << "La herramienta actual es el rotulador" << std::endl;
        break;

    case borrador:
        std::cout << "La herramienta actual es el borrador" << std::endl;
        break;

    /*
        Se pueden agrupar diferentes casos para que una condicion haga que se cumplan varios de ellos.
        Por ejemplo aquí si la herramienta es rectangulo, circulo o elipse, en cualquiera de las 3 opciones la condición se cumplirá.
        Y se ejecutaría la línea que muestra por pantalla "Dibujando formas..."
    */
    case rectangulo:
    case circulo:
    case elipse:
        std::cout << "Dibujando formas..." << std::endl;
        break;

    default:
        std::cout << "La herramienta seleccionada no coincide con ninguna de las que hay disponibles." << std::endl;
        break;
    }

    //Solo se ejecuta el bloque de código que cumple la condición y a continuación continua con el resto de la ejecución del programa.
    std::cout << "Continúa" << std::endl;

    return 0;
}