#include <iostream>

int main(){	
    setlocale(LC_ALL, ".UTF8");

    /*  Inicialización con {}
        int contadorElefantes; //Variable no incializada, puede tener valores aleatorios.
        int contadorLeones {}; //Variable inicializada en 0.
        int contadorPerros {10}; //Variable inicializada en 10.
        int contadorGatos {15}; //Variable inicializada en 15.
        int contadorAnimalesDomesticados {contadorPerros + contadorGatos}; //Se puede usar una expresión para inicializar una variable.
        //int error1 {noExiste1}; //No puedes inicializar una variable con otra variable que no esta definidia obviamente.
        //int error2 {2.9}; //Al ser un valor decimal, saltará un error en la compilación.

        std::cout << "Contador elefantes: " << contadorElefantes << std::endl;
        std::cout << "Contador leones: " << contadorLeones << std::endl;
        std::cout << "Contador perros: " << contadorPerros << std::endl;
        std::cout << "Contador gatos: " << contadorGatos << std::endl;
        std::cout << "Contador animales domesticados: " << contadorAnimalesDomesticados << std::endl;
    */

    /*  Inicialización con ()
        int contadorManzanas (5);
        int contadorNaranjas (10);
        int contadorFrutas (contadorManzanas + contadorNaranjas);
        // int error3 (noExiste2 + noExiste3); //No puedes inicializar una variable con otra variable que no esta definidia obviamente.
        int valorTruncado (2.9); //Se pierde información, ya que va a truncar el valor. En este caso concreto es más seguro utilizar la inicialización con {}, ya que el compilador dará un error.

        std::cout << "Contador de manzanas: " << contadorManzanas << std::endl;
        std::cout << "Contador de naranjas: " << contadorNaranjas << std::endl;
        std::cout << "Contador de frutas: " << contadorFrutas << std::endl;
        std::cout << "Valor truncado: " << valorTruncado << std::endl;

    */

    /*  Inicialización con = 
        int contadorBicis = 2;
        int contadorCamiones = 7;
        int contadorVehiculos = contadorBicis + contadorCamiones;
        int valorTruncado = 2.9; //Se pierde información, ya que va a truncar el valor. En este caso concreto es más seguro utilizar la inicialización con {}, ya que el compilador dará un error.

        std::cout << "Contador de bicis: " << contadorBicis << std::endl;
        std::cout << "Contador de camiones: " << contadorCamiones << std::endl;
        std::cout << "Contador de vehículos: " << contadorVehiculos << std::endl;
        std::cout << "Valor truncado: " << valorTruncado << std::endl;
    */

    /*  Comprobar el tamaño en memoria de un tipo de dato o variable
        std::cout << "Tamaño de un int en memoria: " << sizeof(int) << " bytes." <<std::endl;
        std::cout << "Tamaño del contador de vehículos en memoria: " << sizeof(contadorVehiculos) << " bytes." <<std::endl;
    */

    return 0;
}