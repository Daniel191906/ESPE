#include <iostream>
using namespace std;

int main() {
    float P,T,E;

    cout << "C�lculo de de la nerg�a consumida" << endl;
    cout << "Ingresa la potencia del dispositivo en watts: ";
    cin >> P;
    cout << "Ingresa el tiempo de funcionamiento en horas: ";
    cin >> T;

    E=P*T;

    cout << "La energ�a consumida es: " << E << " Wh" << endl;

    return 0;
}
