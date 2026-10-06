#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valorcompra, km, total, frete;

    cin >> valorcompra >> km;

    if (valorcompra >= 300) {
        frete = 0;
    }
    else if (km <= 5) {
        frete = 12;
    }
    else if (km <= 15) {
        frete = 20;
    }
    else {
        frete = 35;
    }

    total = valorcompra + frete;
    cout << fixed << setprecision(2);
    cout << frete << endl;
    cout << total << endl;

    return 0;
}
