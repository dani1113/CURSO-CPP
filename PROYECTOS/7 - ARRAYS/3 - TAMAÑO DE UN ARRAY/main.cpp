#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    int puntuaciones[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /*Antes de la inclusión de std::size() en C++17 para saber el número de elemento de un array había que hacer lo siguiente:
    Este bucle dejará de funcionar si el array adquiere nuevos elementos, ya que la i parará cuando valga menos de 10, 
    que se supone que es el tamaño de nuestro array antes de añadirle nuevos elementos.
    
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "puntuaciones[" << i << "]: " << puntuaciones[i] << std::endl;
    }
    

    Para arreglar esta situación hasta antes de la llegada de std::size con C++17 había que hacer lo siguiente:
    

    int tamañoTotalArray = sizeof(puntuaciones); //Devuelve la suma del tamaño de bytes de cada elemento --> 40 bytes
    std::cout << "sizeof(puntuaciones): " << sizeof(puntuaciones) << std::endl; //En este caso al ser un array de int (4 bytes) con 10 elementos el resultado del sizeof(puntuaciones) será 40
    
    int tamañoElementoArray = sizeof(puntuaciones[0]); //Devuelve el tamaño en bytes de un elemento en concreto --> 4 bytes
    std::cout << "sizeof(puntuaciones[0]): " << sizeof(puntuaciones[0]) << std::endl; //Escojo cualquier elemento del array y obtengo su tamaño, que en este caso al ser un int será de 4 bytes
    
    int elementosArrayCpp17 = tamañoTotalArray / tamañoElementoArray; //Al dividir las variables de arriba obtengo el número de elementos del array 
    std::cout << "Número de elementos del array: " << elementosArrayCpp17 << std::endl; // elementosArrayCpp17 = 40 / 4 -> Este array tiene 10 elementos.
    

    for (size_t i = 0; i < elementosArrayCpp17; i++)
    {
        std::cout << "puntuaciones[" << i << "]: " << puntuaciones[i] << std::endl;
    }
    */
    
    //Sin embargo hoy en dia con std::size() es mucho más fácil
    std::cout << "Usando un for normal y std::size() para saber el tamaño del array:" << std::endl; 
    for (size_t i = 0; i < std::size(puntuaciones); i++)
    {
        std::cout << "puntuaciones[" << i << "]: " << puntuaciones[i] << std::endl;
    }

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //En el caso de no querer usar std::size y no necesites los índices para nada también podemos usar un for in range, ya que el tamaño del array no es necesario en ese caso.
    std::cout << "Usando un for in range:" << std::endl; 
    for (auto elemento : puntuaciones)
    {
        std::cout << "Valor del elemento: " << elemento << std::endl; //La parte negativa del for in range es que pierdes la información de los índices de los elementos
    }

    return 0;
}