
#include "TPersona.h"

TPersona::TPersona(std::string NumeroIdentidad)
{
    std::string dia;
    std::string mes;
    std::string anyo;
    int sexo;
    dia = NumeroIdentidad.substr(5, 2);
    mes = NumeroIdentidad.substr(3, 2);
    anyo = NumeroIdentidad.substr(1, 2);
    FFechaNac.Dia = std::stoi(dia);
    FFechaNac.Mes = std::stoi(mes);
    FFechaNac.Anyo = std::stoi(anyo);
    sexo = std::stoi(NumeroIdentidad.substr(10, 1));
    if ((sexo % 2) == 0)
        FSexo = 'M';
    else
        FSexo = 'F';
}
TPersona::~TPersona(){}
Fecha TPersona::getFechaNac()
{
    return FFechaNac;
}
char TPersona::getSexo()
{
    return FSexo;
}
