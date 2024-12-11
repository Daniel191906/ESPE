#include <iostream>

using namespace std;

int main()
{
    float V,VR2,R1,R2;

    cout << "Ingrese el voltaje de entrada: "<< endl;
    cin >> V;

    cout << "Ingrese el valor de la resistencia 1: "<< endl;
    cin >> R1;

    cout << "Introduce el valor de la resistencia 2 : "<< endl;
    cin >> R2;

    VR2 = V*(R2/(R1 + R2));

    cout << "El voltaje en la resistencia 2 es: " << V << endl;


    return 0;
}
