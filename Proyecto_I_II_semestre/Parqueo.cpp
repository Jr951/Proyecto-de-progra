#include "Parqueo.h"

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

string Parqueo::toString()
{
    stringstream s;
    s << "-----------------ESPACIOS DEL PARQUEO------------" << endl;
    for (int i = 0; i < cant; i++) {
        s << vect[i]->toStringInfoDelCampo() << endl;

    }
    return s.str();
}

