#include <iostream>

using namespace std;

int main()
{
    float promedio (float a, float b, float c, float d, float e, float f);
    cout << << endl;
    return 0;

    float x1,x2,x3,x4,x5,x6;

    cout << "Ingrese el promedio de los mapas mentales del primer parcial" << endl;
    cin >> x1;
    cout << "Ingrese el promedio de las exposiociones del primer parcial" << endl;
    cin >> x2;
    cout << "Ingrese la nota de la evaluación conjunta del primer parcial"<< endl;
    cin >> x3;
    cout << "Ingrese la nota del test intermedio del primer parcial" << endl;
    cin >> x4;
    cout <<"Ingrese la nota del laboratorio del primer parcial" << endl;
    cin >> x5;
    cout <<"Ingrese la nota del proyecto del primer parcial" << endl;
    cin >> x6;

    int resultado=promedio(x1,x2,x3,x4,x5,x6);


    float y1,y2,y3,y4,y5,y6;

    cout << "Ingrese el promedio de los mapas mentales del segundo parcial" << endl;
    cin >> y1;
    cout << "Ingrese el promedio de las exposiociones del segundo parcial" << endl;
    cin >> y2;
    cout << "Ingrese la nota de la evaluación conjunta del segundo parcial"<< endl;
    cin >> y3;
    cout << "Ingrese la nota del test intermedio del segundo parcial" << endl;
    cin >> y4;
    cout <<"Ingrese la nota del laboratorio del segundo parcial" << endl;
    cin >> y5;
    cout <<"Ingrese la nota del proyecto del segundo parcial" << endl;
    cin >> y6;

    int resultado2=promedio(y1,y2,y3,y4,y5,y6);


    float z1,z2,z3,z4,z5,z6;

    cout << "Ingrese el promedio de los mapas mentales del tercer parcial" << endl;
    cin >> z1;
    cout << "Ingrese el promedio de las exposiociones del tercer parcial" << endl;
    cin >> z2;
    cout << "Ingrese la nota de la evaluación conjunta del tercer parcial"<< endl;
    cin >> z3;
    cout << "Ingrese la nota del test intermedio del tercer parcial" << endl;
    cin >> z4;
    cout <<"Ingrese la nota del laboratorio del tercer parcial" << endl;
    cin >> z5;
    cout <<"Ingrese la nota del proyecto del tercer parcial" << endl;
    cin >> z6;

    int resultado3=promedio(z1,z2,z3,z4,z5,z6);


}
    float promedio (float a, float b, float c, float d, float e, float f)
    {
        float resuktado;
        resultado=(a*10+b*10+c*35+d*15+e*15+f*15)/100;
        return resultado;

    }
