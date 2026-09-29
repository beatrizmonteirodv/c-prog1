#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        cout << "Nao forma um triangulo" << endl;
    } else if (a == b && b == c) {
        cout << "Equilatero" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles" << endl;
    } else {
        cout << "Escaleno" << endl;
    }

    return 0;
}
