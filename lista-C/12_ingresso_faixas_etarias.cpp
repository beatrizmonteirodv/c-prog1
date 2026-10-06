#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade;
    float ingresso;

    cin >> idade >> ingresso;

    if (idade < 12) {
        ingresso = ingresso * 0.5;
    }
    else if (idade >= 60) {
        ingresso = ingresso * 0.7;
    }

    cout << fixed << setprecision(2) << ingresso << endl;
    return 0;
}
