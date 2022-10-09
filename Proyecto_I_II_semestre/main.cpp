#include"Parqueo.h"
#include <iostream>
using namespace std;

int main(){
    int espacio = 0;
    int opcion = 0;
    InfoDelCampo* p = nullptr;
    //hola
    cout << " Digite la cantidad de espacios para el parqueo " << endl;
    cin >> espacio;
    Parqueo* c = new Parqueo(espacio);
    
    cout << "Digite la cantidad de espacios en mantenimiento:";
    espacio = 0;
    cin >> espacio;
    
    system("cls");
    if (espacio >= 1) {
        int aux = 0;
        for (int i = 0; i <= espacio; i = i + 1)
        {
            cout << "Ingrese la posicion del espacio ocupado: " << endl;
            cin >> aux;

            c->setMantenimiento(aux);
            cout << "1" << endl;
            system("cls");
        }
    }
    
    do {
        system("cls");
        cout << endl << endl;
        cout << "                             Control de Parqueo   " << endl;

        cout << "    ============================================================" << endl;
        cout << "    1.  Ver todos los campos de Parqueo" << endl;
        cout << "    2.  Ver campos ocupados" << endl;
        cout << "    3.  Ver campos en mantenimiento" << endl;
        cout << "    4.  Ingresar un vehiculo al parqueo" << endl;
        cout << "    5.  Cancelar la estancia en el lugar. Realizar el debido cobro del alquiler" << endl;
        cout << "    6.  Ver solo los campos que estan libres" << endl;
        cout << "    7.  Saber la cantidad de vehiculos que existen en el parqueo" << endl;
        cout << "    8.  Saber la cantidad de campos libres en el parqueo" << endl;
        cout << "    9.  Saber la cantidad de campos ocupados en el parqueo" << endl;
        cout << "    10.Saber la cantidad de campos en mantenimiento en el parqueo" << endl;
        cout << "    11. Saber la cantidad de vehiculos que han ingresado en el dia" << endl;
        cout << "    12. Saber la cantidad de dinero que ha ingresado al parqueo este dia" << endl;
        cout << "    13. Saber la cantidad de dinero que ha ingresado, por un solo campo" << endl;
        cout << "    14. Saber le tonelaje de los veh�culos que hacen mas uso del parqueo" << endl;
        cout << "    15. Saber el porcentaje de ocupacion que tiene el parqueo" << endl;
        cout << "    16. - Mostrar la informacion de los vehiculos que han estado en un determinado campo" << endl;
        cout << "    17. - Mostar la informacio n de todos los vehiculos del parqueo" << endl;
        cout << "    18. Mostrar los vehiculos que se encuentran en el rango de tonelaje de 1.0 a 1.5 " << endl;
        cout << "    19. salir" << endl;
        cout << "    ============================================================" << endl;
        cout << " Digite una opcion" << endl;
        cin >> opcion;

        switch (opcion) {
            system("pause");
        case 1:
            cout << " Mostrando los campos del parqueo" << endl;
            cout << c->toString() << endl;
            break; system("cls");

        case 2:
            cout << "Espacios Ocupados: " << endl;
            cout << c->camposOcupados() << endl;
            break; system("cls");
        
          case 3:
              cout << "Espacios que estan en Mantenimiento: " << endl;
              cout << c->camposMant() << endl;
              break; system("cls");
        }
    /*case 4:
            int cantCamas;
            cout << "Habitaciones disponibles segun la cantidad de camas: " << endl;
            cout << "Ingresa la cantidad de camas requeridas" << endl;
            cin >> cantCamas;
            cout << c->cuantHabiXCantCamas(cantCamas) << endl;
            break; system("cls");
        case 5:
            cout << "Realizando la ocupacion de la habitacion: " << endl;
            cout << "Digite el Nombre del Cliente" << endl;
            cin >> nombre;
            cout << "Digite el numero de Identidicacion del Cliente:" << endl;
            cin >> cedula;
            cout << "Seleccione el tipo de pago (Efectivo o Tarjeta):" << endl;
            cin >> tipo;
            cout << "Digite su numero de telefono:" << endl;
            cin >> numTel;
            cout << "Digite el numero de cuenta:" << endl;
            cin >> numCuenta;
            cout << "Digite el numero de adultos:" << endl;
            cin >> numAdultos;
            cout << "Digite el numero de ninos:" << endl;
            cin >> numNinos;
            cout << "Digite el numero de dias a disfrutar:" << endl;
            cin >> numDiasDisfrutar;
            cout << "Digite el tipo de estancia (1 para todo incluido y 0 sin todo incluido)  :" << endl;
            cin >> tipoEstancia;
            cout << "Digite el codigo de la habitacion que desea:";
            cin >> idHabitacion;
            objetoCliente = new Cliente(nombre, cedula, tipo, numTel, numCuenta);
            objetoInformacion = new Informacion(numAdultos, numNinos, numDiasDisfrutar, tipoEstancia);
            cout << c->ingresarCliente(objetoInformacion, objetoCliente, idHabitacion);
            cin.get();
            break; system("cls");
        case 6:
            cout << "Pagando la habitacion con el numero de cedula: " << endl;
            cout << "Favor ingresar el numero de cedula o ID" << endl;
            cin >> cedula;
            cout << "Digite la horas del dia en formato militar, es decir si quiere decir la 1 de la tarde digitar un 13" << endl;
            cin >> hora;
            cout << "Digite los minutos de la hora" << endl;
            cin >> minutos;

            objetoCliente->setHora(hora);
            objetoCliente->setMinutos(minutos);
            objetoCliente->setMeridiano(meridiano);
            cout << c->pagarHabiNumCedula(hora, cedula) << endl;
            break; system("cls");
        case 7:
            cout << "Liberando la habitacion: " << endl;
            cout << "Digite su numero de cedula" << endl;
            cout << c->liberarNumeroCedula(cedula) << endl;
            break; system("cls");
        case 8:
            cout << "Mostrando la cantidad de adultos en el hotel: " << endl;
            cout << objetoInformacion->getNumAdultos() << endl;
            break; system("cls");
        case 9:
            cout << "Mostrando la cantidad de ni�os en el hotel: " << endl;
            cout << objetoInformacion->getNumNinnos() << endl;
            break; system("cls");
        case 10:
            do {
                system("cls");
                cout << endl << endl;
                cout << "    Saber cuanto dinero recaud� hoy el hotel" << endl;
                cout << "    ============================================================" << endl;
                cout << "    1.  Con los clientes, �TODO INCLUIDO�" << endl;
                cout << "    2.  Con los clientes, �Sin TODO INCLUIDO� " << endl;
                cout << "    3.  Con todos los clientes que hay en el hotel " << endl;
                cout << "    4. salir" << endl;
                cout << "    ============================================================" << endl;
                cout << "    Seleccione la opcion: ";
                cin >> elige;
                switch (elige) {
                case 1:
                    cout << " Mostrando cantidad de dinero recaudado con los clientes TODO INCLUIDO " << endl;
                    cout << c->getCantDineClienTodoIncluid() << endl;
                    break; system("cls");
                case 2:
                    cout << " Mostrando cantidad de dinero recaudado con los clientes SIN TODO INCLUIDO " << endl;
                    cout << c->getCantDineClienSinTodoIncluido() << endl;
                    break; system("cls");

                case 3:
                    cout << "Mostrando todo el dinero recaudado por el hotel: " << endl;
                    cout << c->getCantDineClienTodo();
                    break; system("cls");
                }
                system("pause");

                if (elige <= 0 || elige > 4 || !cin >> elige) {
                    cin.ignore();
                    cin.clear();
                    cout << "Dato invalido" << endl;
                    cout << "Enter para continuar" << endl;
                    cin.get();
                    cin.get();
                    elige = 0;

                }

            } while (elige <= 3 && elige >= 0);

            system("pause");
            break;

            if (opcion <= 0 || opcion > 11 || !cin >> opcion) {
                cin.ignore();
                cin.clear();
                cout << "Dato invalido" << endl;
                cout << "Enter para continuar" << endl;
                cin.get();
                cin.get();
                opcion = 0;

            }
        }
        */
        system("pause");

    } while (opcion <= 19 && opcion >= 0);

	return 0;
}