#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade;
    float ingresso;

    cin >> idade >> ingresso;

    if (idade < 18) {
        ingresso = ingresso * 0.5;
    }

    cout << fixed << setprecision(2) << ingresso << endl;
    return 0;
}
