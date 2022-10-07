#pragma once
class Vehiculo
{private:
	string marca;
	string placa;
	float tonelaje;
	string color;
	Chofer* chofer;
	Vehiculo* vehiculo;


public:
	Vehiculo(string marca = "", string placa = "", float tonelaje = 0, string color = "", Chofer* chofer = new Chofer(), Vehiculo* vehiculo = new Vehiculo());
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

	Vehiculo* getVehiculo() ;
	void setVehiculo(Vehiculo* vehiculo);
};

