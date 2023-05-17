#include <iostream>
#include <string> //NECESARIO PARA USAR STRING

//using namespace std; 
//SE CONSIDERA UNA MALA PRÁCTICA YA QUE AL HACER LLAMADAS DE DIFERENTES LIBRERÍAS PUEDE DARSE EL CASO DE QUE AMBAS TENGAN 
//UNA FUNCIÓN CON EL MISMO NOMBRE Y PUEDE DAR LUGAR A ERRORES E INCOMPATIBILIDADES

int main(){
    setlocale(LC_ALL, ".UTF8");

    /*  Imprimir datos

        std::cout << "¡Hola C++23!" << std::endl; //Orden de los datos: Programa --> std::cout --> Terminal

        int edad = 21;
        std::cout << "Edad: " << edad << std::endl;

        std::cerr << "Mensaje de error: Algo ha ido mal." << std::endl;
        std::clog << "Mensaje de registro: Algo ha ocurrido." << std::endl;
    
    */
    
    /*  Leer datos

        int edad1;
        std::string nombre;
        //string nombre; PARA EVITAR PONER EL std::string TODO EL RATO, DEBO INCLUIR using namespace std LÍNEA 5, 6 Y 7;

        std::cout << "Dime tu nombre y tu edad:" << std::endl;
        std::cin >> nombre; //Orden de los datos: Terminal --> std::cin --> Programa
        std::cin >> edad1;
        //std::cin >> nombre >> edad1; LO MISMO DE ARRIBA PERO EN UNA LÍNEA

        std::cout << "Tu nombre es: " << nombre << " y tu edad es: " << edad1 << std::endl;

    */

    /*  Leer datos con espacios

        int edad2;
        std::string nombreCompleto;

        std::cout << "Dime tu nombre completo" << std::endl;
        std::getline(std::cin, nombreCompleto); //Lee toda la línea para incluir los espacios y la almacena como un string en la variable
        std::cout << "Ahora dime tu edad" << std::endl;
        std::cin >> edad2;

        std::cout << "Tu nombre es: " << nombreCompleto << " y tu edad es: " << edad2 << std::endl;
        
    */

    return 0;
}