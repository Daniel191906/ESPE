#include <iostream>

using namespace std;

int main()
{
    float V,v,R;
    cout << "Ingrese el valor m�ximo que puede tomar la resistencia" << endl;
    cin >> V;
    cout << "Ingrese el valor m�nimo que puede tomar la resistencia" << endl;
    cin >> v;
    if (R>V and R<v){
        cout << "La resistencia es adecuada" << endl;
    }
    else cout << "La resistencia no es adecuada" << endl;
    return 0;
}
