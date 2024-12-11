#include <iostream>

using namespace std;

int main()
{
    float V,Vm,Vx;
    Vm==2;
    Vx==12;
    cout << "Ingrese el valor del voltaje en voltios" << endl;
    cin >> V;
    if (V>Vm){
        if (V>Vx){
            cout << "Led quemado" << endl;
        }
        else cout << "Led encendido" << endl;
    }
    else cout << "Led apagado" << endl;

    return 0;
}
