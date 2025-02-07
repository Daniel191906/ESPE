#ifndef TI3PD_CONCATENACION_H_INCLUDED
#define TI3PD_CONCATENACION_H_INCLUDED
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
    string frasetotal;
    string frase="FUNDAMENTOS DE PROGRAMACION";

void TI3TA_CONCATENACION (string dato [2][1][3]){
    frasetotal=dato[0][0][0]+" "+dato[0][0][1]+" "+frase;
    cout<<frase<<endl;
}


void TI3TA_SUBCADENA(string dato [2][1][3]){
string subcadena;
subcadena=frasetotal.substr(5,5);
cout<<"La subcadena es: "<<subcadena<<endl;}


void TI3TA_LONGITUD(string dato [2][1][3]){
int LONGITUD;
LONGITUD=frasetotal.length();
cout<<"La longitud de la frase es: "<<LONGITUD<<endl;}


#endif // TI3PD_CONCATENACION_H_INCLUDED
