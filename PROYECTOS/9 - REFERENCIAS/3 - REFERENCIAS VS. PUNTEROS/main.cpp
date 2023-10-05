#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //DECLARACIÓN DE PUNTERO Y REFERENCIA
    double valorDouble = 45.32; //Variable valorDouble
    //double &refValorDouble; //ERROR -> La referencia debe declararse e incializarse a la par (Línea 62) 
    double &refValorDouble = valorDouble; //Referencia a valorDouble
    double *pValorDouble = &valorDouble; //Puntero a valorDouble

    //LECTURA
    std::cout << "LECTURA" << std::endl;

    std::cout << "valorDouble: " << valorDouble << std::endl; 
    std::cout << "refValorDouble: " << refValorDouble << std::endl; 
    std::cout << "pValorDouble: " << pValorDouble << std::endl; 
    std::cout << "*pValorDouble: " << *pValorDouble << std::endl;


    std::cout << "=======================" << std::endl;
    std::cout << "=======================" << std::endl;


    //ESCRITURA MEDIANTE PUNTERO
    std::cout << "ESCRITURA MEDIANTE PUNTERO" << std::endl;
    
    *pValorDouble = 15.44;

    std::cout << "valorDouble: " << valorDouble << std::endl; 
    std::cout << "refValorDouble: " << refValorDouble << std::endl; 
    std::cout << "pValorDouble: " << pValorDouble << std::endl; 
    std::cout << "*pValorDouble: " << *pValorDouble << std::endl;
    

    std::cout << "=======================" << std::endl;
    std::cout << "=======================" << std::endl;


    //ESCRITURA MEDIANTE REFERENCIA
    std::cout << "ESCRITURA MEDIANTE REFERENCIA" << std::endl;
    
    refValorDouble = 18.44;

    std::cout << "valorDouble: " << valorDouble << std::endl; 
    std::cout << "refValorDouble: " << refValorDouble << std::endl; 
    std::cout << "pValorDouble: " << pValorDouble << std::endl; 
    std::cout << "*pValorDouble: " << *pValorDouble << std::endl;
    

    std::cout << "=======================" << std::endl;
    std::cout << "=======================" << std::endl;


    //INTENTAR QUE UNA REFERENCIA REFERENCIE A OTRA VARIABLE
    std::cout << "INTENTAR QUE UNA REFERENCIA REFERENCIE A OTRA VARIABLE" << std::endl;
    
    double otroValorDouble = 45.89;
    refValorDouble = otroValorDouble;

    /*
        La referencia sigue referenciando a la misma variable,
        lo único que hace la línea de arriba es asignarle el valor de otra variable,
        pero no hace que referencie a la variable indicada, que en este caso sería otroValorDouble.
        
        La única forma de cambiar la referencia es mediante la asignación
        y es por ello por lo que la declaración y la asignación de las referencias,
        se deben hacer a la vez
    */

    std::cout << "valorDouble: " << valorDouble << std::endl; 
    std::cout << "refValorDouble: " << refValorDouble << std::endl; 
    std::cout << "pValorDouble: " << pValorDouble << std::endl; //Misma dirección de memoria, a la referencia solo se le ha asignado un valor nuevo, no una variable nueva a la que referenciar
    std::cout << "*pValorDouble: " << *pValorDouble << std::endl;
    

    std::cout << "=======================" << std::endl;
    std::cout << "=======================" << std::endl;
    

    //INTENTAR QUE UN PUNTERO APUNTE A OTRA VARIABLE
    std::cout << "INTENTAR QUE UN PUNTERO APUNTE A OTRA VARIABLE" << std::endl;
    
    pValorDouble = &otroValorDouble;

    std::cout << "valorDouble: " << valorDouble << std::endl; 
    std::cout << "refValorDouble: " << refValorDouble << std::endl;
    std::cout << "&valorDouble: " << &valorDouble << std::endl;
    std::cout << "&refValorDouble: " << &refValorDouble << std::endl;
    std::cout << "pValorDouble: " << pValorDouble << std::endl;
    std::cout << "*pValorDouble: " << *pValorDouble << std::endl;

    std::cout << "-------------------" << std::endl;
    std::cout << "Reasignación del valor de la variable apuntada por el puntero:" << std::endl;
    *pValorDouble = 55.55; 
    //Este valor es el que tendrá la variable otroValorDouble cuya dirección de memoria ha sido reasignada a nuestro puntero.
    std::cout << "-------------------" << std::endl;
    
    std::cout << "valorDouble: " << valorDouble << std::endl; 
    std::cout << "refValorDouble: " << refValorDouble << std::endl;
    std::cout << "&valorDouble: " << &valorDouble << std::endl;
    std::cout << "&refValorDouble: " << &refValorDouble << std::endl;
    std::cout << "pValorDouble: " << pValorDouble << std::endl; //Este puntero apunta a la dirección de memoria de otroValorDouble
    std::cout << "*pValorDouble: " << *pValorDouble << std::endl;
    std::cout << "otroValorDouble: " << otroValorDouble << std::endl;
    std::cout << "&otroValorDouble: " << &otroValorDouble << std::endl;

    std::cout << "=======================" << std::endl;
    std::cout << "=======================" << std::endl;

    return 0;
}