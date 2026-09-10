#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    double diferencaX, diferencaY, soma, distancia;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    diferencaX = x2 - x1;
    diferencaY = y2 - y1;
    soma = diferencaX * diferencaX + diferencaY * diferencaY;
    distancia = sqrt(soma);

    cout << fixed;
    cout.precision(5);
    cout << distancia << endl;

    return 0;
}
