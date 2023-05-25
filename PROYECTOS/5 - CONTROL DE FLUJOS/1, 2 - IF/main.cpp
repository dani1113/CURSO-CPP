#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //El apartado 1 es solo la introducción a la programación condicional, así que lo incluyo aquí junto a la sentencia if
    
    
    //Variables
    int numero1 = 65;
    int numero2 = 60;
    bool resultado = numero1 < numero2;


    //if
    std::cout << "Usando if: " << std::endl;
    
    if (resultado == true) //if (resultado)
    {
        std::cout << "El número " << numero1 << " es menor que el numéro " << numero2 << std::endl;
    }
    
    if (!(resultado == true)) //if (!resultado) --> Es lo mismo que if (resultado == false)
    {
        std::cout << "El número "  <<  numero1 << " NO es menor que el número " << numero2 << std::endl;
    }


    std::cout << std::endl;


    //else
    std::cout << "Usando else: " << std::endl;

    if (resultado)
    {
        std::cout << "El número " << numero1 << " es menor que el numéro " << numero2 << std::endl;
    }
    else
    {
        std::cout << "El número "  <<  numero1 << " NO es menor que el número " << numero2 << std::endl;
    }


    std::cout << std::endl;
    

    //Usando la expresión como condición
    std::cout << "Usando la expresión como condición: " << std::endl;

    if (numero1 < numero2)
    {
        std::cout << "El número " << numero1 << " es menor que el numéro " << numero2 << std::endl;
    }
    else
    {
        std::cout << "El número "  <<  numero1 << " NO es menor que el número " << numero2 << std::endl;
    }


    std::cout << std::endl;


    //if anidados
    std::cout << "Usando if anidados: " << std::endl;

    bool luzRoja = false;
    bool luzVerde = true;
    bool luzAmarilla = false;
    bool paradaPolicia = true;

    if (luzRoja)
    {
        std::cout << "Parar" << std::endl;
    }

    if (luzAmarilla)
    {
        std::cout << "Bajar la velocidad" << std::endl;
    }
    
    if (luzVerde)
    {
        if (paradaPolicia)
        {
            std::cout << "El policía dice que pares" << std::endl;
        }
        else
        {
            std::cout << "Adelante" << std::endl;
        }
    }


    std::cout << std::endl;


    //if con operadores lógicos
    std::cout << "Usando if con operadores lógicos: " << std::endl;

    if (luzVerde && !paradaPolicia)
    {
        std::cout << "Adelante" << std::endl;
    }
    else
    {
        std::cout << "El policía dice que pares" << std::endl;
    }

    return 0;
}