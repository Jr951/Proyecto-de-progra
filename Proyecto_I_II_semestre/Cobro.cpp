#include "Cobro.h"

Cobro::Cobro() {}

Cobro::Cobro(int HoraEntrada, int MinutoEntrada, int HoraSalida, int MinutoSalida, double monto) {}

double Cobro::getMonto() {
    return monto;
}

void Cobro::setEntrada(int HoraEP,int MinutoEP) {
HoraE=HoraEP;
MinutoE=MinutoEP;
}

void Cobro::setSalida(int HoraSP,int MinutoSP) {
HoraS=HoraSP;
MinutoS=MinutoSP;
}

int Cobro::getEntrada() {
    return (HoraE*100)+MinutoE;
}

int Cobro::getSalida() {
    return (HoraS*100)+MinutoS;
}


