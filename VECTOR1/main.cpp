#include <iostream>
#include <vector>
using namespace std;

int main()
{
    struct carro{
    string modelo;
    int anio;
    float precio;
    char color;
    };
    vector <carro> carros;
    int ncarros;
    cout << "Ingrese el numero de carros " << endl;
    cin>>ncarros;


     for (int i=0;i<ncarros;i++){
        carro automovil;
        cout << "Ingrese el modelo del carro " << endl;
        cin>>automovil.modelo;
        cout << "Ingrese el año del carro " << endl;
        cin>>automovil.anio;
        cout << "Ingrese el precio del carro " << endl;
        cin>>automovil.precio;
        cout << "Ingrese la inicial del color del carro " << endl;
        cin>>automovil.color;
        carros.push_back(automovil);
     }


     for (int i=0;i<carros.size();i++){
        cout << "Modelo: " <<carros[i].modelo<<endl;
        cout << "Modelo: " <<carros[i].anio<<endl;
        cout << "Modelo: " <<carros[i].precio<<endl;
        cout << "Modelo: " <<carros[i].color<<endl;

     }





    return 0;
}
