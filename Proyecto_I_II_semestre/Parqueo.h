#pragma once
#include "InfoDelCampo.h"
class Parqueo
{
public:
    Parqueo();
    Parqueo(int tam);
    ~Parqueo();
    void Ingresarinfo(InfoDelCampo*);
    string camposOcupados();
    string camposMant();
    string toString();
private:
    InfoDelCampo** vect;
    int cant;
    int tam;


};

