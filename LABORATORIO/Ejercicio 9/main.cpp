#include <iostream>
using namespace std;

int main() {
    float C;
    int O;

    cout << "Conversi�n de Corriente" << endl;
    cout << "1. Convertir de miliamperios a amperios" << endl;
    cout << "2. Convertir de amperios a miliamperios" << endl;
    cout << "Elija una opci�n: ";
    cin >> O;

    if (O == 1) {
        cout << "Ingrese la corriente en miliamperios: ";
        cin >> C;
        cout << "La corriente en amperios es: " << C/1000 << " amperios" << endl;
    } else if (O == 2) {
        cout << "Ingrese la corriente en amperios: ";
        cin >> C;
        cout << "La corriente en miliamperios es: " << C*1000 << " miliamperios" << endl;
    } else {
        cout << "Opci�n no v�lida." << endl;
    }

    return 0;
}
