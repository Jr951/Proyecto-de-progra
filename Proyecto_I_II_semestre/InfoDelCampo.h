#pragma once
#include "Vehiculo.h"
#include<sstream>
#include<string>

class InfoDelCampo
{
private:
	int numero;
	char estado;
	Vehiculo** veh;
	int tam;
	int cant;


public:

	InfoDelCampo(int numeroP, char estadoP,Vehiculo** veh1);
	~InfoDelCampo();

	void setNumero(int numero);
	void setestado(char estado);
	void setTam(int tam);
	void setcant(int cant);
	void setNCampo(int* value);

	int getNumero();
	char getEstado();
	int getTam();
	int getCant();

	Vehiculo** getVehiculo();
	void setVehiculo(Vehiculo** veh);

	string toString();

};
