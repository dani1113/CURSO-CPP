#include <iostream>
#include <iomanip> //Necesario para poder específicar la precisión de std::cout, por defecto es de 6 dígitos.
#include <limits> //Ir a línea 73

int main(){
    setlocale(LC_ALL, ".UTF8");

	//NOTACIÓN DECIMAL
    //Variables.
    float numero1 = 1.12345678901234567890f; //Precisión: 7.
    double numero2 = 1.12345678901234567890; //Precisión: 15.
    long double numero3 = 1.12345678901234567890L; //Precisión: +15.

    //Tamaño en memoria.
    std::cout << "sizeof float: " << sizeof(float) << " bytes." << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << " bytes." << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << " bytes." << std::endl;

    //Especifíco la precisión y muestro por pantalla.
    std::cout << std::setprecision(20); //Especifíca la precisión de std::cout, requiere de <ionmanip>.
    std::cout << "Número 1 es: " << numero1 << std::endl; //7 dígitos.
    std::cout << "Número 2 es: : " << numero2 << std::endl; //~15 dígitos.
    std::cout << "Número 3 es: : " << numero3 << std::endl; //+15 dígitos

    std::cout << std::endl;

    //POSIBLES ERRORES
    //Variables
    float numero4 = 123456789.4f; //Va a representar bien solo los primeros 7 dígitos ya que la precisión de los float es de 7.
    double numero5 = 123456789.4f; //Al seguir manteniendo la f al final del numero, este se guarda en memoria como un float a pesar de haber especificado que es un double. 
    double numero6 = 123456789.4; //Se va a representar correctamente, ya que la precisión es 15 y son menos de 15 dígitos.
    
    //Muestro por pantalla
    std::cout << "Número 4 es: " << numero4 << std::endl;
    std::cout << "Número 5 es: " << numero5 << std::endl;
    std::cout << "Número 6 es: " << numero6 << std::endl;
    std::cout << "El número 6 se imprime correctamente pero muestra más dígitos porque antes he específicado que la precisión de std::cout sea 20 (Línea 18), por lo que el compilador añade más números de forma aleatoria." << std::endl;

    std::cout << std::endl;

    //NOTACIÓN CIENTÍFICA
    //Variables.
    double numero7 = 192400023;
    double numero8 = 1.92400023e8; //1.92400023 x 10^8
    double numero9 = 1.924e8; //Omite el 0023 del final para simplificar el número.
    double numero10 = 0.00000000003498;
    double numero11 = 3.498e-11; //3.498 x 10^(-11)

    //Muestro por pantalla.
    std::cout << "Número 7 es: " << numero7 << std::endl;
    std::cout << "Número 8 es: " << numero8 << std::endl;
    std::cout << "Número 9 es: " << numero9 << std::endl;
    std::cout << "Número 10 es: " << numero10 << std::endl;
    std::cout << "Número 11 es: " << numero11 << std::endl;

    std::cout << std::endl;

    //INFINITO y NaN (Not a Number)
    //Variables
    double numero12 = 5.6; //Funciona igual con un número negativo
    double numero13 = 0; //También puedo usar double numero13{}; para incializar al variable en 0.
    double numero14 = 0;

    //Infinito y NaN
    double resultado1 = numero12 / numero13; //Al dividir un número entre 0 obtengo infinito.
    double resultado2 = resultado1 + numero12; //Al sumar un número a infinito el resultado sigue siendo infinito.
    double resultado3 = numero13 / numero14; //Al dividir 0/0 obtienes NaN

    //Muestro por pantalla
    std::cout << numero12 << " / " << numero13 << " = " << resultado1 << std::endl; //El número 12 se muestra así porque antes he específicado que la precisión de std::cout sea 20 (Línea 18), por lo que el compilador añade más números de forma aleatoria. 
    std::cout << resultado1 << " + " << numero12 << " = " << resultado2 << std::endl;
    std::cout << numero13 << " / " << numero14 << " = " << resultado3 << std::endl;
    
    //CURIOSIDAD --> COMO ASIGNAR INFINITO A UNA VARIABLE
    double numeroInfinito = std::numeric_limits<double>::infinity(); //Requiere de #include <limits>
    std::cout << "El valor de numeroInfinito es: " << numeroInfinito <<std::endl;

    return 0;
}