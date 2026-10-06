#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream entrada("entrada.txt");

    if (!entrada) {
        cout << "Erro ao abrir arquivo" << endl;
        return 1;
    }

    int numero;
    entrada >> numero;
    cout << numero << endl;

    entrada.close();
    return 0;
}
