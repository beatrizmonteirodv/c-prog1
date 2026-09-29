#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        cout << "A esta no meio" << endl;
    } else {
        cout << "A nao esta no meio" << endl;
    }

    return 0;
}
