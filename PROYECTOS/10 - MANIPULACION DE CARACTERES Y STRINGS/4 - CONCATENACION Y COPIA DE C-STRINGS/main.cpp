#include <iostream>
#include <cstring> //Librería necesaria para concatenar y copiar C-Strings

int main(){
    setlocale(LC_ALL, ".UTF8");

    //CONCANTENAR C-STRINGS
    std::cout << "Concantenar C-Strings - std::strcat():" << std::endl;
    std::cout << "======================================" << std::endl;
    
    /*  Detalles de la función
        char[] strcat(char[] cadenaDestino, char[] cadenaOrigen) | char* strcat(char* cadenaDestino, char* cadenaOrigen)

        Concatena 2 C-Strings

        Devuelve un char[]


        Hay que tener en cuenta que si el char[] es constante tendremos un error de compilador como es lógico

        Algunos compiladores piensan que este tipo de funciones son inseguras,
        debido a que hay que cerciorarse de que los tamaños de los array son adecuados,
    */

    char cadenaDestino[50] = "¡Hola ";
    char cadenaOrigen[50] = "mundo!";

    std::strcat(cadenaDestino, cadenaOrigen);
    std::cout << "Cadena destino: " << cadenaDestino << std::endl;

    std::strcat(cadenaDestino, ", ¡Adiós mundo!");
    std::cout << "Nueva cadena destino: " << cadenaDestino << std::endl;


    std::cout << "=====================================================" << std::endl;


    //OTRO EJEMPLO DE CONCANTENACIÓN DE C-STRINGS
    std::cout << "Otro ejemplo de concatenación de C-Strings - std::strcat():" << std::endl;
    std::cout << "=====================================================" << std::endl;
    
    char *cadenaDestino1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'}; //Incorporamos el carácter de terminación
    char *cadenaOrigen1 = new char[30]{',', ' ', 'T', 'h', 'e', ' ', 'P', 'h', 'o', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'}; //Incorporamos el carácter de terminación

    std::cout << "std::strlen(cadenaDestino1): " << std::strlen(cadenaDestino1) << std::endl; //No cuenta el caracter de terminación
    std::cout << "std::strlen(cadenaOrigen1): " << std::strlen(cadenaOrigen1) << std::endl; //No cuenta el caracter de terminación

    std::cout << "Concatenando..." << std::endl;
    std::strcat(cadenaDestino1, cadenaOrigen1); //strcat comienza a sobreescribir la cadena destino, a partir del carácter de terminación de la cadena.

    std::cout << "std::strlen(cadenaDestino1): " << std::strlen(cadenaDestino1) << std::endl;
    std::cout << "Cadena destino 1: " << cadenaDestino1 << std::endl;
    
    
    std::cout << "=====================================================" << std::endl;
    

    //CONCATENA UN NUMÉRO ESPECÍFICO DE CARACTRES A OTRO C-STRING
    std::cout << "Concatena un número específico de caracteres a otro C-String - std::strncat():" << std::endl;
    std::cout << "=====================================================" << std::endl;

    /*  Detalles de la función
        char* strncat(char* cadenaDestino, const char* cadenaOrigen, size_t numeroCaracteres)

        Concatena un número específico de caracteres a otro C-String

        Devuelve un puntero al C-String concatenado
    */

    char cadenaDestino2[50] = "Hola";
    char cadenaOrigen2[35] = ", hay un pájaro en mi ventana";
    int nCaracteres = 6;

    std::strncat(cadenaDestino2, cadenaOrigen2, nCaracteres); 
    //Se concatenan solo el numero de caracteres especificados, en este caso 6, es decir a la cadena destino 2 se le concatenaría ", hay"
    
    std::cout << "El C-String concatenado resultando es: " << cadenaDestino2 << std::endl;
    /*  CURIOSIDAD
        std::cout << "El C-String concatenado resultando es: " << std::strncat(cadenaDestino2, cadenaOrigen2, nCaracteres) << std::endl;
        La línea de arriba hace lo mismo solo que todo junto en vez de por separado
    */


    std::cout << "=====================================================" << std::endl;


    //COPIAR Y PEGAR C-STRINGS
    std::cout << "Copiar y pegar C-Strings - std::strcpy():" << std::endl;
    std::cout << "=====================================================" << std::endl;

    /*  Detalles de la función
        char* strcpy(char* cadenaDestino, const char* cadenaOrigen)

        Copia el C-String origen y lo pega SOBRE el C-String destino

        Devuelve un puntero al C-String pegado
    */

    const char* cadenaOrigen3 = "C++ es un lenguaje de programación multipropósito.";
    char* cadenaDestino3 = new char[std::strlen(cadenaOrigen3 + 1)]; //Se suma 1 para tener en cuenta el carácter de terminación ya que strlen no lo hace.

    //cadenaDestino3 no está inicializada, por lo que tendrá información basura.

    std::cout << "Cadena Origen 3: " << cadenaOrigen3 << std::endl;
    std::cout << "Cadena Destino 3 (sin inicializar): " << cadenaDestino3 << std::endl;

    std::cout << "Copiando..." << std::endl;
    std::strcpy(cadenaDestino3, cadenaOrigen3);

    std::cout << "sizeof(cadenaDestino3): " << sizeof(cadenaDestino3) << std::endl;
    std::cout << "std::strlen(cadenaDestino3): " << std::strlen(cadenaDestino3) << std::endl;
    std::cout << "Cadena Origen 3: " << cadenaOrigen3 << std::endl;
    std::cout << "Cadena Destino 3: " << cadenaDestino3 << std::endl;

    
    std::cout << "=====================================================" << std::endl;


    //COPIA Y PEGA UN NÚMERO ESPECÍFICO DE CARACTERES A OTRO C-STRING
    std::cout << "Copia y pega un número específico de caracteres a otro C-String - std::strncpy():" << std::endl;
    std::cout << "=====================================================" << std::endl;

    /*  Detalles de la función
        char* strncpy(char* cadenaDestino, const char* cadenaOrigen, size_t numeroCaracteres)

        Copia el numero de caracteres especificados de un C-String origen y los pega SOBRE el C-String destino desde el primer índice.

        Devuelve un puntero al C-String pegado
    */

    const char* cadenaOrigen4 = "Hola";
    char cadenaDestino4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'}; //Incorporamos el carácter de terminación
    int numeroCaracteres2 = 4;

   std::cout << "Cadena Origen 4: " << cadenaOrigen4 << std::endl;
    std::cout << "Cadena Destino 4: " << cadenaDestino4 << std::endl;

    std::cout << "Copiando..." << std::endl;
    std::strncpy(cadenaDestino4, cadenaOrigen4, numeroCaracteres2);

    std::cout << "Cadena destino 4 (tras pegar los caracteres): " << cadenaDestino4 << std::endl;

    return 0;
}