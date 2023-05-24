#include <iostream> //Incluye ya de por sí <ios>, <streambuf>, <istream> y <ostream>
#include <iomanip>

int main(){
    setlocale(LC_ALL, ".UTF8");

    //DOCUMENTACIÓN EN: https://es.cppreference.com/w/cpp/io/manip

    //std::endl -> Requiere de <ostream>. Incluye un salto de línea al final. Es idéntico a añadir un \n en el flujo de salida.
    std::cout << "Línea 1";
    std::cout << "Línea 2";
    std::cout << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "Línea 1" << std::endl;
    std::cout << "Línea 2" << std::endl;
    std::cout << "-------------" << std::endl;
    std::cout << "Línea 1\n";
    std::cout << "Línea 2\n";
    

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


	//std::flush -> Requiere de <ostream>. Envía inmediatamente los datos que se encuentren en el buffer de salida al terminal.
    //Puede ser importante en ciertas aplicaciones. Por ejemplo cuando tienes que mostrar un proceso muy largo. El hecho de que se envíen los datos al terminal directamente puede ser útil.
    std::cout << "Mensaje que va directamente a la terminal debido al uso del manipulador std::flush..." << std::endl << std::flush;
   

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::setw() -> Requiere de <iomanip>. Especifica un ancho de caracteres para el texto que quieras imprimir. Sirve para crear "celdas", incluso aunque lo que quieras imprimir tenga menos caracteres que lo que especifícas.
    //Este manipulador solo afecta al siguiente valor por imprimir.
    std::cout << "Tabla sin formato: " << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    
    std::cout << std::endl;

    std::cout << "Tabla formateada: " << std::endl;
    std::cout << std::setw(10) << "Nombre" << std::setw(10) << "Apellido" << std::setw(5) << "Edad" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    
    std::cout << std::endl;
    

    int anchoColumna = 14;
    
    std::cout << "Tabla formateada con variables: " << std::endl;
    std::cout << std::setw(anchoColumna) << "Nombre" << std::setw(anchoColumna) << "Apellido" << std::setw(anchoColumna/2) << "Edad" << std::endl;
    std::cout << std::setw(anchoColumna) << "Daniel" << std::setw(anchoColumna) << "Gray" << std::setw(anchoColumna/2) << "25" << std::endl;
    std::cout << std::setw(anchoColumna) << "Stanley" << std::setw(anchoColumna) << "Woods" << std::setw(anchoColumna/2) << "33" << std::endl;
    std::cout << std::setw(anchoColumna) << "Jordan" << std::setw(anchoColumna) << "Parker" << std::setw(anchoColumna/2) << "45" << std::endl;
    std::cout << std::setw(anchoColumna) << "Joe" << std::setw(anchoColumna) << "Ball" << std::setw(anchoColumna/2) << "21" << std::endl;
    std::cout << std::setw(anchoColumna) << "Josh" << std::setw(anchoColumna) << "Carr" << std::setw(anchoColumna/2) <<"27" << std::endl;
    std::cout << std::setw(anchoColumna) << "Izaiah" << std::setw(anchoColumna) << "Robinson" << std::setw(anchoColumna/2) << "29" << std::endl;
    
    
    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //Justificar texto: Los valores pueden ser justificados en sus "celdas". Hay 3 manipuladores:
        //right -> Requiere de <ios>. Justifica el texto a la derecha.
        //left -> Requiere de <ios>. Justifica el texto a la izquierda.
        //internal -> Requiere de <ios>. Justifica el texto de forma 'interna'.
    //Por defecto -> right

    //Justificar a la derecha.
    anchoColumna = 20;

    std::cout << "Tabla justificada a la derecha (por defecto): " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(anchoColumna) << "Nombre" << std::setw(anchoColumna) << "Apellidos" << std::setw(anchoColumna/2) << "Edad" << std::endl;
    std::cout << std::setw(anchoColumna) << "Daniel" << std::setw(anchoColumna) << "Gray" << std::setw(anchoColumna/2) << "25" << std::endl;
    std::cout << std::setw(anchoColumna) << "Stanley" << std::setw(anchoColumna) << "Woods" << std::setw(anchoColumna/2) << "33" << std::endl;
    std::cout << std::setw(anchoColumna) << "Jordan" << std::setw(anchoColumna) << "Parker" << std::setw(anchoColumna/2) << "45" << std::endl;
    std::cout << std::setw(anchoColumna) << "Joe" << std::setw(anchoColumna) << "Ball" << std::setw(anchoColumna/2) << "21" << std::endl;
    std::cout << std::setw(anchoColumna) << "Josh" << std::setw(anchoColumna) << "Carr" << std::setw(anchoColumna/2) << "27" << std::endl;
    std::cout << std::setw(anchoColumna) << "Izaiah" << std::setw(anchoColumna) << "Robinson" << std::setw(anchoColumna/2) << "29" << std::endl;
    
    std::cout << std::endl;
    
    //Justificar a la izquierda.
    std::cout << "Tabla justificada a la izquierda: " << std::endl;
    std::cout << std::left;
    std::cout << std::setw(anchoColumna) << "Lastname" << std::setw(anchoColumna) << "Firstname" << std::setw(anchoColumna/2) << "Age" << std::endl;
    std::cout << std::setw(anchoColumna) << "Daniel" << std::setw(anchoColumna) << "Gray" << std::setw(anchoColumna/2) << "25" << std::endl;
    std::cout << std::setw(anchoColumna) << "Stanley" << std::setw(anchoColumna) << "Woods" << std::setw(anchoColumna/2) <<  "33" << std::endl;
    std::cout << std::setw(anchoColumna) << "Jordan" << std::setw(anchoColumna) << "Parker" << std::setw(anchoColumna/2) << "45" << std::endl;
    std::cout << std::setw(anchoColumna) << "Joe" << std::setw(anchoColumna) << "Ball" << std::setw(anchoColumna/2) << "21" << std::endl;
    std::cout << std::setw(anchoColumna) << "Josh" << std::setw(anchoColumna) << "Carr" << std::setw(anchoColumna/2) <<"27" << std::endl;
    std::cout << std::setw(anchoColumna) << "Izaiah" << std::setw(anchoColumna) << "Robinson" << std::setw(anchoColumna/2) << "29" << std::endl;
    
    std::cout << std::endl;
    
    //Justificar de forma "interna": El signo se justifica a la izquierda y los datos se justifican a la derecha.
    std::cout << "Tabla justificada de forma 'interna': " << std::endl;
    std::cout << std::right; //Reinicio la justificación a la derecha.
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::setfill() -> Requiere de <iomanip>. Rellena los espacios con el caracter indicado.
    //Por defecto -> ' '
    std::cout << "Tabla con caracteres de relleno:  " << std::endl;
    std::cout << std::left;
    std::cout << std::setfill('-'); //El caracter de relleno.
    std::cout << std::setw(anchoColumna) << "Nombre" << std::setw(anchoColumna) << "Apellido" << std::setw(anchoColumna/2) << "Edad" << std::endl;
    std::cout << std::setw(anchoColumna) << "Daniel" << std::setw(anchoColumna) << "Gray" << std::setw(anchoColumna/2) << "25" << std::endl;
    std::cout << std::setw(anchoColumna) << "Stanley" << std::setw(anchoColumna)  << "Woods" << std::setw(anchoColumna/2) <<  "33" << std::endl;
    std::cout << std::setw(anchoColumna) << "Jordan" << std::setw(anchoColumna)  << "Parker" << std::setw(anchoColumna/2) << "45" << std::endl;
    std::cout << std::setw(anchoColumna) << "Joe" << std::setw(anchoColumna) << "Ball" << std::setw(anchoColumna/2) << "21" << std::endl;
    std::cout << std::setw(anchoColumna) << "Josh" << std::setw(anchoColumna) << "Carr" << std::setw(anchoColumna/2) <<"27" << std::endl;
    std::cout << std::setw(anchoColumna) << "Izaiah" << std::setw(anchoColumna) << "Robinson" << std::setw(anchoColumna/2) << "29" << std::endl;
    

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::boolalpha y std::noboolapha -> Requieren de <ios>. Controlan el formato de salida de los bool: true/false y 1/0 respectivamente.
    //Por defecto -> std::noboolalpha
    bool condicionA = true;
    bool condicionB = false;
    
    std::cout << "Condición A (por defecto): " << condicionA << std::endl;
    std::cout << "Condición B (por defecto): " << condicionB << std::endl;
    
    std::cout << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Condición A (boolalpha): " << condicionA << std::endl;
    std::cout << "Condición B (boolalpha): " << condicionB << std::endl;
    
    std::cout << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "Condición A (noboolalpha): " << condicionA << std::endl;
    std::cout << "Condición B (noboolalpha): " << condicionB << std::endl;
    

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::showpos y std::noshowpos -> Requieren de <ios>. Muestran u ocultan el signo + en número positivos respectivamente.
    //Por defecto -> std::noshowpos
    int nPositivo = 34;
    int nNegativo = -45;
    
    std::cout << "Número positivo (por defecto): " << nPositivo << std::endl;
    std::cout << "Número negativo (por defecto): " << nNegativo << std::endl;
    
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "Número positivo (showpos): " << nPositivo << std::endl;
    std::cout << "Número negativo (showpos): " << nNegativo << std::endl; 

    std::cout << std::endl;

    std::cout << std::noshowpos;
    std::cout << "Número positivo (noshowpos): " << nPositivo << std::endl;
    std::cout << "Número negativo (noshowpos): " << nNegativo << std::endl;   


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    /*
        ========================================================================================================================================================
        IMPORTANTE
        A partir de ahora empiezo a trabajar con diferentes sistemas numéricos.
        Es importante acordarse en todo momento de el último sistema númerico usado.
        Ya que se almacena para el siguiente dato que emplees y el resultado puede que no sea el esperado.
        Ej: Si muestro 'x' en octal, el siguiente valor, 'y', también se mostrará en octal y no en decimal que es el sistema numérico que se emplea por defecto.
        Para evitar que esto suceda hay que especificar que quieres mostrar 'y' en decimal. El siguiente valor, 'z', se mostrará en decimal y así todo el rato.
        =========================================================================================================================================================
    */


    //Diferentes sistemas numéricos. Muestras los datos en la base especificada. Hay 3 manipuladores:
        //std::dec -> Requiere de <ios>. Base decimal. No tendrá efecto si se usa en números decimales.
        //std::hex -> Requiere de <ios>. Base hexadecimal. No tendrá efecto si se usa en números decimales.
        //std::oct -> Requiere de <ios>. Base octal. No tendrá efecto si se usa en números decimales.
    //Por defecto -> std::dec
    int intPositivo = 717171;
    int intNegativo = -47347;
    double variableDouble = 498.32;
    
    std::cout << "Números con la base por defecto: " << std::endl;
    std::cout << "int positivo: " << intPositivo << std::endl;
    std::cout << "int negativo: " << intNegativo << std::endl;
    std::cout << "double: " << variableDouble << std::endl;
    
    std::cout << std::endl;

    std::cout << "int positivo en diferentes bases: " << std::endl;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    
    std::cout << std::endl;

    std::cout << "int negativo en diferentes bases: " << std::endl;
    std::cout << "int negativo (base decimal): " << std::dec << intNegativo << std::endl;
    std::cout << "int negativo (base hexadecimal): " << std::hex << intNegativo << std::endl;
    std::cout << "int negativo (base octal): " << std::oct << intNegativo << std::endl;
    
    std::cout << std::endl;

    std::cout << "double en diferentes bases: " << std::endl;
    std::cout << "double (base decimal): " << std::dec << variableDouble << std::endl;
    std::cout << "double (base hexadecimal): " << std::hex << variableDouble << std::endl;
    std::cout << "double (base octal): " << std::oct << variableDouble << std::endl;
    
    std::cout << std::dec; //Reinicio a la base por defecto, la decimal.

    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::showbase y std::noshowbase -> Requieren de <ios>. Muestran u ocultan la base de delante de los números respectivamente.
    //Por defecto -> std::noshowbase
    std::cout << "Números mostrando la base por defecto: " << std::endl;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    std::cout << "int negativo (base decimal): "  << std::dec << intNegativo << std::endl;
    std::cout << "int negativo (base hexadecimal): " << std::hex << intNegativo << std::endl;
    std::cout << "int negativo (base octal): " << std::oct << intNegativo << std::endl;
    std::cout << "double (base decimal): " << std::dec << variableDouble << std::endl;
    std::cout << "double (base hexadecimal): " << std::hex << variableDouble << std::endl;
    std::cout << "double (base octal): " << std::oct << variableDouble << std::endl;
    
    std::cout << std::endl;

    std::cout << "Números mostrando la base (showbase): " << std::endl;
    std::cout << std::showbase;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    std::cout << "int negativo (base decimal): "  << std::dec << intNegativo << std::endl;
    std::cout << "int negativo (base hexadecimal): " << std::hex << intNegativo << std::endl;
    std::cout << "int negativo (base octal): " << std::oct << intNegativo << std::endl;
    std::cout << "double (base decimal): " << std::dec << variableDouble << std::endl;
    std::cout << "double (base hexadecimal): " << std::hex << variableDouble << std::endl;
    std::cout << "double (base octal): " << std::oct << variableDouble << std::endl;

    std::cout << std::endl;

    std::cout << "Números ocultando la base (noshowbase): " << std::endl;
    std::cout << std::noshowbase;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    std::cout << "int negativo (base decimal): "  << std::dec << intNegativo << std::endl;
    std::cout << "int negativo (base hexadecimal): " << std::hex << intNegativo << std::endl;
    std::cout << "int negativo (base octal): " << std::oct << intNegativo << std::endl;
    std::cout << "double (base decimal): " << std::dec << variableDouble << std::endl;
    std::cout << "double (base hexadecimal): " << std::hex << variableDouble << std::endl;
    std::cout << "double (base octal): " << std::oct << variableDouble << std::endl;

    std::cout << std::dec; //Reinicio a la base por defecto, la decimal.


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::uppercase y std::nouppercase -> Requieren de <ios>. Muestra los datos en mayúscula o no.
    //Por defecto -> std::nouppercase
    //Que no se muestren mayúsculas no significa que todo se muestre en minúscula, puede haber tanto minúsculas como mayúsculas.
    std::cout << "Número con letras por defecto: " << std::endl;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    
    std::cout << std::endl;

    std::cout << "Número con letras mayúsculas (uppercase): " << std::endl;
    std::cout << std::uppercase;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    
    std::cout << std::endl;

    std::cout << "Número sin letras mayúsculas (nouppercase): " << std::endl;
    std::cout << std::nouppercase;
    std::cout << "int positivo (base decimal): " << std::dec << intPositivo << std::endl;
    std::cout << "int positivo (base hexadecimal): " << std::hex << intPositivo << std::endl;
    std::cout << "int positivo (base octal): " << std::oct << intPositivo << std::endl;
    
    std::cout << std::dec; //Reinicio a la base por defecto, la decimal.


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::fixed y std::scientific -> Requieren de <ios>. Muestra los datos en notación científica o notación fija respectivamente.
    //Por defecto -> std::fixed y en caso de que el valor lo requiera std::scientific
    double a = 3.1415926535897932384626433832795;
    double b = 2006.0;
    double c = 1.34e-10;
    
    std::cout << "Números con notación por defecto, fija y científica si es necesario: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    
    std::cout << std::endl;

    std::cout << "Números con notación fija (fixed): " << std::endl;
    std::cout << std::fixed;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl; //El nnúmero no se muestra completo debido a la precisión. Más detalles más abajo
    
    std::cout << std::endl;

    std::cout << "Números con notación científica (scientific): " << std::endl;
    std::cout << std::scientific;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    //IMPORTANTE: Truco para reestablecer la notación por defecto a los números (fija y científica si es necesario).
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    
    
    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::setprecision() -> Requiere de <iomanip>. Especifíca la precisión con la que los datos se muestran.
    //Por defecto -> Precisión de 6
    //La precisión es el número de caracteres que tiene un número.
    double d = 3.1415926535897932384626433832795;
    
    std::cout << "Número con precisión por defecto (6): " << d <<  std::endl;
    
    std::cout << std::endl;

    std::cout << std::setprecision(10);
    std::cout << "Número con precisión de 10: " << d << std::endl;

    std::cout << std::endl;

    //IMPORTANTE: Si la precisión es mayor que la soportada por el tipo de dato, se imprimirá basura. Más detalles de esto en 3 - VARIABLES Y TIPOS DE DATOS.
    std::cout << std::setprecision(20);
    std::cout << "Número con precision de 20: " << d << std::endl; 
    
    std::cout << std::setprecision(6); //Reestablezco el valor por defecto de la posición.


    //==================================================================================
    std::cout << std::endl;
    std::cout << "=======================================================" << std::endl;
    std::cout << std::endl;
    //==================================================================================


    //std::showpoint y std::noshowpoint -> Requieren de <ios>. Fuerza la muestra de decimales o la oculta con respecto a la precisión que es 6 por defecto.
    //Muestra los 0 finales si es necesario.
    //Por defecto -> std::noshowpoint
    double e = 34.1;
    double f = 101.99;
    double g = 12.0;
    int h = 45;
    
    std::cout << "Números con la muestra de decimales por defecto: " << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;
    
    std::cout << std::endl;

    std::cout << "Números con la muestra de decimales forzada (showpoint): " << std::endl;
    std::cout << std::showpoint;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;

    std::cout << std::endl;

    std::cout << "Números ocultando la muestra de decimales (noshowpoint): " << std::endl;
    std::cout << std::noshowpoint;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << "g: " << g << std::endl;
    std::cout << "h: " << h << std::endl;

    return 0;
}