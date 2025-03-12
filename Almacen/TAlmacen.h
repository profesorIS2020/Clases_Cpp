

struct Caja {
  int Codigo;
  double Largo, Ancho, Alto;
};

typedef struct Caja CAJA;

class TAlmacen {

private:

  CAJA FCajas[100];

  int FCantidadDeCajas;

public:

  TAlmacen(int Cantidad);

  int GetCantidadDeCajas();

  void SetCantidadDeCajas(int Cantidad);

  int CodigoDeCajaMasAlta();

};