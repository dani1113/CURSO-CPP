#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    /* Con estas asignaciones gastas la memoria Heap, por lo que el programa crashea sin acabar bien
    int *datos = new int[10000000000000];
    
    for (size_t i = 0; i < 10000000000000; i++)
    {
        int *datos = new int[10000000000000];
    }
    */
    //Para evitar esto hay que manejar las excepción, o usar std::nothrow

    /*Manejo de excepciones
    for (size_t i = 0; i < 100; i++)
    {
        try
        {
            int *datos = new int[10000000000000000]; //Al estar en un 'try' el programa intenta ejecutar esta línea y si falla, provocandose una excepción salta al 'catch', para capturar la excepción
        }
        catch(const std::exception& e)
        {
            std::cerr << "Algo ha ido mal: " << e.what() << std::endl; //Una vez acabado el catch, el programa sigue con se ejecución, sin crashear
        }
    }
    */

    //std::nothrow
    for (size_t i = 0; i < 100; i++)
    {
        int *datos = new (std::nothrow) int[10000000000];

        if (datos != nullptr)
        {
            std::cout << "Memoria asignada" << std::endl;
        }
        else
        {
            std::cout << "Error al asignar la memoria" << std::endl;
        }
    }

    std::cout << "Fin de programa" << std::endl;

    return 0;
}