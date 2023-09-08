#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Declarar un array de caracteres
    char mensaje[4] = {'H','o','l','a'};

    //Leer datos de un array con un bucle
    std::cout << "Leer datos de un array con un bucle:" << std::endl;
    std::cout << "Mensaje: ";
    for (auto caracter : mensaje)
    {
        std::cout << caracter;
    }
    std::cout << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Escribir datos en un array con un bucle
    std::cout << "Escribir datos en un array con un bucle:" << std::endl;

    mensaje[1] = 'a';
    std::cout << "Mensaje: ";
    for (auto caracter : mensaje)
    {
        std::wcout << caracter;
    }
    std::cout << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Mostrar datos por pantalla de un array de caracteres sin un bucle, con basura
    std::cout << "Mostrar datos por pantalla de un array de caracteres sin un bucle, con basura:" << std::endl;

    char mensaje2[] = {'A','d','i','o','s'};
    //En C los arrays de caracteres deben acabar en NULL, por lo que en mensaje2, C++ imprime información basura al final de mensaje, ya que no sabe cuando parar de imprimir.
    std::cout << "Mensaje 2: " << mensaje2 << std::endl; //Para solucionar esto, hay que añadir un elemento extra NULL (caracter de terminación \0)
    std::cout << "sizeof(mensaje2): " << sizeof(mensaje2) << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Mostrar datos por pantalla de un array de caracteres sin un bucle, sin basura
    std::cout << "Mostrar datos por pantalla de un array de caracteres sin un bucle, sin basura:" << std::endl;

    char mensaje3[6] = {'A','d','i','o','s','\0'}; //El elemento \0 cuenta como un sexto elemento
    std::cout << "Mensaje 3: " << mensaje3 << std::endl;
    std::cout << "sizeof(mensaje3): " << sizeof(mensaje3) << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Mostrar datos por pantalla de un array de caracteres sin un bucle, sin basura y sin añadir el caracter de terminación como elemento
    std::cout << "Mostrar datos por pantalla de un array de caracteres sin un bucle, sin basura y sin añadir el caracter de terminación como elemento:" << std::endl;

    char mensaje4[] = {'O','l','a','s','\0'}; //Al indicar que el tamaño del array es del número de elementos + 1, el compilador añadirá automáticamente el caracter de terminación \0
    std::cout << "Mensaje 4: " << mensaje4 << std::endl;
    std::cout << "sizeof(mensaje4): " << sizeof(mensaje4) << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    std::cout << "IMPORTANTE:" << std::endl;
    std::cout << "A diferencia de los array de int, los array de caracteres permiten ser mostrados por pantallas sin necesidad de recorrerlos con un bucle." << std::endl;
    std::cout << "Si intentas mostrar por pantalla un array de int sin un bucle, no habrá error de compilación pero mostrará basura, para entender lo que pasa, ir a la siguiente lección." << std::endl;

    int numeros[] = {1,2,3,4,5,6};
    std::cout << "Números: " << numeros << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Strings de C literales
    std::cout << "Strings de C literales:" << std::endl; //Los strings aumentan la productividad y facilitan el trabajo

    char mensaje5[] = {"Metal"};
    std::cout << "Mensaje 5: " << mensaje5 << std::endl;
    std::cout << "sizeof(mensaje5): " << sizeof(mensaje5) << std::endl; //No es necesario añadir el caracter de terminación, ya que C++ reconoce las comillas dobles y lo añade automaticamente, por lo que el índice del string será 6 y no 5 en este caso.
    //Si aun así añado \0 manualmente, el tamaño del array aumentaría en 1, pasando a 7, pero como digo no es necesario.

    std::cout << std::endl;

    char mensaje6[] = {"Esto también es un string"}; //Si indico el índice debo tener en cuenta que C++ añadirá el caracter de terminacion
    std::cout << "Mensaje 6: " << mensaje6 << std::endl;
    std::cout << "sizeof(mensaje6): " << sizeof(mensaje6) << std::endl;

    return 0;
}