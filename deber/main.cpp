#include <iostream>

using namespace std;

int main()
{
    float p1,p2,p3;
  float notas[3][6];
    for (int i=0; i<3; i++){
            for (int j=0; j<6; j++){
                cout << "Ingres la nota ["<<i<<"]"<<"["<<j<<"]"<<endl;
                cin >> notas[i][j];
                if (notas[i][j]<0 and notas[i][j]>20){
                        cout << "Valor no valido"<<endl;
                }
            } }
    for (int i=0; i<3; i++){
            for (int j=0; j<6; j++){
                cout << notas[i][j]<<"  ";
            }
            cout << endl;
    }
p1=(notas[0][0]*0.10+notas[0][1]*0.10+notas[0][2]*0.35+notas[0][3]*0.15+notas[0][4]*0.15+notas[0][5]*0.15);
cout << "El promedio del primer parcial es "<<p1<<endl;
p2=(notas[1][0]*0.10+notas[1][1]*0.10+notas[1][2]*0.35+notas[1][3]*0.15+notas[1][4]*0.15+notas[1][5]*0.15);
cout << "El promedio del segundo parcial es "<<p2<<endl;
p3=(notas[2][0]*0.10+notas[2][1]*0.10+notas[2][2]*0.35+notas[2][3]*0.15+notas[2][4]*0.15+notas[2][5]*0.15);
cout << "El promedio del tercer parcial es "<<p3<<endl;


            }
