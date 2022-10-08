#pragma once
#include <string>
#include <sstream>
using namespace std;

class Chofer
{
private:
	string cedula;
	string nombre;

public:

	Chofer(string cedula, string nombre);
	~Chofer();

	void setCedula(string cedula);
	void setNombre(string nombre);

	string getCedula();
	string getNombre();

	string toString();
};

