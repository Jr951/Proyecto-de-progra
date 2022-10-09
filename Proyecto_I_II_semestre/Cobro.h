#pragma once
class Cobro
{
private:
    static int HoraE, MinutoE,HoraS,MinutoS;
    double monto=0;

public:

    Cobro();
    Cobro(int HoraE,int MinutoE,int HoraSalida,int MinutoSalida,double monto);

    void setEntrada(int HoraE,int MinutoE);
    void setSalida(int HoraS, int MinutoS);

    int getEntrada();
    int getSalida();
    static int getHoraE();

    void setMonto(double MontoF);

    double getMonto();
};

