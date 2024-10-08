#include <iostream>
#include <string>
using namespace std;

void NTablas() {

    int NUM, RESUL;
    int T = 1;
    int I;
    string linea;

    cout << "\n\nCuantas tablas: ";
    cin >> linea;

    NUM = stoi(linea);
    cin.ignore();

    while (T <= NUM) {
        I = 10;
        while (I >= 1) {
            RESUL = T * I;
            cout << T << " * " << I << " = " << RESUL << endl;
            I--;
        }
        cout << "Pulse una tecla:";
        cin.get();
        T++;
    }
}

void TablasdeN() {

    int NUM, RESUL;
    int I = 1;
    string linea;

    cout << "\n\nDigite un numero: ";
    cin >> linea;

    NUM = stoi(linea);

    cin.ignore();

    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I++;

    }

    cout << "Pulse una tecla:";
    cin.get();

}

int main() {
    int Opcion;
    int salida = true;

    while (salida) {


        cout << "\nSelecciona la funcion de tu interes:" << endl << endl
            << "   1. Generador de Tablas de Multiplicar" << endl
            << "   2. Tabla de Multiplicar de tu interes" << endl
            << "   3. Salir" << endl << endl
            << "Opcion:";
        cin >> Opcion;

        switch (Opcion) {
        case 1:
            NTablas();
            break;

        case 2:
            TablasdeN();
            break;
        case 3:
            salida = false;
            break;

        default:
            cout << "Opcion invalida." << endl;
            break;

        }

    }
}