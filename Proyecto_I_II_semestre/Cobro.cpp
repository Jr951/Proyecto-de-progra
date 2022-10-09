#include "Cobro.h"
#include <sstream>
Cobro::Cobro() {}

Cobro::Cobro(int Hora, int Minuto ,double monto) {}


void Cobro::setMinuto(int minutop)
{
    minuto = minutop;
}

void Cobro::setHora(int horap)
{
    hora = horap;
}

int Cobro:: getHora() { return hora;}
int Cobro:: getMinuto() { return minuto; }

void Cobro::setMonto(double MontoF) {
    monto = MontoF;
}

double Cobro::getMonto()
{
    return monto;
}

string Cobro::toString()
{
    stringstream s;
    s << "\n Hora : " << hora << ":" << minuto << "\n";
    s << "\nMonto: " << monto;
    return s.str();
}








