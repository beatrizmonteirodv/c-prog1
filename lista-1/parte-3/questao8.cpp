#include <iostream>
using namespace std;

int main() {
    int valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    cin >> valor;

    notas100 = valor / 100;
    valor = valor % 100;
    notas50 = valor / 50;
    valor = valor % 50;
    notas20 = valor / 20;
    valor = valor % 20;
    notas10 = valor / 10;
    valor = valor % 10;
    notas5 = valor / 5;
    valor = valor % 5;
    notas2 = valor / 2;
    notas1 = valor % 2;

    cout << notas100 << endl;
    cout << notas50 << endl;
    cout << notas20 << endl;
    cout << notas10 << endl;
    cout << notas5 << endl;
    cout << notas2 << endl;
    cout << notas1 << endl;

    return 0;
}
