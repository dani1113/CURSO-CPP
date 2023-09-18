#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");
    
    //Lo que sabíamos sobre los punteros hasta ahora
    std::cout << "Repaso de punteros: " << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

	int numero = 22; //Almacenado en la sección Stack de la memoria 
	int *pNumero = &numero; //Asigno la dirección de la variable al puntero creado
	std::cout << "Declaro un puntero y le asigno una dirección: " << std::endl;
	std::cout << "Número (Variable): " << numero << std::endl;
	std::cout << "pNúmero (Puntero): " << pNumero << std::endl;
	std::cout << "&número (Dirección): " << &numero << std::endl;
	std::cout << "*pNumero (Puntero desreferenciado): " << *pNumero <<  std::endl;
	
    std::cout << "--------------------------------------------------" << std::endl;
	
    int numero1 = 12;
	int *pNumero1; //Puntero sin inicializar, contiene una dirección basura
	pNumero1 = &numero1; //Asigno al puntero una dirección válida
	std::cout << "Puntero inicializado tras su declaracíon: " << std::endl;
	std::cout << "*pNumero1 (Puntero desreferenciado): " << *pNumero1 << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;

    /*
	//Cosas que no hay que hacer con los punteros
    std::cout << "Cosas que no hay que hacer con los punteros:" << std::endl;

    //Escribir en un puntero no inicializado mediante desreferenciación
    std::cout << "Escribir en un puntero no inicializado mediante desreferenciación" << std::endl;

	int *pNumero2; //Puntero no inicializado, contiene basura
	*pNumero2 = 55; //CRASH --> Escribir en un puntero que tiene una dirección basura

	std::cout << "Leer de una dirección basura - pNumero2: " << pNumero2 << std::endl;
	std::cout << "Desreferenciando un puntero que tiene una mala dirección - *pNumero2: " << *pNumero2 << std::endl;
    
	//Usar un puntero que está inicializado como null
    std::cout << "Usar un puntero que está inicializado como null" << std::endl;
	int *pNumero3 = nullptr; //Inicializado con un puntero equivalente a 0 (nullptr), es un puntero que no apunta a nada
	
    *pNumero3 = 33; //CRASH --> Escribir en un puntero que no apunta a nada
	
	std::cout << "pNumero3: " << pNumero3 << std::endl;
	std::cout << "*pNumero3: " << *pNumero3 << std::endl; //CRASH --> Leer de un puntero que no apunta a nada
    */

    std::cout << "Fin del repaso de punteros" << std::endl;
    
    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================
    
    //Asignación Dinámica de Memoria (Dynamic Memory Allocation)
    std::cout << "Asignación Dinámica de Memoria (Dynamic Memory Allocation):" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

	int *pNumero4 = nullptr;
    pNumero4 = new int; //Asignar dinámicamente espacio para un único int en la sección Heap de la memoria.
    //A partir de ahora, esta memoria pertenece a nuestro programa. El sistema no puede usarla para nada más hasta que la devolvamos.
    //Tras la ejecución de esta sentencia, tendremos una posición de memoria válida alojada.
    //El tamaño de la memoria asignada será la adecuada para poder almacenar el tipo apuntado por el puntero (4 bytes al ser un int)
					
	*pNumero4 = 77; //Escritura en memoria asignada dinámicamente

	std::cout << "Asignación Dinámica de Memoria: " << std::endl;
	std::cout << "*pNumero4: " << *pNumero4 << std::endl;

    //Devuelvo la memoria al sistema operativo
    delete pNumero4; //Elimino la variable
    pNumero4 = nullptr; //Reinicio el puntero para que no apunte a una direccion que ya no existe. MUY IMPORTANTE

    std::cout << "--------------------------------------------------" << std::endl;

    //Inicializar punteros dinamicamente durante la declaracion de los mismos.
    std::cout << "Inicializar punteros dinamicamente durante la declaracion de los mismos." << std::endl;

    int *pNumero5 = new int; //Puntero no inicializado, contiene basura.
    int *pNumero6 = new int (22); //Inicialización directa.
    int *pNumero7 = new int {23}; //Inicialización uniforme.
    
    std::cout << "Inicializar con dirección de memoria válida en la declaración:" << std::endl;
    std::cout << "pNumero5: " << pNumero5 << std::endl;
    std::cout << "*pNumero5: " << *pNumero5 << std::endl; //Valor basura
    std::cout << "pNumero6: " << pNumero6 << std::endl;
    std::cout << "*pNumero6: " << *pNumero6 << std::endl;
    std::cout << "pNumero7: " << pNumero7 << std::endl;
    std::cout << "*pNumero7: " << *pNumero7 << std::endl;
    
    //Recordar liberar la memoria
    delete pNumero5; //Elimino la variable
    pNumero5 = nullptr; //Reinicio el puntero para que no apunte a una direccion que ya no existe. MUY IMPORTANTE
    
    delete pNumero6;
    pNumero6 = nullptr;
    
    delete pNumero7;
    pNumero7 = nullptr;

    std::cout << "--------------------------------------------------" << std::endl;

    //Se pueden reusar punteros si se les asigna un nuevo valor
    std::cout << "Se pueden reusar punteros si se les asigna un nuevo valor: " << std::endl;

    pNumero5 = new int(81);
    std::cout << "*pNumero5 : " << *pNumero5 << std::endl;

    delete pNumero5;
    pNumero5 = nullptr;

    std::cout << "--------------------------------------------------" << std::endl;

    //Llamar a delete 2 veces crashea el programa, NO HACER
    std::cout << "Llamar a delete 2 veces crashea el programa, NO HACER" << std::endl;
    
    pNumero5 = new int(99);
    std::cout << "*pNumero5 : " << *pNumero5 << std::endl;

    delete pNumero5;
    //delete pNumero5; //CRASH --> No puedes borrar algo que ya ha sido borrado previamente

    return 0;
}