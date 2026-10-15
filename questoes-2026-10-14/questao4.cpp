#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;

    int original = numero;
    // long long permite guardar a inversao de qualquer int positivo.
    long long invertido = 0;
    while (numero > 0) {
        int algarismo = numero % 10;
        invertido = invertido * 10 + algarismo;
        numero = numero / 10;
    }

    if (invertido == original) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }
    return 0;
}
