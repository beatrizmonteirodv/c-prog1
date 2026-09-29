#include <iostream>
using namespace std;

int main() {
    int n, capacidade;

    cin >> n >> capacidade;

    int quociente = n / capacidade;
    int resto = n % capacidade;

    cout << quociente << endl;
    cout << resto << endl;

    return 0;
}
