#include <iostream>
using namespace std;

int main() {
    int hora, minuto;

    cin >> hora >> minuto;

    int totalMinutos = hora * 60 + minuto;

    cout << totalMinutos << endl;

    return 0;
}
