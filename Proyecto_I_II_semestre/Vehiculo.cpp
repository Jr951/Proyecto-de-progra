#include "Vehiculo.h"
#include "Chofer.cpp"
#include <string>
using namespace std;

Vehiculo::Vehiculo(string marcaP, string placaP, float tonelajeP, string colorP, Chofer* choferP) {
	marca = marcaP;
	placa = placaP; 
	tonelaje = tonelajeP;  
	color = colorP; 
	chofer = choferP;
}
Vehiculo::~Vehiculo() {}

void Vehiculo::setMarca(string marcaP) { marca = marcaP; }
void Vehiculo::setPlaca(string placaP) { placa = placaP; }
void Vehiculo::setTonelaje(float tonelajeP) { tonelaje = tonelajeP; }
void Vehiculo::setColor(string colorP) { color = colorP; }

string Vehiculo::getMarca() { return marca; }
string Vehiculo::getPlaca() { return placa; }
float Vehiculo::getTonelaje() {return tonelaje ; }
string Vehiculo::getColor() { return color; }

Chofer* Vehiculo::getChofer() { return chofer; }
void Vehiculo::setChofer(Chofer* choferP) { chofer = choferP; }




