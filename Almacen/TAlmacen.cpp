
 #include "TAlmacen.h"


TAlmacen::TAlmacen(int Cantidad) {

// Constructor de la clase
  FCantidadDeCajas = Cantidad;
  FCajas[0].Codigo = 1;
  FCajas[0].Largo = 3.0;
  FCajas[0].Ancho = 2.0;
  FCajas[0].Alto = 5.3;
  FCajas[1].Codigo = 2;
  FCajas[1].Largo = 2.0;
  FCajas[1].Ancho = 2.0;
  FCajas[1].Alto = 2.0;

}

int TAlmacen::GetCantidadDeCajas() {

// Devuelve la cantidad lógica de cajas con las que se opera

  return FCantidadDeCajas;

}

 

int TAlmacen::CodigoDeCajaMasAlta() {

// Devuelve el código de la caja de mayor altura en el almacén

  int i, Codigo;

  double MayorAltura;

 

// Inicializa la variable MayorAltura con el alto de la primera caja del

// almacén y guarda su código

  MayorAltura = FCajas[0].Alto;

  Codigo = FCajas[0].Codigo;

// Compara las alturas y actualiza el código

  for (i = 1; i < FCantidadDeCajas; i++)

    if (FCajas[i].Alto > MayorAltura) {

      MayorAltura = FCajas[i].Alto;

      Codigo = FCajas[i].Codigo;

    };

  return Codigo;

}

 

 