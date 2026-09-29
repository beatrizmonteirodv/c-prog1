#include <iostream>
using namespace std;

int main() {
    int totalMinutos;

    cin >> totalMinutos;

    int hora = totalMinutos / 60;
    int minuto = totalMinutos % 60;

    cout << hora << " " << minuto << endl;

    return 0;
}
