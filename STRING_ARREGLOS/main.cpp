#include <iostream>
#include <string>
#include <algorithm>
#include "C:\Users\G406\Desktop\STRING_ARREGLOS\TI3PD_DECLARAR.h"
#include "C:\Users\G406\Desktop\STRING_ARREGLOS\TI3PD_COMPARACION.h"
#include "C:\Users\G406\Desktop\STRING_ARREGLOS\TI3PD_CONCATENACION.h"
#include "C:\Users\G406\Desktop\STRING_ARREGLOS\TI3PD_BUSCAR.h"
#include "C:\Users\G406\Desktop\STRING_ARREGLOS\TI3PD_CONVERSION.h"
using namespace std;

int main()
{
    int opcion;
    string dato [2][1][3];
    do{
        cout<<"****MENU****"<<endl;
        cout<<"1.-DECLARACION"<<endl;
        cout<<"2.-CONVERSION"<<endl;
        cout<<"3.-COMPARACION"<<endl;
        cout<<"4.-CONCATENACION"<<endl;
        cout<<"5.-LONGITUD"<<endl;
        cout<<"6.-BUSCAR"<<endl;
        cout<<"7.-SUBCADENA"<<endl;
        cout<<"8.-SALIR"<<endl;
        cout<<"SELECCIONE UNA OPCION"<<endl;
        cin>>opcion;
        switch(opcion){
    case 1:
        TI3TA_CREAR(dato);
        TI3TA_MOSTRAR (dato);
        break;
    case 2:
        TI3TA_COMPARACION(dato);
        break;
    case 3:
        TI3TA_COMPARACION(dato);
        break;
    case 4:
        TI3TA_CONCATENACION(dato);
        break;
    case 5:
        TI3TA_LONGITUD(dato);
        break;
    case 6:
        TI3TA_BUSCAR(dato);
        break;
    case 7:
        TI3TA_SUBCADENA(dato);
        break;
    case 8:
        cout<<"SALIENDO..."<<endl;
        break;
    default:
       cout<<"Valor no valido"<<endl;
        break;
    }
    }
    while(opcion!=8);
    return 0;
}
