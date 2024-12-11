#include <iostream>

using namespace std;

int main()
{
     float V;
    cout << "Ingrese el valor del voltaje" << endl;
    cin >> V;
    if (V > 0) {
        cout << "La corriente es positiva." << endl;
    } else if (V < 0) {
        cout << "La corriente es negativa." << endl;
    } else {
        cout << "La corriente es neutra." << endl;
    }

    return 0;
}
