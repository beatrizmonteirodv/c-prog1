#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;
    cin >> fahrenheit;

    celsius = fahrenheit - 32;
    celsius = celsius * 5;
    celsius = celsius / 9;

    cout.precision(12);
    cout << celsius << endl;

    return 0;
}
