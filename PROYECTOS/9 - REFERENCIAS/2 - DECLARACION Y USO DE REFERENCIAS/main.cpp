#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");
    
    //VARIABLES
    int datosInt = 33;
    double datosDouble = 55.12;

    //DECLARACIÓN DE REFERENCIAS
    int& referenciaDatosInt = datosInt;
    double& referenciaDatosDouble = datosDouble;
    //double& referenciaDatosDouble; //ERROR -> Las referencias tienen que ser declaradas e inicializadas en la misma sentencia


    //TRABAJANDO CON REFERENCIAS
    std::cout << "TRABAJANDO CON REFERENCIAS" << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::cout << "datosInt: " << datosInt << std::endl;
    std::cout << "&datosInt: " << &datosInt << std::endl;
    std::cout << "datosDouble: " << datosDouble << std::endl;
    std::cout << "&datosDouble: " << &datosDouble << std::endl;

    std::cout << "--------------------------" << std::endl;

    std::cout << "referenciaDatosInt: " << referenciaDatosInt << std::endl;
    std::cout << "&referenciaDatosInt: " << &referenciaDatosInt << std::endl;
    std::cout << "referenciaDatosDouble: " << referenciaDatosDouble << std::endl;
    std::cout << "&referenciaDatosDouble: " << &referenciaDatosDouble << std::endl;

    
    std::cout << "==========================" << std::endl;


    //MODIFICAR REFERENCIAS MEDIANTE VARIABLES
    std::cout << "MODIFICAR REFERENCIAS MEDIANTE VARIABLES" << std::endl;
    std::cout << "--------------------------" << std::endl;

    datosInt = 111;
    datosDouble = 84.21;

    std::cout << "datosInt: " << datosInt << std::endl;
    std::cout << "&datosInt: " << &datosInt << std::endl;
    std::cout << "datosDouble: " << datosDouble << std::endl;
    std::cout << "&datosDouble: " << &datosDouble << std::endl;

    std::cout << "--------------------------" << std::endl;

    std::cout << "referenciaDatosInt: " << referenciaDatosInt << std::endl;
    std::cout << "&referenciaDatosInt: " << &referenciaDatosInt << std::endl;
    std::cout << "referenciaDatosDouble: " << referenciaDatosDouble << std::endl;
    std::cout << "&referenciaDatosDouble: " << &referenciaDatosDouble << std::endl;

    std::cout << "==========================" << std::endl;


    //MODIFICAR VARIABLES MEDIANTE REFERENCIAS
    std::cout << "MODIFICAR VARIABLES MEDIANTE REFERENCIAS" << std::endl;
    std::cout << "--------------------------" << std::endl;

    referenciaDatosInt = 15;
    referenciaDatosDouble = 47.89;

    std::cout << "datosInt: " << datosInt << std::endl;
    std::cout << "&datosInt: " << &datosInt << std::endl;
    std::cout << "datosDouble: " << datosDouble << std::endl;
    std::cout << "&datosDouble: " << &datosDouble << std::endl;

    std::cout << "--------------------------" << std::endl;

    std::cout << "referenciaDatosInt: " << referenciaDatosInt << std::endl;
    std::cout << "&referenciaDatosInt: " << &referenciaDatosInt << std::endl;
    std::cout << "referenciaDatosDouble: " << referenciaDatosDouble << std::endl;
    std::cout << "&referenciaDatosDouble: " << &referenciaDatosDouble << std::endl;
    return 0;
}