#pragma once
#include "InfoDelCampo.h"
class Parqueo
{
public:
    Parqueo();
    Parqueo(int tam);
    ~Parqueo();
    void Ingresarinfo(InfoDelCampo*);
    void mantenimiento(int pos);
    string camposOcupados();
    string camposMant();
  
    string toString();
private:
    InfoDelCampo** vect;
    int cant;
    int tam;


};

