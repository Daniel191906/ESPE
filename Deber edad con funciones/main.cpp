#include <iostream>
using namespace std;

int fecha (int a, int b);


int main()

{
    int d1, m1, a1;
    cout << "Ingrese la feha de hoy (Dia Mes Año) " << endl;
    cin >>d1>>m1>>a1;


    int d2, m2, a2;
    cout << "Ingrese su fecha de nacimiento (Dia Mes Año) " << endl;
    cin >>d2>>m2>>a2;


    int resultado=fecha(d1,d2);
    int resultado2=fecha(m1,m2);
    int resultado3=fecha(a1,a2);

    cout << "Su edad es "<<resultado3<<" años "<<resultado2<<" meses y "<<resultado<<" dias ";

    return 0;
}
int fecha (int x, int y)
    {
        int valor;
        valor=(x-y);
        return valor;

    }
