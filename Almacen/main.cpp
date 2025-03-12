
/** Haga un programa en c++ denominado TAlmacen que incluya:
/*1. Una archivo TAlmacen.h que incluya la declaración de la clase
/*2. Un archivo TAlmacen.cpp que incluya los métodos asociados a dicha clase, los cuales son:
    a . Un constructor que recibe la cantidad de cajas con las que se va a trabajar y que inicializa la cantidad de cajas con el valor recibido y las características de las cajas con los siguientes valores:
        i. Código de la caja 1, largo 3.0, ancho 2.0, alto 5.3
        ii. Código de la caja 2, largo 2.0, ancho 2.0, alto 2.0
    b. Un método que devuelva la cantidad de cajas con las que se opera
    c. Un método que devuelva el código de la caja de mayor altura en el almacén   
/*3. Un entry point main.cpp que incluya la creación de un objeto de la clase TAlmacen y la impresión de la cantidad de cajas y el código de la caja más alta.

*/
#include <iostream> // Para usar cout
#include "TAlmacen.h" // Include the header file for the TAlmacen class

int main() {

    TAlmacen Almacen(3); // Create an instance of the TAlmacen class

    std::cout << "Cantidad de cajas: " << Almacen.GetCantidadDeCajas() << std::endl;

    std::cout << "Código de la caja más alta: " << Almacen.CodigoDeCajaMasAlta() << std::endl;

    return 0;

}