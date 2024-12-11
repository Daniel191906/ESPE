#include <iostream>
using namespace std;

int main() {
    float P,T,E;

    cout << "Cálculo de de la nergía consumida" << endl;
    cout << "Ingresa la potencia del dispositivo en watts: ";
    cin >> P;
    cout << "Ingresa el tiempo de funcionamiento en horas: ";
    cin >> T;

    E=P*T;

    cout << "La energía consumida es: " << E << " Wh" << endl;

    return 0;
}
