#ifndef MOSTRARTAIPE_H_INCLUDED
#define MOSTRARTAIPE_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

void mostrardaniel (vector<usuario>&datos){
for (size_t i=0;i<datos.size();i++){
 cout << "SU NOMBRE ES: "<<datos[i].nombre<<endl;
 cout<< "SU CODIGO ES: "<<datos[i].codigo<<endl;
 cout<< "EL MES DEL PAGO ES: "<<datos[i].mes<<endl;
 cout<< "EL VALOR DEL PAGO ES: "<<datos[i].valor<<endl;
 cout<< "LA CUENTA DEL PAGO ES: "<<datos[i].cuenta<<endl;
}

}

#endif // MOSTRARTAIPE_H_INCLUDED
