#pragma once
#include <string>
#include "Chofer.h"
using namespace std;
class Vehiculo
{private:
	string marca;
	string placa;
	float tonelaje;
	string color;
	Chofer* chofer;
	


public:
	Vehiculo(string marca , string placa , float tonelaje , string color , Chofer* chofer );
	~Vehiculo();

	void setMarca(string marca);
	void setPlaca(string placa);
	void setTonelaje(float tonelaje);
	void setColor(string color);

	string getMarca();
	string getPlaca();
	float getTonelaje();
	string getColor();
	
    Chofer* getChofer() ;
    void setChofer(Chofer* chofer);

	
};

