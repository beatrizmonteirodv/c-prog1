#include <iostream>
using namespace std;

int main() {
    int quantidade, anterior, atual;
    cin >> quantidade;
    cin >> anterior;

    long long maiorSalto = 0;
    for (int i = 1; i < quantidade; i++) {
        cin >> atual;

        // Converte antes da subtracao para caber a diferenca entre dois ints.
        long long salto = (long long) atual - anterior;
        if (salto < 0) {
            salto = -salto;
        }
        if (salto > maiorSalto) {
            maiorSalto = salto;
        }
        anterior = atual;
    }

    cout << "Maior salto: " << maiorSalto << endl;
    return 0;
}
