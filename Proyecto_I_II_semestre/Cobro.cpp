#include "Cobro.h"

Cobro::Cobro() {}

Cobro::Cobro(int HoraEntrada, int MinutoEntrada, int HoraSalida, int MinutoSalida, double monto) {}

double Cobro::getMonto() {
    return monto;
}

void Cobro::setEntrada(int HoraEP,int MinutoEP) {
Cobro::HoraE=HoraEP;
Cobro::MinutoE=MinutoEP;
}

void Cobro::setSalida(int HoraSP,int MinutoSP) {
Cobro::HoraS=HoraSP;
Cobro::MinutoS=HoraS;
}
int Cobro::getHoraE(){
    int aux=HoraE;
    return aux;
}
int Cobro::getEntrada() {
    return (HoraE*100)+MinutoE;
}

int Cobro::getSalida() {
    return (HoraS*100)+MinutoS;
}

void Cobro::setMonto(double MontoF) {
    monto=MontoF;
}


