#ifndef CREARTAIPE_H_INCLUDED
#define CREARTAIPE_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

struct usuario {
string nombre;
string codigo;
string mes[12]{"Enero","Febreo","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
float valor;
int cuenta;
};

void creardaniel (vector<usuario> &datos){

for (int i=0;i<3;i++){
    usuario u1;

    cout << "INGRESE EL NOMBRE"<<"["<<i<<"]"<<endl;
    cin >>u1.nombre;
    cout << "INGRESE EL CODIGO"<<"["<<i<<"]"<<endl;
    cin>>u1.codigo;
    cout << "INGRESE EL MES DEL PAGO"<<"["<<i<<"]"<<endl;

    for (int j=0;j<12;j++){
    cout << "INGRESE EL PAGO DEL MES"<<"["<<mes[j]<<"]"<<endl;
    cin>>u1.mes[j];}

    cout << "INGRESE LA CUENTA DEL PAGO"<<"["<<i<<"]"<<endl;
    cin>>u1.cuenta;
    datos.push_back(u1);
 }
}

#endif // CREARTAIPE_H_INCLUDED
