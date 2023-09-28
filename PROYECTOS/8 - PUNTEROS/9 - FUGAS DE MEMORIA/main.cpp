#include <iostream>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //FUGAS DE MEMORIA

    //----Caso 1 de fuga de memoria.------------------------------------------------
    //Reasignación de una dirección de memoria de Stack en un puntero activo,
    //que contiene una dirección de memoria dinámica (Heap).
    //------------------------------------------------------------------------------

    /*
        //Tenemos un puntero que apunta a una dirección dinámica (Heap), llamésmola direccion1.
        int *pNumero = new int(67); 

        //...
        //TRAS USAR EL PUNTERO, AQUÍ ES DONDE SE DEBERÍA LLAMAR A DELETE PARA ELIMINAR EL PUNTERO Y DESPUÉS REINCIARLO  
        //...

        //Tenemos una variable que se aloja en una dirección (Stack), llamémosla direccion2.
        int numero = 55; 

        //Ahora pNumero apunta a direccion2, sin embargo direccion1 sigue siendo usada por nuestro programa.
        //Pero nuestro programa ha perdido acceso a direccion1.
        //El sistema piensa que la memoria pertenece al programa, pero el programa no puede usarla.
        //Se ha producido una fuga de memoria, ya que no tenemos ninguna forma de acceder a direccion1.
        pNumero = &numero;
    */


    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------


    //----Caso 2 de fuga de memoria.------------------------------------------------
    //Asignación de dos direcciones de memoria dinámica en nuestro puntero activo.
    //------------------------------------------------------------------------------
    
    /*
        //Tenemos un puntero que apunta a una dirección dinámica, llamésmola direccion1.
        int *pNumero1 = new int (55);

        //...
        //TRAS USAR EL PUNTERO, AQUÍ ES DONDE SE DEBERÍA LLAMAR A DELETE PARA ELIMINAR EL PUNTERO Y DESPUÉS REINCIARLO  
        //...

        //Al reasignar nuestro puntero con una nueva dirección de memoria dinámica (llamésmola direccion2)
        //sin antes eliminar y reinciar el puntero, perdemos el acceso a dirección1.
        //Se ha producido una fuga de memoria, ya que no tenemos ninguna forma de acceder a direccion1.
        pNumero1 = new int (48);

        //Eliminar y reiniciar el puntero ahora solo liberaría la memoria de direccion2, direccion1 está perdida.
        //delete pNumero1;
        //pNumero1 = nullptr;
    */

    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------


    //----Caso 3 de fuga de memoria.------------------------------------------------
    //Declaración y asignación de memoria dinámica de un puntero en un ámbito local.
    //------------------------------------------------------------------------------

    /*
        //Memoria asignada dinámicamente en un ámbito anidado
        {
            //Declarar un puntero y asignarle memoria dinámica en un ámbito local,
            //supone que fuera de ese ámbito dicha memoria no podrá ser usada.
            //Fuera del ámbito local donde se ha definido el puntero, este
            //no podrá ser accesible por lo que se producirá una fuga de memoria.
            int *pNumero2 = new int(13);

            //...
            //TRAS USAR EL PUNTERO, AQUÍ ES DONDE SE DEBERÍA LLAMAR A DELETE PARA ELIMINAR EL PUNTERO Y DESPUÉS REINCIARLO  
            //...
        }

        //pNumero2 aquí no esta definido y por lo tanto se pierde al acceso a la memoria asignada dinámicamente.
    */

    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------
    //------------------------------------------------------------------------------

    std::cout << "El programa ha terminado." << std::endl;

    return 0;
}