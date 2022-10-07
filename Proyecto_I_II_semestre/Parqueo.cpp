#include "Parqueo.h"

Parqueo::Parqueo() {

}

Parqueo::Parqueo(int tam) {
    vect=new Parqueo*[tam];
    for(int i=0;i<tam;i++){
        *(vect+i)= new Parqueo();
    }
}

Parqueo::~Parqueo() {
    for(int i=0;i<TAM;i++)
    {
        delete *(vect+i);
    }
}
