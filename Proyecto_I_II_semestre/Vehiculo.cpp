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

void Vehiculo::setCobro(Cobro* cobroP) {
    int aux;
    aux = cobroP->getHora();
    if(Vehiculo::getTonelaje()<1.0){
        cobroP->setMonto(aux*100);
    }else if(Vehiculo::getTonelaje()>=1.0&&Vehiculo::getTonelaje()<=1.5){
        cobroP->setMonto(aux*100+((aux*100)*0.05));
    }else if(Vehiculo::getTonelaje()>=1.6&&Vehiculo::getTonelaje()<=3.5){
        cobroP->setMonto(aux*100+((aux*100)*0.1));
    }else if(Vehiculo::getTonelaje()>=3.6&&Vehiculo::getTonelaje()<=5.0){
        cobroP->setMonto(aux*100+((aux*100)*0.15));
    }else{
        cobroP->setMonto(aux*100+((aux*100)*0.2));
    }
    cobroptr = cobroP; }

string Vehiculo::toString()
{
    stringstream s;
    s << "\nMarca: " << marca
        << "\nPlaca: " << placa
        << "\nTonelaje: " << tonelaje
        << "\nChofer: " << choferptr->toString()
        << "\nChofer: " << cobroptr->toString() << "\n\n";
    return s.str();
}




