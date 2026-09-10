#include <iostream>
using namespace std;

int main() {
    double pes, polegadas, jardas, milhas;
    cin >> pes;

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    cout.precision(12);
    cout << polegadas << endl;
    cout << jardas << endl;
    cout << milhas << endl;

    return 0;
}
