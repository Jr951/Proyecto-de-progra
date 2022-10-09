#pragma once

class Cobro
{
private:
    int hora, minuto;
    double monto = 0;

public:

    Cobro();
    Cobro(int hora, int minuto,double monto);

    void setHora(int);
    void setMinuto(int);

    int getHora();
    int getMinuto();

    void setMonto(double MontoF);
    double getMonto();
};
