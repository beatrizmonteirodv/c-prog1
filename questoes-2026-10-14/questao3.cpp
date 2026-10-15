#include <iostream>
using namespace std;

int main() {
    long long minutos;
    cin >> minutos;

    long long valor = 8;
    if (minutos > 60) {
        long long minutosExtras = minutos - 60;
        long long horasExtras = minutosExtras / 60;
        if (minutosExtras % 60 != 0) {
            horasExtras++;
        }
        valor = valor + horasExtras * 5;
    }

    // A tarifa sempre resulta em um numero inteiro de reais.
    cout << "Valor a pagar: R$ " << valor << ".00" << endl;
    return 0;
}
