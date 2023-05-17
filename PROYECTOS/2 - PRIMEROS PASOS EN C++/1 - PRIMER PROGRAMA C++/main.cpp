#include <iostream> //Librería que nos permite imprimir por pantalla.
#include <string> //Librería que nos permite trabajar con strings.

int main(){
    setlocale(LC_ALL, ".UTF8"); //Establece el tenxto en UTF-8 para admitir más caracteres.
    
    std::cout << "¡Hola mundo!"; //Depende de iostream, imprime por pantalla lo que está entrecomillado.
    std::cout << std::endl; //Depende de iostream, añade un salto de línea.
    std::cout << "¡Hola mundo 2!" << std::endl; //Igual que las 2 líneas anteriores.
    std::cout << "¡Hola mundo 3!";
    std::cout << std::endl;

    for (int i = 0; i < 11; i++)
    {
        std::cout << std::to_string(i) + " --> Daniel Carmona Salazar" << std::endl; //El to_string depende de string y convierte int a string.
    }
    
    return 0; //Se incluye al final de la función para ver si hay errores o no, ya que todo se ejecuta de forma secuencial.
}
