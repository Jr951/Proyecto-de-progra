#pragma once
class Cobro
{
private:
    int hora=0;
    int minuto=0;
    double monto=0;
public:
    Cobro();
    Cobro(int hora,int minuto,double monto);
    ~Cobro();

    void setHora(int Hora);
    void setMinutos(int Minutos);
    void setMonto(double Monto);

    int getHora();
    int getMinutos();
    double getMonto();




};

