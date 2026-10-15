#include <iostream>
using namespace std;

int main() {
    int quantidade, anterior, atual;
    cin >> quantidade;
    cin >> anterior;

    int maiorSalto = 0;
    for (int i = 1; i < quantidade; i++) {
        cin >> atual;

        int salto = atual - anterior;
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
