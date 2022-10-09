#include "Parqueo.h"
#include <sstream>
Parqueo::Parqueo() {

}

Parqueo::Parqueo(int tama) {
    cant = 0;
    tam = tama;
    for (int i = 0; i < tama; i++) {
        vect = new InfoDelCampo * [tama];
    }
}

Parqueo::~Parqueo() {
    for(int i=0;i<tam;i++)
    {
        delete *(vect+i);
    }
}

void Parqueo::Ingresarinfo(InfoDelCampo* ptr) {
    if (cant < tam) {
        vect[cant++] = ptr;
    }
}

string Parqueo::camposOcupados() {
    stringstream s;
    int conteo = 0;
    for (int a = 0; a < tam; a++) {

        if (vect[a]->getEstado() == 'O') {
            conteo++;
        }

    }
    s << "Cantidad de camas en mantenimiento:   " << conteo << endl;

    return s.str();
}

string Parqueo::camposMant() {
    stringstream s;
    int conteo = 0;
    for (int a = 0; a < tam; a++) {
        if (vect[a]->getEstado() == 'M') {
            conteo++;
        }

    }
    s << "Cantidad de camas en mantenimiento:   " << conteo << endl;

    return s.str();
}

string Parqueo::toString()
{
    stringstream s;
    s << "-----------------ESPACIOS DEL PARQUEO------------" << endl;
    for (int i = 0; i < cant; i++) {
        s << vect[i]->toStringInfoDelCampo() << endl;

    }
    return s.str();
}

