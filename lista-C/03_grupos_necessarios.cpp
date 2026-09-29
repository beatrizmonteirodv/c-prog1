#include <iostream>
using namespace std;

int main() {
    int n, capacidade;

    cin >> n >> capacidade;

    int grupos = n / capacidade;

    if (n % capacidade != 0) {
        grupos = grupos + 1;
    }

    cout << grupos << endl;

    return 0;
}
