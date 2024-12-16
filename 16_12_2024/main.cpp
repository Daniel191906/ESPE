#include <iostream>

using namespace std;
string NYA (string a, string b);

int main()
{
    string n1,n2;
    cout <<"Introduzca su primer nombre" << endl;
    cin >> n1;
    cout <<"Introduzca su segundo nombre"<< endl;
    cin >> n2;

    string resultado = NYA(n1,n2);

    string a1,a2;
    cout <<"Introduzca su primer apellido" << endl;
    cin >> a1;
    cout <<"Introduzca su segundo apellido"<< endl;
    cin >> a2;

    string resultado2 = NYA(a1,a2);

    cout <<"Nombres: " <<resultado<< endl;
    cout <<"Apellidos: " <<resultado2<< endl;

    return 0;
}
string NYA (string X1, string X2)
{
    string texto;
    texto = (X1 + X2);
    return texto;
}

