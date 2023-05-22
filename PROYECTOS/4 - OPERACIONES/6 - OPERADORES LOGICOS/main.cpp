#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Variables
	std::cout << "Varaibles" << std::endl;
    bool a = true;
    bool b = false;
    bool c = true;
    int d = 45;
	int e = 20;
	int f = 11;
	
	std::cout << std::boolalpha;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	
    std::cout << std::endl;
	
    //AND: Evalúa a true cuando todos los operandos son true. Un solo operando false hará que toda la expresión se evalué a false.
	std::cout << "Operaciones basicas AND" << std::endl;
    std::cout << "a && b: " << (a && b) << std::endl; //false
    std::cout << "a && c: " << (a && c) << std::endl; //true
    std::cout << "a && b && c: " << (a && b && c) << std::endl; //false

	std::cout << std::endl;

	//OR: Evalúa a false cuando todos los operandos son false. Un solo operando true hará que toda la expresión se evalué a true.
	std::cout << "Operaciones básicas OR" << std::endl;
    std::cout << "a || b: " << (a || b) << std::endl; //true
    std::cout << "a || c: " << (a || c) << std::endl; //true
    std::cout << "a || b || c: " << (a || b || c) << std::endl; //true

	std::cout << std::endl;

	//NOT: Niega el valor de cualquier operando.
	std::cout << "Operaciones básicas NOT" << std::endl;	
	std::cout << "!a: " << !a << std::endl; //false
	std::cout << "!b: " << !b << std::endl; //true
	std::cout << "!c: " << !c << std::endl; //false

	std::cout << std::endl;

	//Combinación de operadores lógicos.
	std::cout << "Operaciones combinadas de operadores lógicos " << std::endl;
	std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl; //true

    std::cout << std::endl;

    //Combinación de operadores lógicos con operadores relacionales.
	std::cout << "Operaciones combinadas de operadores lógicos y operadores relacionales" << std::endl;	
	std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl; //true
	std::cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f )) << std::endl; //false
	std::cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << std::endl; //true
	std::cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << std::endl; //false
	std::cout << "(d > f) && (f <= d): " << ((d > f) && (f <= d)) << std::endl; //true
	std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl; //false
	std::cout << "(!a) && (d == e): " << ((!a) && (d == e)) << std::endl; //false

    return 0;
}