#include <iostream>

using namespace std;


void INGRESAR (string &nombre, string &apellido, float &n1, float &n2, float &n3);
float calcular(float n1, float n2, float n3, float nf);
void MOSTRAR (string nombre, string apellido, float nf);


int main()

{

string nombre, apellido;
float n1,n2,n3,nf;

INGRESAR(nombre,apellido,n1,n2,n3);
calcular(n1,n2,n3,nf);
MOSTRAR(nombre,apellido,nf);


void INGRESAR (string &nombre, string &apellido, float &n1, float &n2, float &n3);


cout << "INGRESAR NOMBRE"<<endl;
getline(cin, nombre);
cout << "INGRESAR APELLIDO"<<endl;
getline(cin, apellido);
cout << "INGRESAR NOTA 1"<<endl;
cin >> n1;
cout << "INGRESAR NOTA 2"<<endl;
cin >> n2;
cout << "INGRESAR NOTA 3"<<endl;
cin >> n3;


void MOSTRAR (string nombre, string apellido, float nf);

cout << "Nombre: "<<nombre<<endl;
cout << "Apellido: "<<apellido<<endl;
cout << "Promedio: "<<nf<<endl;
if(nf>=14){
    cout << "APROBADO"<<;
}
else cout << "REPROBADO"<<;





}

float calcular(float n1, float n2, float n3, float nf){


nf=(n1+n2+n3)/3
return nf;

}
