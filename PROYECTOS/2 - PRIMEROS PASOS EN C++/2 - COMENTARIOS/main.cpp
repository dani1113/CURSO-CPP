//Este es un comentario de línea

//Esta línea incluye la librería iostream
#include <iostream>

/*
    Esto es un comentario en bloque
    que engloba varias líneas
*/

int main(){
	setlocale(LC_ALL, ".UTF8"); //Localiza el lenguaje en UTF-8 para admitir más caracteres
	
    std::cout << "¡Hola mundo!" << std::endl; //Esta línea imprimirá por pantalla "¡Hola mundo!"


    /*
        std::cout << "Esta línea no se imprimirá por pantalla" << std::endl;
        std::cout << "Y esta tampoco";
    */

   //Los comentarios en bloque no se pueden anidar
   //Este programa está sobrecomentado a modo de prueba, un código sobrecomentado puede dar lugar a confusión

   return 0;
   //Fin de programa
}