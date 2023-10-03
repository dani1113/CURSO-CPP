#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //DECLARACIÓN EN INICIALIZACIÓN DE ARRAYS DINÁMICOS (Arrays alojados en Heap)
    size_t tamaño = 10; //Los arrays dinámicos NO requieren de un tamaño constante

    double *pSalarios = new double[tamaño]; //Array no inicializado, contiene valores basura    
    int *pEstudiantes = new(std::nothrow) int[tamaño]{}; //Array inicializado con todos los valores a 0
    double *pPuntuaciones = new(std::nothrow) double[tamaño]{1, 2, 3, 4, 5}; //Array inicializado con los 5 primeros elementos inicializados, el resto serán 0


    //COMPROBACIÓN DE NULLPTR PARA USAR LA MEMORIA ASIGNADA
    if (pPuntuaciones != nullptr) // También sirve if (pPuntuaciones) ya que como hemos visto los punteros pueden actuar de booleans si el contexto así lo requiere
    {
        std::cout << "Tamaño de pPuntuaciones (puntero normal): " << pPuntuaciones << std::endl; //al ser un double será 8
        std::cout << "Memoria asignada correctamente para 'puntuaciones'" << std::endl;

        //Mostrar los elementos del array apuntado por el puntero
        for (size_t i = 0; i < tamaño; i++)
        {
            std::cout << "Valor: " << pPuntuaciones[i] << ": " << *(pPuntuaciones + i) << std::endl;
            /* IMPORTANTE
                Para obtener el valor del array desreferencio el puntero (*) y a continuacion hago pPuntuaciones + i.
                Es decir la dirección de memoria de pPuntuaciones + el valor que tenga i en esa vuelta del bucle.
                Al sumar direcciones de memoria hay que seguir una formula especial: valorDirecciónDeMemoria + i * tamañoTipoDeDato.
                Ejemplo: Supongamos que i vale 2. Para calcular el valor de la dirección de memoria cuando i es 2 tenemos que hacer:
                valorDirecciónDeMemoria + 2 * 4 (ya que los int tienen un tamaño de 4 bytes)
                En el ejemplo del video de abajo se ve muy claramente explicado
                IMPORTANTE POINTER NOTATION: https://youtu.be/Fa0PH88k8e0?si=nJDlNURnvpLEVzWi
            */
        }
    }
    else
    {
        std::cout << "ERROR al asignar memoria para 'puntuaciones'" << std::endl;
    }


    //LIBERAR LA MEMORIA ASIGNADA EN HEAP DE LOS ARRAYS ALOJADOS
    delete[] pSalarios;
    pSalarios = nullptr;

    delete[] pEstudiantes;
    pEstudiantes = nullptr;

    delete[] pPuntuaciones;
    pPuntuaciones = nullptr;


    //LIMITACIONES DE ARRAYS DINÁMICOS (HEAP) QUE LO DIFERENCIAN DE LOS ARRAYS ESTÁTICOS (STACK)
    /* Array estático (Vive en Stack)
        int puntuaciones[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        std::cout << "Tamaño de puntuaciones: " << std::size(puntuaciones) << std::endl;
        for (auto i : puntuaciones)
        {
            std::cout << "Valor de puntuaciones: " << i << std::endl;
        }
    */

    /* Array dinámico (Vive en Heap)
        int *pPuntuaciones1 = new int[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        //std::cout << "Tamaño de pPuntuaciones: " << std::size(pPuntuaciones1) << std::endl; //ERROR -> std::size no funciona con arrays dinámicos, más detalles en el PDF
        for (auto i : pPuntuaciones1) //ERROR -> pPuntuaciones1 es un puntero, no un array
        {
            std::cout << "Valor de pPuntuaciones1: " << i << std::endl;
        }
    */
    

    

    return 0;
}