#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //REFERENCIA NO CONSTANTE
    std::cout << "REFERENCIA NO CONSTANTE: " << std::endl;

    int edad = 27;
    int &refEdad = edad;

    std::cout << "Edad: " << edad << std::endl;
    std::cout << "refEdad: " << refEdad << std::endl;
    
    //Modificar el valor original mediante la referencia
    std::cout << "Modificar el valor original mediante la referencia: " << std::endl;

    refEdad++;

    std::cout << "Edad: " << edad << std::endl;
    std::cout << "refEdad: " << refEdad << std::endl;


    std::cout << "===========================" << std::endl;


    //REFERENCIA CONSTANTE
    const int &refEdad2 = edad;
    //La variable edad puede ser o no ser constante, 
    //no importa, es la referencia la que en caso de ser constante no podrá modificar la variable original.
    
    //refEdad2++; //ERROR --> No puedes modificar la variable original si la referencia es constante


    //----------------------------------------------------------------


    //SIMULAR EL COMPORTAMIENTO DE LAS REFERENCIAS CON PUNTEROS
    const int * const pEdad = &edad; //Puntero constante que apunta a un entero constante
    //const int * pEdad = &edad; //Puntero no constante que apunta a un entero constante
    
    //IMPORTANTE: Más detalles en el PDF

    //*pEdad = 87; //ERROR --> No puedes modificar la variable original si el puntero es constante

    return 0;
}