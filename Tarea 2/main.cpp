#include <iostream>

using namespace std;

int main()
{
    float P1,P2,P3,M1,E1,C1,T1,L1,PR1,M2,E2,C2,T2,L2,PR2,M3,E3,C3,T3,L3,PR3,NF;

    cout << "Ingrese el promedio de los mapas mentales del primer parcial" << endl;
    cin >> M1;
    cout << "Ingrese el promedio de las exposiociones del primer parcial" << endl;
    cin >> E1;
    cout << "Ingrese la nota de la evaluación conjunta del primer parcial"<< endl;
    cin >> C1;
    cout << "Ingrese la nota del test intermedio del primer parcial" << endl;
    cin >> T1;
    cout <<"Ingrese la nota del laboratorio del primer parcial" << endl;
    cin >> L1;
    cout <<"Ingrese la nota del proyecto del primer parcial" << endl;
    cin >> PR1;
    P1=(M1*10+E1*10+C1*35+T1*15+L1*15+PR1*15)/100 ;
    cout << "Su nota del primer parcial es: "<<P1<< endl;

    cout << "Ingrese el promedio de los mapas mentales del segundo parcial" << endl;
    cin >> M2;
    cout << "Ingrese el promedio de las exposiociones del segundo parcial" << endl;
    cin >> E2;
    cout << "Ingrese la nota de la evaluación conjunta del segundo parcial"<< endl;
    cin >> C2;
    cout << "Ingrese la nota del test intermedio del segundo parcial" << endl;
    cin >> T2;
    cout <<"Ingrese la nota del laboratorio del segundo parcial" << endl;
    cin >> L2;
    cout <<"Ingrese la nota del proyecto del segundo parcial" << endl;
    cin >> PR2;
    P2=(M2*10+E2*10+C2*35+T2*15+L2*15+PR2*15)/100 ;
    cout << "Su nota del segundo parcial es: "<<P2<< endl;

    cout << "Ingrese el promedio de los mapas mentales del tercer parcial" << endl;
    cin >> M3;
    cout << "Ingrese el promedio de las exposiociones del tercer parcial" << endl;
    cin >> E3;
    cout << "Ingrese la nota de la evaluación conjunta del tercer parcial"<< endl;
    cin >> C3;
    cout << "Ingrese la nota del test intermedio del tercer parcial" << endl;
    cin >> T3;
    cout <<"Ingrese la nota del laboratorio del tercer parcial" << endl;
    cin >> L3;
    cout <<"Ingrese la nota del proyecto del tercer parcial" << endl;
    cin >> PR3;
    P3=(M3*10+E3*10+C3*35+T3*15+L3*15+PR3*15)/100 ;
    cout << "Su nota del primer parcial es: "<<P3<< endl;

    NF=(P1+P2+P3)/3;
    cout << "Su nota final es: "<<NF;
    if(NF>14){
         cout<<" , por lo tanto esta aprobado"<<endl;
    }
    else cout<<" , por lo tanto esta reprobado"<<endl;




    return 0;
}
