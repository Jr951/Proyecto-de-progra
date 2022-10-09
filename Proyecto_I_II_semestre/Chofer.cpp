#include "Chofer.h"
using namespace std;

Chofer::Chofer(string cedulaP, string nombreP) :cedula(cedulaP),  nombre (nombreP) {}
Chofer::~Chofer() {}

void Chofer::setCedula(string cedulaP) { cedula = cedulaP; }
void Chofer::setNombre(string nombreP) { nombre = nombreP; }

string Chofer::getCedula() { return cedula; }
string Chofer::getNombre() { return nombre; }

string Chofer::toString()
{
	stringstream s;
	s << "Datos del Chofer" << endl;
	s << "Cedula: " << cedula << endl;
	s << "Nombre: " << nombre << endl;

	return s.str();
}

