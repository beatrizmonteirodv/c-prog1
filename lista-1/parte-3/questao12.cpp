#include <iostream>
using namespace std;

int main() {
    int dinheiro, canhoes, polvora, espadas;
    cin >> dinheiro;

    canhoes = dinheiro / 10000;
    dinheiro = dinheiro % 10000;
    polvora = dinheiro / 2000;
    dinheiro = dinheiro % 2000;
    espadas = dinheiro / 1500;

    cout << canhoes << endl;
    cout << polvora << endl;
    cout << espadas << endl;

    return 0;
}
