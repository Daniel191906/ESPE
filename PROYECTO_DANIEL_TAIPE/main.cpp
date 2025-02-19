#include <iostream>
#include <vector>
#include "C:\Users\G406\Desktop\PROYECTO_DANIEL_TAIPE\creartaipe.h"
#include  "C:\Users\G406\Desktop\PROYECTO_DANIEL_TAIPE\mostrartaipe.h"
using namespace std;

vector<usuario> datos;
string buscador;

int main()
{
int opcion;
do{
        cout<< "***MENU****"<<endl;
        cout << "1.- CREAR"<<endl;
        cout << "2.- LEER"<<endl;
        cout << "3.- CONSULTA ESPECIFICA"<<endl;
        cout << "4.- ACTUALIZAR PAGO"<<endl;
        cout << "5.- ELIMINAR PAGO"<<endl;
        cout << "6.- SALIR"<<endl;
        cout << "SELECCIONE UNA OPCION"<<endl;
        cin>>opcion;

        switch (opcion){
    case 1:
        creardaniel(datos);
        break;
    case 2:
        mostrardaniel(datos);
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        cout << "SALIENDO...."<<endl;
        break;

    default:
        cout << "VALOR NO VALIDO"<<endl;
        }
}while (opcion != 6);
    return 0;
}
