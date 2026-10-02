#include <iostream>
using namespace std;

int main() {
    int opcion;
    float saldo = 1000.0; // Saldo inicial
    float monto;
    cout << "Bienvenido al cajero automático" << endl;
    cout << "Seleccione una opción:" << endl;
    cout << "1 Consultar saldo" << endl;
    cout << "2 Retirar dinero" << endl;
    cout << "3 Depositar dinero" << endl;
    cin >> opcion;
    switch (opcion) {
        case 1:
            cout << "Su saldo actual es: $" << saldo << endl;
            break;
        case 2:
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;
            if (monto <= saldo) {
                saldo -= monto;
                cout << "Retiro exitoso. Su nuevo saldo es: $" << saldo << endl;
            } else {
                cout << "Saldo insuficiente." << endl;
            }
            break;
        case 3:
            cout << "Ingrese el monto a depositar: ";
            cin >> monto;
            saldo += monto;
            cout << "Depósito exitoso. Su nuevo saldo es: $" << saldo << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
    }
    return 0;
}   