#include <iostream>

using namespace std;

int main()
{
    float V,I,R;
    cout << "Ingrese el valor de la corriente en emperios" << endl;
    cin >> I;
    cout << "Ingrese el valor de la resitencia" << endl;
    cin >> R;
    V=I*R;
    cout << "El valor del voltaje es " <<V<< endl;
    return 0;
}
