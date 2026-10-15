#include <iostream>
using namespace std;

int main() {
    long long valor;
    cin >> valor;

    // Usa as maiores notas primeiro, como o enunciado pede.
    long long notas100 = valor / 100;
    valor = valor % 100;
    long long notas50 = valor / 50;
    valor = valor % 50;
    long long notas20 = valor / 20;
    valor = valor % 20;
    long long notas10 = valor / 10;
    valor = valor % 10;
    long long notas5 = valor / 5;
    valor = valor % 5;
    long long notas2 = valor / 2;
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
