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

    void setHoraEntrada(int HoraEntradaP);
    void setMinutoEntrada(int MinutoEntradaP);
    void setHoraSalida(int HoraSalidaP);
    void setMinutoSalida(int MinutoSalidaP);
    void setMonto(double MontoP);

    int getHoraEntrada();
    int getMinuoEntrada();
    int getHoraSalida();
    int getMinutoSalida();

    double getMonto();
};

