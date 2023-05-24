#include <iostream>
#include <limits>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //INTEGERS
    std::cout << "El rango de un short es desde " << std::numeric_limits<short>::min() << " a " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "El rango de un unsigned short es desde " << std::numeric_limits<unsigned short>::min() << " a " << std::numeric_limits<unsigned short>::max() << std::endl;
    
    std::cout << "El rango de un int es desde " << std::numeric_limits<int>::min() << " a " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "El rango de un unsigned int es desde " << std::numeric_limits<unsigned int>::min() << " a " << std::numeric_limits<unsigned int>::max() << std::endl;


    //NÚMEROS DECIMALES
    std::cout << "El rango de un long es desde " << std::numeric_limits<long>::min() << " a " << std::numeric_limits<long>::max() << std::endl;
    
    std::cout << "El rango de un float es desde " << std::numeric_limits<float>::min() << " a " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "El rango (lowest) de un float es desde " << std::numeric_limits<float>::lowest() << " a " << std::numeric_limits<float>::max() << std::endl;
    
    std::cout << "El rango de un double es desde " << std::numeric_limits<double>::min() << " a " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "El rango (lowest) de un double es desde " << std::numeric_limits<double>::lowest() << " a " << std::numeric_limits<double>::max() << std::endl;
    
    std::cout << "El rango de un long double es desde " << std::numeric_limits<long double>::min() << " a " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "El rango (lowest) de un long double es desde " << std::numeric_limits<long double>::lowest() << " a " << std::numeric_limits<long double>::max() << std::endl;
    

    //OTRAS FACILIDADES DE <limits>
    //DOCUMENTACIÓN EN: https://es.cppreference.com/w/cpp/types/numeric_limits
    std::cout << std::boolalpha;
    std::cout << "El integer está signado: " << std::numeric_limits<int>::is_signed << std::endl; //Saber si un integer es signed o unsigned
    std::cout << "Dígitos del integer: " << std::numeric_limits<int>::digits << std::endl; //Saber el número de dígitos que podemos representar en un integer

    return 0;
}