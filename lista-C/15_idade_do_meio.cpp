#include <iostream>
using namespace std;

int main() {
    int idade1, idade2, idade3;

    cin >> idade1 >> idade2 >> idade3;

    if (((idade1 <= idade2) and (idade1 >= idade3)) or
        ((idade1 <= idade3) and (idade1 >= idade2))) {
        cout << idade1;
    }
    else if (((idade2 <= idade1) and (idade2 >= idade3)) or
             ((idade2 <= idade3) and (idade2 >= idade1))) {
        cout << idade2;
    }
    else {
        cout << idade3;
    }

    cout << endl;
    return 0;
}
