#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tarifa;
    float valor = 0;

    cin >> tarifa;

    // Primeiros 100 kWh: R$ 0,50 por kWh.
    if (tarifa >= 100) {
        valor = 100 * 0.50;
        tarifa = tarifa - 100;
    }
    else {
        valor = tarifa * 0.50;
        tarifa = 0;
    }

    // Proximos 100 kWh: R$ 0,75 por kWh.
    if (tarifa >= 100) {
        valor = valor + 100 * 0.75;
        tarifa = tarifa - 100;
    }
    else {
        valor = valor + tarifa * 0.75;
        tarifa = 0;
    }

    // Consumo que restou acima de 200 kWh: R$ 1,00 por kWh.
    valor = valor + tarifa * 1.00;

    cout << fixed << setprecision(2) << valor << endl;
    return 0;
}
