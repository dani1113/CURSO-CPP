#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
    auto var1 = 12; //int
    auto var2 = 13.0; //double
    auto var3 = 14.0f; //float
    auto var4 = 123l; //long
    auto var5 = 15.0l; //long double 
    auto var6 = 'e'; //char
    auto var7 = 123u; //unsigned int
    auto var8 = 123ul; //unsigned long
    auto var9 = 123ll; //long long
    auto var10 = 123ull; //unsigned long long
    auto var11 = true; //bool
    auto var12 = 0x35B; //int en hexadecimal
    auto var13 = 3.498e-11; //double en notación científica
    //auto var14; //Error de compilador, no se puede deducir el tipo de dato.
    //auto var15 = -12u; //Error de compilador el modificador de int unsigned hace que el valor tenga que ser positivo.
    
    //Muestro por pantalla
    std::cout << "var1 ocupa: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 ocupa: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 ocupa: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 ocupa: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 ocupa: " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 ocupa: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 ocupa: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 ocupa: " << sizeof(var8) << " bytes" << std::endl;
    std::cout << "var9 ocupa: " << sizeof(var9) << " bytes" << std::endl;
    std::cout << "var10 ocupa: " << sizeof(var10) << " bytes" << std::endl;
    std::cout << "var11 ocupa: " << sizeof(var11) << " bytes" << std::endl;
    std::cout << "var12 ocupa: " << sizeof(var12) << " bytes" << std::endl;
    std::cout << "var13 ocupa: " << sizeof(var13) << " bytes" << std::endl;

    return 0;
}