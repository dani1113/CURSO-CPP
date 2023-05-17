#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ".UTF8");

    //SIGNED Y UNSIGNED
    std::cout << "---------------------" << std::endl;
    std::cout << "SIGNED Y UNSIGNED" << std::endl;
    std::cout << "---------------------" << std::endl;
    
    //Con signed puedes almacenar tanto números positivos como negativos.
    //Con unsigned solo puedes almacenar números positivos.

    int valor1 = -10;
    signed int valor2 = 10;
    signed int valor3 = -10;
    
    unsigned int valor4 = 10;
    //unsigned int valor4 = -10; //Error de compilador

    std::cout << "Valor 1: " << valor1 << ", tamaño: " << sizeof (valor1) << " bytes." << std::endl;
    std::cout << "Valor 2: " << valor2 << ", tamaño: " << sizeof (valor2) << " bytes." << std::endl;
    std::cout << "Valor 3: " << valor3 << ", tamaño: " << sizeof (valor3) << " bytes." << std::endl;
    std::cout << "Valor 4: " << valor4 << ", tamaño: " << sizeof (valor4) << " bytes." << std::endl;

    std::cout << "" << std::endl;

    //SHORT Y LONG
    std::cout << "---------------------" << std::endl;
    std::cout << "SHORT Y LONG" << std::endl;
    std::cout << "---------------------" << std::endl;

    //Con short acortas el rango de valores que puedes almacenar en la variable. Ocupa 2 bytes en memoria.
    //Con long amplías el rango de valores que puedes almacenar en la variable. Ocupa 8 bytes en memoria.

    short short_var {-32768};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int{77};
    
    long long_var {88};
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int{44};

    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};
    
    std::cout << "Short variable: " << short_var<< ", tamaño: " << sizeof (short) << " bytes." << std::endl;
    std::cout << "Short int: " << short_int << ", tamaño: " << sizeof (short int) << " bytes." << std::endl;
    std::cout << "Signed short: " << signed_short << ", tamaño: " << sizeof (signed short) << " bytes." << std::endl;
    std::cout << "Signed short int: " << signed_short_int << ", tamaño: " << sizeof (signed short int) << " bytes." << std::endl;
    std::cout << "Unsigned short int: " << unsigned_short_int << ", tamaño: " << sizeof (unsigned short int) << " bytes." << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "Int variable: " << int_var <<", tamaño: " << sizeof (int) << " bytes." << std::endl;
    std::cout << "Signed variable: " << signed_var <<", tamaño: " << sizeof (signed) << " bytes." << std::endl;
    std::cout << "Signed int: " << signed_int <<", tamaño: " << sizeof (signed int) << " bytes." << std::endl;
    std::cout << "Unsigned int: " << unsigned_int <<", tamaño: " << sizeof (unsigned int) << " bytes." << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "Long variable: " << long_var << ", tamaño: " << sizeof (long) << " bytes." <<std::endl;
    std::cout << "Long int: " << long_int <<", tamaño: " << sizeof (long int) << " bytes." << std::endl;
    std::cout << "Signed long: " << signed_long <<", tamaño: " << sizeof (signed long) << " bytes." << std::endl;
    std::cout << "Signed long int: " << signed_long_int <<", tamaño: " << sizeof (signed long int) << " bytes." << std::endl;
    std::cout << "Unsigned long int: " << unsigned_long_int <<", tamaño: " << sizeof (unsigned long int) << " bytes." << std::endl; 
    std::cout << "---------------------" << std::endl;
    std::cout << "Long long: " << long_long <<", tamaño: " << sizeof (long long) << " bytes." << std::endl;
    std::cout << "Long long int: " << long_long_int <<", tamaño: " << sizeof (long long int) << " bytes." << std::endl;
    std::cout << "Signed long long: " << signed_long_long <<", tamaño: " << sizeof (signed long long) << " bytes." <<std::endl;
    std::cout << "Signed long long int: " << signed_long_long_int <<", tamaño: " << sizeof (signed long long int) << " bytes." << std::endl; 
    std::cout << "Unsigned long long int: " << unsigned_long_long_int <<", tamaño: " << sizeof (unsigned long long int) << " bytes." << std::endl;
    std::cout << "---------------------" << std::endl;

    return 0;
}