#include <iostream>
using namespace std;

int main() {
    long long numero;
    int quantidade = 0, soma = 0;
    cin >> numero;

    while (numero > 0) {
        int algarismo = numero % 10;
        if (algarismo % 2 == 0) {
            quantidade++;
            soma = soma + algarismo;
        }
        numero = numero / 10;
    }

    cout << "Quantidade pares: " << quantidade << endl;
    cout << "Soma pares: " << soma << endl;
    return 0;
}
