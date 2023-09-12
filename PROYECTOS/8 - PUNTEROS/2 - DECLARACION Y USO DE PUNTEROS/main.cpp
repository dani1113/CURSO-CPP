#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //Es recomendable incializar siempre los punteros tras declararlos
    //Declarar e inicializar un puntero implícitamente
    int * punteroNumeroInt {}; //{} incializa el puntero implícitamente igualandolo a 0, es decir nullptr (null pointer)
    double * punteroNumeroDecimal {}; //El puntero se incializa como null explícitamente
    //Declarar e inicializar un puntero explícitamente
    int * punteroNumeroInt1 {nullptr}; //{} incializa el puntero implícitamente igualandolo a 0, es decir nullptr (null pointer)
    double * punteroNumeroDecimal1 {nullptr}; //El puntero se incializa como null explícitamente

    //El tamaño de los punteros coincide con el tamaño de las variables, pero no con el de las direcciones almacenadas por el puntero.
    std::cout << "Tamaño de las variables y los punteros:" << std::endl;
    
    std::cout << "sizeof(int): " << sizeof(int) << std::endl; 
    std::cout << "sizeof(double): " << sizeof(double) << std::endl; 
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl; 
    std::cout << "sizeof(double*): " << sizeof(double*) << std::endl; 
    std::cout << "sizeof(punteroNumeroInt1): " << sizeof(punteroNumeroInt1) << std::endl; 
    std::cout << "sizeof(punteroNumeroDecimal1): " << sizeof(punteroNumeroDecimal1) << std::endl; 

    //No importa si el * se pone al lado del tipo de dato, de la variable o entre ambos
    int* punteroNumeroInt2 {nullptr};
    int * punteroNumeroInt3 {nullptr};
    int *punteroNumeroInt4 {nullptr};

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Es recomendable declarar cada puntero y en general cada variable en líneas distintas porque se pueden dar lugar a errores
    std::cout << "Más tamaños de variables y los punteros:" << std::endl;
    
    //En este caso solo punteroNumeroInt5 y punteroNumeroInt6 serán punteros, las otras 2 variables no, ya que son las únicas que tienen el *.
    int* punteroNumeroInt5 {nullptr}, otraVariableInt1;
    int* punteroNumeroInt6 {nullptr}, otraVariableInt2;
    
    std::cout << "sizeof(punteroNumeroInt5): " << sizeof(punteroNumeroInt5) << std::endl;
    std::cout << "sizeof(punteroNumeroInt6): " << sizeof(punteroNumeroInt6) << std::endl;
    std::cout << "sizeof(otraVariableInt1): " << sizeof(otraVariableInt1) << std::endl;
    std::cout << "sizeof(otraVariableInt2): " << sizeof(otraVariableInt2) << std::endl;

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Inicializar punteros y asignarles datos
    std::cout << "Inicializar punteros y asignarles datos: " << std::endl;

    int intVar1 = 45;
    int *punteroIntVar = &intVar1; //Se usa el operador & delante de la variable para indicar su dirección de memoria.

    std::cout << "int var 1 (el valor de la variable): " << intVar1 << std::endl;
    std::cout << "punteroIntVar 1 (la dirección de memoria de la variable): " << punteroIntVar << std::endl; //Como ya sabemos, los punteros almacenan direcciones de memoria.

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Modificar la dirección de memoria almacenada en un puntero existente
    std::cout << "Modificar la dirección de memoria almacenada en un puntero existente: " << std::endl;

    int intVar2 = 81;
    punteroIntVar = &intVar2;

    std::cout << "int var 2 (el valor de la variable): " << intVar2 << std::endl;
    std::cout << "punteroIntVar 1 (la nueva dirección de memoria asignada al puntero ya existente): " << punteroIntVar << std::endl;
    
    //==================================================================================

    //No se puede asignar la dirección de memoria de un tipo de dato que no corresponde con el del puntero.
    int *punteroNumeroInt7 = nullptr;
    double doubleVar = 33;
    //punteroIntVar = &doubleVar; //Error de compilación

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================

    //Desreferenciar un puntero: Poder leer el valor de la variable que haya contenido en la dirección de memoria
    std::cout << "Desreferenciar un puntero: " << std::endl;

    int *punteroInt8 = nullptr; //Los punteros también se pueden incializar con = , no solo con {}
    int datos = 23;
    punteroInt8 = &datos;
    
    std::cout << "Valor de la variable alojada en la dirección de memoria " << punteroInt8 << " almacenada en el puntero: " << *punteroInt8 << std::endl; //Incluyendo el * desreferencio el puntero

    return 0;
}