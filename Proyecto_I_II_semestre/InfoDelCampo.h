#pragma once
class InfoDelCampo
{
  private:
	int numero;
	char estado;
	Vehiculo** veh;
	int tam;
	int cant;

public:
	void setNumero(int numero);
	void setestado(char estado);
	void setTam(int tam);
	void setcant(int cant);

	int getNmero();
	char getEstado();
	int getTam();
	int getCant();

	Vehiculo** getVehiculo();
	void setVehiculo(Vehiculo** veh);
};

