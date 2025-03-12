
/**
 * Realice un programa en C++ que permita la creación de una clase llamada TPersona que permita almacenar la información de una persona. La clase debe tener los siguientes atributos:
 *  - Fecha de nacimiento (Dia, Mes, Año)
 * - Sexo (Hombre, Mujer)
 * - Cédula (Cadena de 13 caracteres)
 * La clase debe contener un archivo de cabecera llamado TPersona.h y un archivo de implementación llamado TPersona.cpp. Además, debe contener un archivo main.cpp que permita probar la clase TPersona.
*En este último archivo se debe crear un objeto de la clase TPersona y se debe imprimir la fecha de nacimiento y el sexo de la persona.
*/
#include <iostream>
#include "TPersona.h"

int main()
{
    TPersona Persona("0901112901234");
    std::cout << "Fecha de nacimiento: " << Persona.getFechaNac().Dia << "/" << Persona.getFechaNac().Mes << "/" << Persona.getFechaNac().Anyo << "\n";
    std::cout << "Sexo: " << Persona.getSexo() << "\n";
    std::cout << "Estructuras en c++!\n";
    
    return 0;
}