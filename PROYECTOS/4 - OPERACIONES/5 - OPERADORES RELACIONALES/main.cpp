#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    int x = 45;
    int y = 60;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    std::cout << std::endl;

    std::cout << std::boolalpha; //Hace que los bool se muestren como true/false en vez de 1/0, ya que los operadores relaciones actúan como bools.
    std::cout << "Comparando variables" << std::endl;
    //Los parentésis en la comparación son necesarios debido a la precedencia en C++, ya que el compilador intenta evaluar el operador "<<" antes que el operador "<" de la propia comparación y esto da lugar a un error de compilación, pues el operador "<<" no pretende comparar nada, es simplemente parte de la sintaxis de std::cout
    std::cout << "x < y: " << (x < y) << std::endl; //Menor que
    std::cout << "x > y: " << (x > y) << std::endl; //Mayor que
    std::cout << "x <= y: " << (x <= y) << std::endl; //Menor o igual que
    std::cout << "x >= y: " << (x >= y) << std::endl; //Mayor o igual que
    std::cout << "x == y: " << (x == y) << std::endl; //Igual que
    std::cout << "x != y: " << (x != y) << std::endl; //Distinto que

    std::cout << std::endl;

    std::cout << "Almaceno una comparación en un bool y la uso más tarde" << std::endl;
    bool resultado = x > y; //Como en la precedencia de C++, el operador ">" tiene preferencia sobre el operador "=" no es necesario usar parentésis
    std::cout << x << " == " << y << ": " << resultado << std::endl;

    return 0;
}