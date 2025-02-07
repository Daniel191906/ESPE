#ifndef TI3PD_CONVERSION_H_INCLUDED
#define TI3PD_CONVERSION_H_INCLUDED
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void TI3TA_CONVERSION (dato [2][1][3]){
int suma;
float division;
suma = stoi(dato[0][0][0])+stoi(dato[0][0][1]);
cout<<"El resultado de la suma es: "<<suma<<endl;
division=(stof(dato[1][0][0])/stoi(dato[1][0][1]));
cout<<"El resultado de la division es: "<<division<<endl;
}

#endif // TI3PD_CONVERSION_H_INCLUDED
