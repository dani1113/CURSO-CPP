#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Declarar e inicializar un puntero de char
    //char *pMensaje = {"Hola mundo!"}; --> Error de compilador, ya que el array de char que se creará a partir del string no es de tipo const, es decir, no es una CONSTANTE.
    const char *pMensaje = {"Hola mundo!"};


    //Mostrar por pantalla un puntero de char
    std::cout << "Mensaje: " << pMensaje << std::endl; //Se imprime todo el mensaje
    std::cout << "*pMensaje: " << *pMensaje << std::endl; //Se imprime solo el primer elemento del array, que es el al que el puntero apunta.


    //Modificar el string
    //*pMensaje = 'A'; --> Error de compilador, ya que el puntero es de tipo const, es decir, no se puede modificar.
    char mensaje1[] = {"Hola mundo"}; //Si queremos modificar un string, lo mejor es directamente crear el array de char
    mensaje1[0] = 'B';
    std::cout << "Mensaje 1 (string modificado): " << mensaje1 << std::endl;

    return 0;
}