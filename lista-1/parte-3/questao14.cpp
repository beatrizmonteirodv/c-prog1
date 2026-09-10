#include <iostream>
using namespace std;

int main() {
    double raio, area;
    const double pi = 3.141592653589793;
    cin >> raio;

    area = pi * raio * raio;

    cout.precision(12);
    cout << area << endl;

    return 0;
}
