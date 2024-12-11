#include <iostream>

using namespace std;

int main()
{
    float V;
    cout << "Ingrese el valor del voltaje de la bateria en voltios" << endl;
    cin >> V;
    if (V > 12.6) {
        cout << "La batería está completamente cargada." << endl;
    } else if (V >= 11.5) {
        cout << "La batería está parcialmente cargada." << endl;
    } else {
        cout << "La batería está descargada." << endl;
    }

    return 0;
}
