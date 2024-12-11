#include <iostream>

using namespace std;

int main()
{
    float F,T;
    cout << "Ingrese el valor de la frecuencia en Hz" << endl;
    cin >> F;
    T=1/F;
    cout << "El valor del período es "<<T<< endl;

    return 0;
}
