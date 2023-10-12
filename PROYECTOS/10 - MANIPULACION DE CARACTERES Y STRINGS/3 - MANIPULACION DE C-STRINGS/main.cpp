#include <iostream>
#include <cstring> //Librería necesaria para manipular C-Strings

int main(){
    setlocale(LC_ALL, ".UTF8");

    //COMPROBAR LA LONGITUD DE UN C-STRING
    std::cout << "Comprobar la longitud de un C-String - std::strlen():" << std::endl;
    std::cout << "=====================================================" << std::endl;

    char mensaje1 [] = "El cielo es azul"; //Array (C-String)
    const char *mensaje2 = "El cielo es azul"; //Puntero (Array degradado al usar const char*)

    std::cout << "Mensaje: " << mensaje1 << std::endl;

    std::cout << "strlen(mensaje1): " << std::strlen(mensaje1) << std::endl; //strlen no tiene en cuenta el caracter de terminación null '\0'
    std::cout << "sizeof(mensaje1): " << sizeof(mensaje1)<< std::endl; //Se incluye el caracter de terminacion null
    std::cout << "strlen(mensaje2): " << std::strlen(mensaje2) << std::endl; //strlen funciona con arrays degradados en punteros. No se tiene en cuenta el caracter de terminación
    std::cout << "sizeof(mensaje2): " << sizeof(mensaje2) << std::endl; //Imprime el tamaño del puntero


    std::cout << "=====================================================" << std::endl;


    //COMPARAR C-STRINGS
    std::cout << "Comparar C-Strings - std::strcmp():" << std::endl;
    std::cout << "=====================================================" << std::endl;

    /*  Detalles de la función
        int strcmp(const char* cadena1, const char* cadena2)

        Compara C-Strigns en orden lexicográfico

        ------------------------------------------------------------------------------------------
        Devuelve un valor negativo si el carácter que se está comparando de cadena1 aparece antes,
        que el carácter que se está comparando de cadena2 en orden lexicográfico
        ------------------------------------------------------------------------------------------
        Devuelve 0 si cadena1 y cadena2 son iguales
        ------------------------------------------------------------------------------------------
        Devuelve un valor positivo si el carácter que se está comparando de cadena1 aparece después,
        que el carácter que se está comparando de cadena2 en orden lexicográfico
        ------------------------------------------------------------------------------------------
    */

    const char *cadena1 = "direccionDeMemoriaCala";
    const char *cadena2 = "direccionDeMemoriaCaja";

    char cadena3[] = "Casa"; 
    char cadena4[] = "Cata";

    char cadena5[] = "Caza"; 
    char cadena6[] = "Caza";

    std::cout << "Comparación entre cadenas: (" << cadena1 << ", " << cadena2 << ") --> " << std::strcmp(cadena1, cadena2) << std::endl;
    //cadena1 va después que cadena2 lexicograficamente, por lo que se mostrará un valor positivo.

    std::cout << "Comparación entre cadenas: (" << cadena3 << ", " << cadena4 << ") --> " << std::strcmp(cadena3, cadena4) << std::endl;
    //cadena3 va antes que cadena4 lexicograficamente, por lo que se mostrará un valor negativo.

    std::cout << "Comparación entre cadenas: (" << cadena5 << ", " << cadena6 << ") --> " << std::strcmp(cadena5, cadena6) << std::endl;
    //cadena5 y cadena 6 son iguales, por lo que se mostrará un 0.


    cadena1 = "direccionDeMemoriaCaca"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    cadena2 = "direccionDeMemoriaCata"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    //cadena3 = "capa"; //ERROR -> No puedo modificar el valor de un array de char

    std::cout << "Comparación entre cadenas modificadas: (" << cadena1 << ", " << cadena2 << ") --> " << std::strcmp(cadena1, cadena2) << std::endl;
    //cadena1 va después que cadena2 lexicograficamente, por lo que se mostrará un valor positivo.


    std::cout << "=====================================================" << std::endl;


    //COMPARAR C-STRINGS ESPECIFICANDO EL NÚMERO DE CARACTERES A COMPARAR
    std::cout << "Comparar C-Strings especificando el número de caracteres a comparar - std::strncmp():" << std::endl;
    std::cout << "=====================================================" << std::endl;

    /*  Detalles de la función
        int strncmp(const char* cadena1, const char* cadena2, size_t numeroCaracteres)
        
        Compara un número concreto de caracteres de los C-Strings en orden lexicográfico

        ------------------------------------------------------------------------------------------
        Devuelve un valor negativo si el carácter que se está comparando de cadena1 aparece antes,
        que el carácter que se está comparando de cadena2 en orden lexicográfico
        ------------------------------------------------------------------------------------------
        Devuelve 0 si cadena1 y cadena2 son iguales o si el número de caracteres es 0
        ------------------------------------------------------------------------------------------
        Devuelve un valor positivo si el carácter que se está comparando de cadena1 aparece después,
        que el carácter que se está comparando de cadena2 en orden lexicográfico
        ------------------------------------------------------------------------------------------
    */

    size_t nCaracteres = 22;

    cadena1 = "direccionDeMemoriaCala"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    cadena2 = "direccionDeMemoriaCasa"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    
    std::cout << "Comparación entre cadenas especificando el numero de caracteres a comparar: (" << cadena1 << ", " << cadena2 << ", " << nCaracteres << " caracteres a comprobar) --> " << std::strncmp(cadena1, cadena2, nCaracteres) << std::endl;
    //cadena1 va antes que cadena2 lexicograficamente, por lo que se mostrará un valor negativo.
    
    cadena1 = "direccionDeMemoriaCaza"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    cadena2 = "direccionDeMemoriaCana"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    
    std::cout << "Comparación entre cadenas especificando el numero de caracteres a comparar: (" << cadena1 << ", " << cadena2 << ", " << nCaracteres << " caracteres a comprobar) --> " << std::strncmp(cadena1, cadena2, nCaracteres) << std::endl;
    //cadena1 va después que cadena2 lexicograficamente, por lo que se mostrará un valor positivo.
    
    cadena1 = "direccionDeMemoriaCava"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    cadena2 = "direccionDeMemoriaCava"; //Al ser un puntero no constante que apunta a una variable constante, no puedo modificar el valor de la variable apuntada, pero si la dirección a la que apunta.
    
    std::cout << "Comparación entre cadenas especificando el numero de caracteres a comparar: (" << cadena1 << ", " << cadena2 << ", " << nCaracteres << " caracteres a comprobar) --> " << std::strncmp(cadena1, cadena2, nCaracteres) << std::endl;
    //cadena1 y cadena 2 son iguales, por lo que se mostrará un 0.
    

    std::cout << "=====================================================" << std::endl;


    //BUSCAR LA PRIMERA OCURRENCIA DE UN CARÁCTER CONCRETO EN UN C-STRING
    std::cout << "Buscar la primera ocurrencia de un carácter concreto en un C-String - std::strchr" << std::endl;
    std::cout << "=====================================================" << std::endl;

    /*  Detalles de la función
        int* strchr(const char* cadena1, char caracterAEncontrar)
        
        Buscar la primera ocurrencia del carácter especificado en un C-String

        ------------------------------------------------------------------------------------------
        Devuelve un puntero al caracter e encontrar si lo encuentra.
        ------------------------------------------------------------------------------------------
        Devuelve nullptr si no encuentra el caracter en la cadena.
        ------------------------------------------------------------------------------------------
    */

    const char *const cadena7 = "El 20 de octubre sale Marvel's Spiderman 2 en exclusiva para PS5"; //Puntero constante para evitar posibles modificaciones
    char caracterAEncontrar = 'S';
    unsigned int apariciones = 0; //Al ser un contador debe de ser positivo, por lo que por seguridad es mejor aplicarle el modificador unsigned.
    const char *resultado = cadena7;

    /*
        Se utiliza un puntero "externo" encargado de almacenar para evitar modificar el puntero original,
        ya que al operar con él, (en este caso incrementándolo para encontrar el siguiente carácter se modificaría el puntero original,
        y eso no nos interesa, por lo que es mejor usar otro puntero auxiliar ('resultado' en este caso) que apunte a ese puntero
        previamente mencionado, de hecho no es una mala idea hacer el puntero original constante para evitar posibles modificaciones.

        El puntero "externo" (resultado), apuntará a algo válido, en caso de encontrar el caracter especificado,
        en caso contrario el puntero devolverá nullptr, lo que podremos usar para establecer la condición de nuestro while.
    */

    while ((resultado = std::strchr(resultado, caracterAEncontrar)) != nullptr)
    {
        std::cout << "Encontrado el caracter '" << caracterAEncontrar << "' en '" << resultado << "'" << std::endl;
        resultado++;
        apariciones++;

        /*
            Incremento el puntero, pasando así a la siguiente dirección de memoria del puntero,
            que en este caso es el segundo caracter de toda la cadena,
            ya que los punteros solo apuntan al primer elemento de la misma,
            porque sino volverá a encontrar el caracter en la misma posición,
            generando un bucle infinito.

            Cuando strchr no encuentre mas caracteres como el especificado,
            la función devolverá nullptr, provocando así la salida del while y
            la ejecución del resto del programa.
        */
    }
    
    std::cout << "Apariciones del caracter '" << caracterAEncontrar << "': " << apariciones << std::endl;

    /* EJEMPLO SIN USAR UN PUNTERO EXTERNO - NO HACER
    
        const char *cadena8 = "El 20 de octubre sale Marvel's Spiderman 2 en exclusiva para PS5"; //Puntero constante para evitar posibles modificaciones
        char caracterAEncontrar2 = 'S';
        const char *resultado2 = nullptr;
        unsigned int apariciones2 = 0; //Al ser un contador debe de ser positivo, por lo que por seguridad es mejor aplicarle el modificador unsigned.
        
        while ((resultado2 = std::strchr(cadena8, caracterAEncontrar2)) != nullptr)
        {
            std::cout << "Encontrado el caracter '" << caracterAEncontrar2 << "' en '" << resultado2 << "'" << std::endl;
            cadena8++;
            apariciones2++;
        }
        
        std::cout << "Apariciones del caracter '" << caracterAEncontrar2 << "': " << apariciones2 << std::endl;
    */


    std::cout << "=====================================================" << std::endl;


    //BUSCAR LA ÚLTIMA OCURRENCIA DE UN CARÁCTER CONCRETO EN UN C-STRING
    std::cout << "Buscar la última ocurrencia de un carácter concreto en un C-String - std::strrchr" << std::endl;
    std::cout << "=====================================================" << std::endl;
    
    /*  Detalles de la función
        int strrchr(const char* cadena1, char caracterAEncontrar)

        Buscar la última ocurrencia del carácter especificado en un C-String

        ------------------------------------------------------------------------------------------
        Devuelve un puntero al caracter e encontrar si lo encuentra.
        ------------------------------------------------------------------------------------------
        Devuelve nullptr si no encuentra el caracter en la cadena.
        ------------------------------------------------------------------------------------------
    */

    char entrada[] = "C:/Users/Dani/Desktop"; //Al tratarse de un C-String cuenta con un caracter de terminación
    char *salida = std::strrchr(entrada, '/');

    if (salida != nullptr)
    {
        std::cout << salida + 1 << std::endl; 
        //Se suma 1 porque queremos empezar a imprimir pasado el caracter encontrado por std::strrchr,
        //en este caso se imprimirá "Desktop", si no sumamos el 1, se imprimiría "/Desktop"
    }

    return 0;
}