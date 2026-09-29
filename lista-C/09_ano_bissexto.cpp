#include <iostream>
using namespace std;

int main() {
    int ano;

    cin >> ano;

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        cout << "Ano bissexto" << endl;
    } else {
        cout << "Ano nao bissexto" << endl;
    }

    return 0;
}
