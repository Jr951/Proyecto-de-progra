#include "InfoDelCampo.h"

InfoDelCampo::InfoDelCampo(int numeroP, char estadoP, Vehiculo** veh1){
	numero = numeroP;
	estado = estadoP;
	veh = veh1;
}
InfoDelCampo::~InfoDelCampo(){}

void InfoDelCampo::setNumero(int numeroP) { numero = numeroP; }
void InfoDelCampo::setestado(char estadoP) { estado = estadoP; }
void InfoDelCampo::setTam(int tamm) { tam = tamm; }
void InfoDelCampo::setcant(int canti) { cant = canti; }


int InfoDelCampo::getNumero() { return numero; }
char InfoDelCampo::getEstado() { return estado; }
int InfoDelCampo::getTam() { return tam; }
int InfoDelCampo::getCant() { return cant; }

string InfoDelCampo::toString() {
	stringstream s;
	s << "Numero: " << numero << endl;
	s << "Estado: " << estado << endl;
	s << "Vehiculo " << veh << endl;
	return s.str();
}