#include "Cobro.h"

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








