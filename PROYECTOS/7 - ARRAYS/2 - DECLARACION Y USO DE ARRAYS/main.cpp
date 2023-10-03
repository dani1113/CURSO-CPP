#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    /*
        ----------
        *AVANZADO*
        ----------

        IR AL CAPÍTULO 8.10: ARRAYS DINÁMICOS

        Conforme he avanzado con el curso, he aprendido que una variable de array en esencia funciona como un puntero,
        guardando la dirección de memoria del primer elemento del array y no las del resto.

        Más info: https://youtu.be/Fa0PH88k8e0?si=2yRrn9m2e2iLrxH-
    */


    //Declarar un array de int
    int puntuaciones[10];

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Leer datos de un array sin un bucle
    std::cout << "Leer datos de un array sin un bucle:" << std::endl;

    std::cout << "puntuaciones[0]: " << puntuaciones[0] << std::endl; //Información "basura" ya que el array no se ha inicializado
    std::cout << "puntuaciones[1]: " << puntuaciones[1] << std::endl; //Información "basura" ya que el array no se ha inicializado

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Leer datos de un array con un bucle
    std::cout << "Leer datos de un array con un bucle:" << std::endl;

    for (size_t i = 0; i < 10 ; i++)
    {
        std::cout << "puntuaciones[" << i << "]: " << puntuaciones[i] << std::endl;
    }

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Escribir datos en un array sin un bucle
    std::cout << "Escribir datos en un array sin un bucle:" << std::endl;

    puntuaciones[0] = 0;
    puntuaciones[1] = 1;
    puntuaciones[2] = 2;
    puntuaciones[3] = 3;
    puntuaciones[4] = 4;
    puntuaciones[5] = 5;
    puntuaciones[6] = 6;
    puntuaciones[7] = 7;
    puntuaciones[8] = 8;
    puntuaciones[9] = 9;

    for (size_t i = 0; i < 10 ; i++)
    {
        std::cout << "puntuaciones[" << i << "]: " << puntuaciones[i] << std::endl;
    }

    //No puedes modificar valores de un array constante
    const int MANZANAS[9] = {12, 7, 5, 45, 43, 23, 67, 21, 2};
    //MANZANAS[2] = 8; --> Error de compilador, si un array es declarado como constante (const), los valores de los elementos no pueden modificarse

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Escribir datos en un array con un bucle
    std::cout << "Escribir datos en un array con un bucle:" << std::endl;

    for (size_t i = 0; i < 10 ; i++)
    {
        puntuaciones[i] = i * 10;
        std::cout << "puntuaciones[" << i << "]: " << puntuaciones[i] << std::endl;
    }

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Declarar e inicializar un array a la vez
    std::cout << "Declarar e inicializar un array a la vez:" << std::endl;

    double salarios[5] = {12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "salarios[" << i << "]: " << salarios[i] << std::endl;
    }

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Declarar e inicializar un array a la vez, pero sin inicializar todos los elementos
    std::cout << "Declarar e inicializar un array a la vez, pero sin inicializar todos los elementos:" << std::endl;

    int familias[5] = {12, 7, 5}; //El compilador inicializará los elementos con índice 3 y 4 a 0

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "familias[" << i << "]: " << familias[i] << std::endl;
    }

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Declarar e inicializar un array a la vez, pero omitiendo el tamaño del array
    std::cout << "Declarar e inicializar un array a la vez omitiendo el tamaño del array y recorrerlo con un for in range: " << std::endl;

    int grupos[] = {12, 7, 5, 45, 43, 23, 67, 21, 2}; //El compilador deducirá el tamaño en base al número de elementos especificados
    //int grupos[]; --> Error de compilador, ya que este necesita saber de alguna forma el tamaño del array.

    /*En vez de usar un for normal, voy a usar un for in range, para evitar hardcodear el numero de elementos del array en el for normal. 
    También podría obtener el número de elementos del array y ya, pero aún no se como, es la siguiente lección del curso, además esto es otra forma de hacerlo igual de válida.
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "grupos[" << i << "]: " << grupos[i] << std::endl;
    }
    */
    
    int i = 0; //Creo mi propio iterador y lo incremento por cada vuelta del bucle para poder mostrar el std::cout como quiero. No es lo óptimo y es un poco chapuza, pero quería mostrarlo así en la consola para que el ejemplo sea más claro.
	//Si necesitas los índices si o si lo mejor es usar un for normal sabiendo el número de elementos, para ello ver la siguiente lección del curso.

    //for in range
    for (auto valorElemento : grupos)
    {
        //std::cout << "Valor elemento: " << valorElemento << std::endl; --> //Si solo te importan los valores y te dan igual los índices puedes hacerlo así:
        std::cout << "grupos[" << i << "]: " << valorElemento << std::endl;
        i++;
    }

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Operaciones en los elementos de un array
    std::cout << "Operaciones en los elementos de un array con un for in range:" << std::endl;

    int resultados[7] = {2, 5, 8, 2, 5, 6, 9}; //En este caso si especifico el tamaño del array, y es que el for in range se puede usar independientemente sepa el tamaño o no del array

    int suma = 0;

    for (auto valorElemento : resultados)
    {
        suma = suma + valorElemento;
    } 
    std::cout << "La suma de los valores de todos los elementos del array es: " << suma << std::endl;

    return 0;
}