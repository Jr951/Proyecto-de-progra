#include "Vehiculo.h"
#include <string>
using namespace std;

Vehiculo::Vehiculo(string marcaP, string placaP, float tonelajeP, string colorP, Chofer* choferP, Cobro* cobroP) {
	marca = marcaP;
	placa = placaP; 
	tonelaje = tonelajeP;  
	color = colorP; 
	choferptr = choferP;
	cobroptr = cobroP;
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

Chofer* Vehiculo::getChofer() { return choferptr; }
void Vehiculo::setChofer(Chofer* choferP) { choferptr = choferP; }

Cobro* Vehiculo::getCobro() { return cobroptr; }
void Vehiculo::setCobro(Cobro* cobroP) {cobroptr = cobroP; }




