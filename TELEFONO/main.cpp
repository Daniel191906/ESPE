#include <iostream>
#include <vector>

using namespace std;

int main()
{
struct focos {
    string marca;
    int voltios;
    float precio;
    char tipo;
    };

    vector <focos> producto;
int nproductos;
cout<<"Ingrese la cantidad de productos"<<endl;
cin>>nproductos;
for (int i=0;i<nproductos;i++){
    focos foco1;
    cout<<"Ingrese la marca del foco"<<endl;
    cin >> foco1.marca;
    cout<<"Ingrese los voltios del foco"<<endl;
    cin >> foco1.voltios;
    cout<<"Ingrese el precio del foco"<<endl;
    cin >> foco1.precio;
    cout<<"Ingrese la la minicial de la clase del foco (l para led, i para incandecente): "<<endl;
    cin >> foco1.tipo;
    producto.push_back(foco1);}

    for (int i=0;i<producto.size();i++){
    cout<<"Marca: "<<producto[i].marca<<endl;
    cout<<"Voltios: "<<producto[i].voltios<<endl;
    cout<<"Precio: "<<producto[i].precio<<endl;
    cout<<"Tipo: "<<producto[i].tipo<<endl;
    }


    string busqueda;
    cout<<"Ingrese la marca del producto a buscar"<<endl;
    cin>> busqueda;
    for (int i=0;i<producto.size();i++){
            if (producto[i].marca=="busqueda"){
                cout<<"Se encontro el producto"<<endl;
            }
            else {cout<<"No se encontro el producto"<<endl;}
    }



    return 0;
}
