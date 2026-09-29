#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double precoUnitario, total, desconto = 0;
    int quantidade;

    cin >> precoUnitario >> quantidade;
    total = precoUnitario * quantidade;

    if (total >= 200) {
        desconto = total * 0.10;
    }

    cout << fixed << setprecision(2) << desconto << endl;
    cout << fixed << setprecision(2) << total - desconto << endl;

    return 0;
}
