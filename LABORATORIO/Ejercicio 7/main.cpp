#include <iostream>

using namespace std;

int main()
{
    float V;
    cout << "Ingrese el valor del voltaje de la bateria en voltios" << endl;
    cin >> V;
    if (V > 12.6) {
        cout << "La bater�a est� completamente cargada." << endl;
    } else if (V >= 11.5) {
        cout << "La bater�a est� parcialmente cargada." << endl;
    } else {
        cout << "La bater�a est� descargada." << endl;
    }

    return 0;
}
