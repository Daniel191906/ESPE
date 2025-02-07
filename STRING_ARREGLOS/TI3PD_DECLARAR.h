#ifndef TI3PD_DECLARAR_H_INCLUDED
#define TI3PD_DECLARAR_H_INCLUDED
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void TI3TA_CREAR (string dato [2][1][3]){
for(int i=0;i<2;i++){
    for (int j=0;j<1;j++){
        for (int k=0;k<3;k++){
            cout<<"INGRESE EL DATO ["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<endl;
            cin>>dato [i][j][k];
    }
}
}
}
void TI3TA_MOSTRAR (string dato [2][1][3]){
for(int i=0;i<2;i++){
    for (int j=0;j<1;j++){
        for (int k=0;k<3;k++)
            cout<<dato [i][j][k]<<"  ";
    }
    cout<<endl;
}
cout<<endl;
}




#endif // TI3PD_DECLARAR_H_INCLUDED
