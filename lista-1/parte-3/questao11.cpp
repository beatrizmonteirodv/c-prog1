#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * (5.0 / 9.0);

    cout.precision(12);
    cout << celsius << endl;

    return 0;
}
