#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //REFERENCIAS COLGANTES (DANGLING POINTERS)

    //CASOS DE ERROR
    //Caso 1: Puntero no inicializado
    std::cout << "Caso 1: Puntero no inicializado: " << std::endl;

    int *pNumero1;
    
    std::cout << "pNumero1: " << pNumero1 << std::endl;
    //std::cout << "*pNumero1: " << *pNumero1 << std::endl; //CRASH


    std::cout << "--------------------------" << std::endl;


    //Caso 2: Puntero eliminado
    std::cout << "Caso 2: Puntero eliminado: " << std::endl;

    int *pNumero2 = new int (67);

    std::cout << "*pNumero2 (antes de eliminarlo): " << *pNumero2 << std::endl;

    delete pNumero2;

    //std::cout << "*pNumero2 (tras eliminarlo): " << *pNumero2 << std::endl; //CRASH o RESULTADO INESPERADO


    std::cout << "--------------------------" << std::endl;


    //Caso 3: Múltiples punteros apuntando a la misma dirección
    std::cout << "Caso 3: Múltiples punteros apuntando a la misma dirección: " << std::endl;

    int *pNumero3 = new int (84);
    int *pNumero4 = pNumero3;

    std::cout << "pNumero3 - " << pNumero3 << " - " << *pNumero3 << std::endl;
    std::cout << "pNumero4 - " << pNumero4 << " - " << *pNumero4 << std::endl;

    delete pNumero3; //Elimino pNumero3

    //pNumero4 apunta a memoria ya liberada.
    //std::cout << "pNumero4 (tras eliminar pNumero3) - " << pNumero4 << " - " << *pNumero4 << std::endl; //CRASH o RESULTADO INESPERADO



    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================



    //SOLUCIONES
    //Solución 1: Inicializar los punteros tras la declaración de los mismos
    std::cout << "Solución 1: Inicializar los punteros tras la declaración de los mismos: " << std::endl;

    int *pNumero5 = nullptr;
    int *pNumero6 = new int (23);

    if (pNumero6 != nullptr) //Comprobar si el puntero está inicializado a nullptr antes de trabajar con él
    {
        std::cout << "*pNumero6: " << *pNumero6 << std::endl;
    }
    else
    {
        std::cout << "Dirección de memoria inválida" << std::endl;
    }
    

    std::cout << "--------------------------" << std::endl;


    //Solución 2: Reiniciar un puntero a nullptr tras usar delete
    std::cout << "Solución 2: Reiniciar un puntero a nullptr tras usar delete: " << std::endl;

    int *pNumero7 = new int (14);

    std::cout << "pNumero7 - " << pNumero7 << " - " << *pNumero7 << std::endl; //Uso el puntero

    delete pNumero7; //Elimino el puntero
    pNumero7 = nullptr; //Reinicio el puntero a nullptr

    if (pNumero7 != nullptr) //Comprobar si el puntero está inicializado a nullptr antes de trabajar con él
    {
        std::cout << "*pNumero7: " << *pNumero7 << std::endl;
    }
    else
    {
        std::cout << "Dirección de memoria inválida" << std::endl;
    }
    

    std::cout << "--------------------------" << std::endl;


    //Solución 3: Elegir un puntero y hacerlo el master que controle la memoria.
    //El resto de punteros serán slaves por lo que no podrán liberar la memoria, pero si leerla y trabajar con ella.
    std::cout << "Solución 3: Elegir un puntero y hacerlo el master que controle la memoria: " << std::endl;

    int *pNumero8 = new int (546); //Supongamos que *pNumero8 es el master y el resto son slaves
    int *pNumero9 = pNumero8;

    std::cout << "pNumero8 - " << pNumero8 << " - " << *pNumero8 << std::endl; //Uso los punteros

    if (pNumero8 != nullptr) //Solo uso punteros slave cuando el puntero master apunta a una dirección de memoria váida
    {
        std::cout << "pNumero9 - " << pNumero9 << " - " << *pNumero9 << std::endl;
    }
    
    delete pNumero8; //El master libera la memoria
    pNumero8 = nullptr; //Reinicio el master a nullptr

    if (pNumero8 != nullptr) //Solo uso punteros slave cuando el puntero master apunta a una dirección de memoria váida
    {
        std::cout << "pNumero9 - " << pNumero9 << " - " << *pNumero9 << std::endl;
    }
    else
    {
        std::cout << "Estás intentando usar un puntero inválido" << std::endl;
    }

    return 0;
}