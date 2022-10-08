#include "Chofer.h"
using namespace std;

Chofer::Chofer(string cedulaP, string nombreP) :cedula(cedulaP),  nombre (nombreP) {}
Chofer::~Chofer() {}

void Chofer::setCedula(string cedulaP) { cedula = cedulaP; }
void Chofer::setNombre(string nombreP) { nombre = nombreP; }

string Chofer::getCedula() { return cedula; }
string Chofer::getNombre() { return nombre; }

