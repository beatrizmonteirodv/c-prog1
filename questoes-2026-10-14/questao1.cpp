#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;

    // Usa as maiores notas primeiro, como o enunciado pede.
    int notas100 = valor / 100;
    valor = valor % 100;
    int notas50 = valor / 50;
    valor = valor % 50;
    int notas20 = valor / 20;
    valor = valor % 20;
    int notas10 = valor / 10;
    valor = valor % 10;
    int notas5 = valor / 5;
    valor = valor % 5;
    int notas2 = valor / 2;
    valor = valor % 2;

    if (valor != 0) {
        cout << "IMPOSSIVEL" << endl;
    } else {
        cout << "100: " << notas100 << endl;
        cout << "50: " << notas50 << endl;
        cout << "20: " << notas20 << endl;
        cout << "10: " << notas10 << endl;
        cout << "5: " << notas5 << endl;
        cout << "2: " << notas2 << endl;
    }

    return 0;
}
