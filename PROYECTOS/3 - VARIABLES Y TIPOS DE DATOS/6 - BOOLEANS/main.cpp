#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
    bool luzRoja = true;
    bool luzVerde = false;

    //Ejemplos con booleans
    if (luzRoja == true){
        std::cout << "¡Para!" << std::endl;
    }else{
        std::cout << "Adelante" << std::endl;
    }

    if (luzVerde){ //OTRA FORMA DE SINTAXIS
        std::cout << "La luz está en verde" << std::endl;
    }else{
        std::cout << "La luz NO está en verde" << std::endl;
    }

    std::cout << std::endl;

    //sizeof()
    std::cout << "Un bool ocupa: " << sizeof(bool) << " bytes." << std::endl;

    std::cout << std::endl;

    //Muestro por pantalla
    std::cout << "Valores por defecto de los bool:" << std::endl;
    std::cout << luzRoja << std::endl;
    std::cout << luzVerde << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Valores reales de los bool:" << std::endl;
    std::cout << std::boolalpha; //Hace que std::cout muestre el valor real del bool
    std::cout << luzRoja << std::endl;
    std::cout << luzVerde << std::endl;

    return 0;
}