#include <iostream>

using namespace std;

int main() {
    float batteryVoltage;
    float resistance;
    bool switchState;
    const float ledVoltage = 2.0; // Voltaje necesario para encender el LED en voltios
    bool ledState = false;

    cout << "Ingrese el voltaje de la bateria en voltios: ";
    cin >> batteryVoltage;
    cout << "Ingrese el valor de la resistencia en ohmios: ";
    cin >> resistance;
    char switchInput;
    cout << "Ingrese el estado del interruptor e para encender, a para apagar: ";
    cin >> switchInput;
    switchState = (switchInput == 'e');

    if (switchState) {
        float current = batteryVoltage / resistance; // Calcular la corriente usando la Ley de Ohm: I = V / R

        if (batteryVoltage >= ledVoltage && current > 0) {
            ledState = true;
        } else {
            ledState = false;
        }
    } else {
        ledState = false;
    }

    cout << "Estado del LED: " << (ledState ? "Encendido" : "Apagado") << endl;

    return 0;
}
