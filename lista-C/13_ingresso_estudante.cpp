#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade, estudante;
    float ingresso;

    // estudante: 1 para sim, 2 para nao.
    cin >> idade >> estudante >> ingresso;

    if (idade < 18 or estudante == 1) {
        ingresso = ingresso * 0.5;
    }

    cout << fixed << setprecision(2) << ingresso << endl;
    return 0;
}
