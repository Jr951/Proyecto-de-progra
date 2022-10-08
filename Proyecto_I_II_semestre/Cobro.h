#pragma once
class Cobro
{
private:
    int HoraEntrada=0;
    int MinutoEntrada=0;

    int HoraSalida=0;
    int MinutoSalida;

    double monto=0;

public:

    Cobro();
    Cobro(int HoraEntrada,int MinutoEntrada,int HoraSalida,int MinutoSalida,double monto);

    void setEntrada();
    void setSalida();

    int getEntrada();
    int getSalida();

    double getMonto();
};

