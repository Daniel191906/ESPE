#include <iostream>

using namespace std;
string NYA (string a, string b);
string DN (string a);
string FECHA (string a, string b, string c);
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



    string c1;
    cout <<"Introduzca su numero de cedula" << endl;
    cin >> c1;

    string resultado3 = DN(c1);


    string c2;
    cout <<"Introduzca su fecha de nacimiento" << endl;
    cin >> c2;

    string resultado4 = DN(c2);



    cout <<"Nombres: " <<resultado<< endl;
    cout <<"Apellidos: " <<resultado2<< endl;
    cout <<"Numero de cedula: " <<resultado3<< endl;
    cout <<"Fecha de nacimiento: " <<resultado3<< endl;



    return 0;
}
string NYA (string X1, string X2)
{
    string texto;
    texto = (X1 + X2);
    return texto;
}

string DN (string X1)
{
    string texto;
    texto = (X1);
    return texto;
}
string FECHA (string x, string y, string z)
{
    string texto;
    texto = (x+y+z);
    return texto;
}



