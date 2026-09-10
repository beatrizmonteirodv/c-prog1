# Lista 1 - Parte 3

## Questão 8

[questao8.cpp](questao8.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;

    cout << valor / 100 << endl;
    valor = valor % 100;
    cout << valor / 50 << endl;
    valor = valor % 50;
    cout << valor / 20 << endl;
    valor = valor % 20;
    cout << valor / 10 << endl;
    valor = valor % 10;
    cout << valor / 5 << endl;
    valor = valor % 5;
    cout << valor / 2 << endl;
    valor = valor % 2;
    cout << valor << endl;

    return 0;
}
```

## Questão 9

[questao9.cpp](questao9.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    double pes, polegadas, jardas, milhas;
    cin >> pes;

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;

    cout.precision(12);
    cout << polegadas << endl;
    cout << jardas << endl;
    cout << milhas << endl;

    return 0;
}
```

## Questão 10

[questao10.cpp](questao10.cpp)

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, distancia;
    cin >> x1 >> y1 >> x2 >> y2;

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout.setf(ios::fixed);
    cout.precision(5);
    cout << distancia << endl;

    return 0;
}
```

## Questão 11

[questao11.cpp](questao11.cpp)

```cpp
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
```

## Questão 12

[questao12.cpp](questao12.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int dinheiro, canhoes, polvora, espadas;
    cin >> dinheiro;

    canhoes = dinheiro / 10000;
    dinheiro = dinheiro % 10000;
    polvora = dinheiro / 2000;
    dinheiro = dinheiro % 2000;
    espadas = dinheiro / 1500;

    cout << canhoes << endl;
    cout << polvora << endl;
    cout << espadas << endl;

    return 0;
}
```

## Questão 13

[questao13.cpp](questao13.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cin >> numero;

    cout << numero - 1 << endl;
    cout << numero + 1 << endl;

    return 0;
}
```

## Questão 14

[questao14.cpp](questao14.cpp)

```cpp
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
```
