#include <iostream>
//#include <cctype> //En este caso <iostream> ya incluye la libreía <cctype>, por lo que no es necesario añadirla

int main(){
    setlocale(LC_ALL, ".UTF8");

    //COMPROBAR SI UN CARÁCTER ES ALFANUMÉRICO
    std::cout << "Comprobar si un carácter es alfanumérico: std::isalnum()" << std::endl;
    std::cout << "========================================================" << std::endl;

    std::cout << "C es alfanumérico: " << std::isalnum('C') << std::endl; //Sí -> Distinto de 0
    std::cout << "< es alfanumérico: " << std::isalnum('<') << std::endl; //No -> 0

    char caracter = '*';
    std::cout << "¿Es " << caracter << " un caracter alfanumérico?" << std::endl;

    if (std::isalnum(caracter)) //isalnum(), actúa como un bool en el if, ya que devuelve un valor distinto de 0 si el caracter es alfanumérico
    {
        std::cout << caracter << " es alfanumérico" << std::endl;
    }
    else
    {
        std::cout << caracter << " no es alfanumérico" << std::endl;
    }
    

    std::cout << "========================================================" << std::endl;


    //COMPROBAR SI UN CARÁCTER ES ALFABÉTICO
    std::cout << "Comprobar si un carácter es alfabético: std::isalpha()" << std::endl;
    std::cout << "========================================================" << std::endl;

    std::cout << "C es alfanumérico: " << std::isalpha('C') << std::endl; //Sí -> Distinto de 0
    std::cout << "ñ es alfanumérico: " << std::isalpha('ñ') << std::endl; //Si -> Distinto de 0
    std::cout << "< es alfanumérico: " << std::isalpha('<') << std::endl; //No -> 0
    std::cout << "4 es alfanumérico: " << std::isalpha('4') << std::endl; //No -> 0

    char caracter2 = 'j';
    std::cout << "¿Es " << caracter2 << " un caracter alfanumérico?" << std::endl;

    if (std::isalpha(caracter2)) //isalpha(), actúa como un bool en el if, ya que devuelve un valor distinto de 0 si el caracter es alfabético
    {
        std::cout << caracter2 << " es alfabético" << std::endl;
    }
    else
    {
        std::cout << caracter2 << " no es alfabético" << std::endl;
    }


    std::cout << "========================================================" << std::endl;


    //COMPROBAR SI UN CARÁCTER ES UN HUECO EN BLANCO, SI ES MAYÚSCULA, SI ES MINÚSCULA, O SI ES UN DÍGITO
    std::cout << "Comprobar si un carácter es un hueco en blanco, es una mayúscula, es una minúscula o es un dígito: std::isblank() | std::isupper() | std::islower | std::isdigit" << std::endl;
    std::cout << "========================================================" << std::endl;

    char mensaje[] = "Don Fernando Alonso Díaz de Vivar tiene 32 victorias y 2 mundiales en Fórmula 1, en la siguiente temporada 2024 se viene la 33.";
    std::cout << "Mensaje: " << mensaje << std::endl;
    
    //El contador debe de ser positivo, por lo que por seguridad no es mala idea añadir el unsigned
    unsigned int contadorHuecosEnBlanco = 0;
    unsigned int contadorMinusculas = 0;
    unsigned int contadorMayusculas = 0;
    unsigned int contadorDígitos = 0;

    for (size_t i = 0; i < std::size(mensaje); i++)
    {
        if (std::isblank(mensaje[i])) //isblank(), actúa como un bool en el if, ya que devuelve un valor distinto de 0 si el caracter es un hueco en blanco
        {
            //std::cout << "Hueco en blanco encontrado en el índice: [" << i << "] del mensaje." << std::endl;
            contadorHuecosEnBlanco++;
        }

        if (std::isupper(mensaje[i])) //isupper(), actúa como un bool en el if, ya que devuelve un valor distinto de 0 si el caracter es un hueco en blanco
        {
            //std::cout << "Mayúscula encontrada en el índice: [" << i << "] del mensaje." << std::endl;
            contadorMayusculas++;
        }

        if (std::islower(mensaje[i])) //islower(), actúa como un bool en el if, ya que devuelve un valor distinto de 0 si el caracter es un hueco en blanco
        {
            //std::cout << "Minúscula encontrada en el índice: [" << i << "] del mensaje." << std::endl;
            contadorMinusculas++;
        }

        if (std::isdigit(mensaje[i])) //isdigit(), actúa como un bool en el if, ya que devuelve un valor distinto de 0 si el caracter es un hueco en blanco
        {
            //std::cout << "Dígito encontrado en el índice: [" << i << "] del mensaje." << std::endl;
            contadorDígitos++;
        }
    }
    
    std::cout << "En el mensaje hay " << std::size(mensaje) << " caracteres, de los cuales:" << std::endl;
    std::cout << contadorHuecosEnBlanco << " caracteres son huecos en blanco." << std::endl;
    std::cout << contadorMayusculas << " caracteres están en mayúscula." << std::endl;
    std::cout << contadorMinusculas << " caracteres están en minúscula." << std::endl;
    std::cout << contadorDígitos << " caracteres son dígitos." << std::endl;
    
    
    std::cout << "========================================================" << std::endl;


    //TRANSFORMAR UN CARACTER EN MINÚSCULAS Y MAYÚSUCLAS
    std::cout << "Transformar un carácter en minúsculas y mayúsculas: std::tolower() | std::toupper()" << std::endl;
    std::cout << "========================================================" << std::endl;
        
    char mensajeEnMinuscula[std::size(mensaje)];
    char mensajeEnMayuscula[std::size(mensaje)];

    for (size_t i = 0; i < std::size(mensaje); i++)
    {
        mensajeEnMinuscula[i] = std::tolower(mensaje[i]);
        mensajeEnMayuscula[i] = std::toupper(mensaje[i]);
    }

    std::cout << "Mensaje: " << mensaje << std::endl;
    std::cout << "Mensaje en minúsculas: " << mensajeEnMinuscula << std::endl;
    std::cout << "Mensaje en mayúsculas: " << mensajeEnMayuscula << std::endl;
    
    return 0;
}