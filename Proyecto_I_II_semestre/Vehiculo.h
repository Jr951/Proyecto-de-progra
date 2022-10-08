#pragma once
#include <string>
#include "Chofer.h"
#include "Cobro.h"
using namespace std;
class Vehiculo
{private:
	string marca;
	string placa;
	float tonelaje;
	string color;
	Chofer* choferptr = NULL;
	Cobro* cobroptr = NULL;
	


public:
	Vehiculo(string marca , string placa , float tonelaje , string color , Chofer* choferptr, Cobro* cobroptr );
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

	Cobro* getCobro();
	void setCobro(Cobro* cobroptr);

	
};

