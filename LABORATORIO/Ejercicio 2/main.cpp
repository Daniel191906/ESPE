#include <iostream>

using namespace std;

int main()
{
    float E,C,V;
    cout << "Ingrese el valor de la capacitancia en fardios" << endl;
    cin >> C;
    cout << "Ingrese el valor del voltaje en voltios" << endl;
    cin >> V;
    E=(C*V*V)/2;
    cout << "El valor de la capacitancia es " <<E<< endl;

    return 0;
}
