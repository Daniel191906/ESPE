#include <iostream>

using namespace std;
float R=10;
int main()
{
    float P1,V,I,P2,P22;
    cout << "Ingrese el valor de la corriente en amperios" << endl;
    cin >> I;
    P1=I*I*R;
    cout << "Ingrese el valor del voltaje en voltios" << endl;
    cin >> V;
    P2=(V*V)/R;

    if (P2==P1) {
            cout << "El valor de la potencia disipada en watts es" << P2 << endl;
    }
    else cout << "Error" << endl;
    if (P2>22.4){
        cout << "Corto circuito" <<P2<< endl;
    }
    else cout << "Funciona" << endl;


}
