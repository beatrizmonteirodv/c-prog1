#include <iostream>
using namespace std;

int main() {
    int minutos;
    cin >> minutos;

    int valor = 8;
    if (minutos > 60) {
        int minutosExtras = minutos - 60;
        int horasExtras = minutosExtras / 60;
        if (minutosExtras % 60 != 0) {
            horasExtras++;
        }
        valor = valor + horasExtras * 5;
    }

    // A tarifa sempre resulta em um numero inteiro de reais.
    cout << "Valor a pagar: R$ " << valor << ".00" << endl;
    return 0;
}
