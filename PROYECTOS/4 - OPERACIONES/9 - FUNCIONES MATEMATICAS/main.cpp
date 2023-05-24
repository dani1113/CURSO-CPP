#include <iostream>
#include <cmath>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
    double x = 56.6;
    double y = -5623.45;
    double z = 4.4;
    std::cout << "Variables: " << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    
    //std::floor() -> Redondea hacia abajo.
    std::cout << "x redondeado hacia abajo es: " << std::floor(x) << std::endl;
    
    //std::ceil() -> Redondea hacia arriba.
    std::cout << "x redondeado hacia arriba es: " << std::ceil(x) << std::endl;

    //std::round() -> Redondea en base al decimal. Si el decimal es 0.5 redondea hacia arriba.
    std::cout << "x redondeado en base al decimal es: " << std::round(x) << std::endl;
    std::cout << "y redondeado en base al decimal es: " << std::round(y) << std::endl;
    std::cout << "z redondeado en base al decimal es: " << std::round(z) << std::endl;


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::abs() -> Obtiene el valor absoulto.
    std::cout << "El valor absoluto de x es: " << std::abs(x) << std::endl;
    std::cout << "El valor absoluto de y es: " << std::abs(y) << std::endl;


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::exp() -> Calcula el exponencial. Es decir f(x) = e^x donde e = 2.71828...
    std::cout << "El exponencial de x es :" << std::exp(x) << std::endl;


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::pow() -> Calcula la potencia.
    std::cout << "x elevado a 2 es: " << std::pow(x, 2) << std::endl; //7.839...


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::log() -> Calcula el logaritmo. Es la operación inversa de la potencia. Calcular el logaritmo consiste en calcular el exponente al que deberíamos elevar la base para obtener la potencia
    std::cout << "El logaritmo de 7.839 en base e es: " << std::log(7.839) << std::endl; //2

    //std::log10 -> Calcula el logaritmo en base 10
    std::cout << "El logaritmo de 10000 en base 10 es: " << std::log10(10000) << std::endl; //4


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::sqrt() -> Calcula la raíz cuadrada.
    std::cout << "La raíz cuadrada de 81 es: " << std::sqrt(81) << std::endl;
    
    return 0;
}