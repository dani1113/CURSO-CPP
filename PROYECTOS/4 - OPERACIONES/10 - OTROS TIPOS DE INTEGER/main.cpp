#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    short int var1 = 10;
    short int var2 = 10;
    char var3 = 40;
    char var4 = 50;

    std::cout << "sizeof var1: " << sizeof(var1) << " bytes" << std::endl; //2 bytes
    std::cout << "sizeof var2: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "sizeof var3: " << sizeof(var3) << " bytes" << std::endl; //1 byte
    std::cout << "sizeof var4: " << sizeof(var4) << " bytes" << std::endl;

    auto resultado1 = var1 + var2; //Se hace una conversión implicita a int para poder llevar a cabo la operación
    auto resultado2 = var3 + var4; //Se hace una conversión implicita a int para poder llevar a cabo la operación
    auto resultado3 = var1 + var3; //Se hace una conversión implicita a int para poder llevar a cabo la operación

    std::cout << "sizeof resultado1: " << sizeof(resultado1) << " bytes" << std::endl; //4 bytes
    std::cout << "sizeof resultado2: " << sizeof(resultado2) << " bytes" << std::endl; //4 bytes
    std::cout << "sizeof resultado3: " << sizeof(resultado3) << " bytes" << std::endl; //4 bytes

    return 0;
}