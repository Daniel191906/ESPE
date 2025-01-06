#include <iostream>

float CALCULAR(float a,float g,float c,float ga);
void mostrarMenu() {
    cout << "    MENU   "<< endl;
    cout << "1. Ingresar productos " << endl;
    cout << "2. Mostrar productos " << endl;
    cout << "3. Comprar productos" << endl;
    cout << "4. Saldo " << endl;
    cout << "5. Salir " << endl;
    cout << "Seleccione una opcion: ";
}

void opciones() {
    cout << "    Productos   " << endl;
    cout << "1. Aguas " << endl;
    cout << "2. Gaseosas " << endl;
    cout << "3. Chicles " << endl;
    cout << "4. Galletas " << endl;
    cout << "5. Salir " << endl;
}


int main(){
int a,g,c,ga,q;
a=10;
g=10;
c=10;
ga=10;

int opcion;
int opcion2;
int opcion3;
int opcion4;


    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {

            case 1:

                {do {
                        opciones();
                        cin >> opcion2;
                         switch (opcion2) {
                        case 1:
                            cout << "¿Cuantos productos ingresara?"<< endl;
                            cin >> q;
                            a+q;
                            cout <<a+q<<endl;
                            break;
                        case 2:
                            cout << "¿Cuantos productos ingresara?"<< endl;
                            cin >> q;
                            g+q;
                            cout <<g+q<<endl;
                            break;
                        case 3:
                            cout << "¿Cuantos productos ingresara?"<< endl;
                            cin >> q;
                            c+q;
                            cout <<c+q<<endl;
                            break;
                        case 4:
                            cout << "¿Cuantos productos ingresara?"<< endl;
                            cin >> q;
                            a+q;
                            cout <<a+q<<endl;
                            break;
                        case 5:
                            cout << "Saliendo del programa..." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Intente de nuevo." << endl;
                            break;
                            cout << endl;
                            }
                            }while (opcion != 5);
                            break;
                }

            case 2
            opciones();



            case 3:
                       opciones();
                        cin >> opcion3;
                         switch (opcion3) {
                        case 1:
                            cout << "¿Cuantos productos comprara?"<< endl;
                            cin >> q;
                            a+q;
                            cout <<a+q<<endl;
                            break;
                        case 2:
                            cout << "¿Cuantos productos comprara?"<< endl;
                            cin >> q;
                            a+q;
                            cout <<a+q<<endl;
                            break;

                        case 3:
                            cout << "¿Cuantos productos comprara?"<< endl;
                            cin >> q;
                            a+q;
                            cout <<a+q<<endl;
                            break;
                        case 4:
                            cout << "¿Cuantos productos comprara?"<< endl;
                            cin >> q;
                            a+q;
                            cout <<a+q<<endl;
                            break;

                        case 5:
                            cout << "Saliendo del programa..." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Intente de nuevo." << endl;
                            break;
                            cout << endl;
                            }while (opcion != 5);
                            break;
                }


            case 3:
                cout << "Has seleccionado la Opción 3." << endl;

                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
                break;
                cout << endl;
                }}
                while (opcion != 5);
}




