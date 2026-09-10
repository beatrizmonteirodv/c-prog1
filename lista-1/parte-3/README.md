# Lista 1 - Parte 3

## Questão 8

[questao8.cpp](questao8.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    int valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    cin >> valor;

    notas100 = valor / 100;
    valor = valor % 100;
    notas50 = valor / 50;
    valor = valor % 50;
    notas20 = valor / 20;
    valor = valor % 20;
    notas10 = valor / 10;
    valor = valor % 10;
    notas5 = valor / 5;
    valor = valor % 5;
    notas2 = valor / 2;
    notas1 = valor % 2;

    cout << notas100 << endl;
    cout << notas50 << endl;
    cout << notas20 << endl;
    cout << notas10 << endl;
    cout << notas5 << endl;
    cout << notas2 << endl;
    cout << notas1 << endl;

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
```

## Questão 11

[questao11.cpp](questao11.cpp)

```cpp
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
    int numero, antecessor, sucessor;
    cin >> numero;

    antecessor = numero - 1;
    sucessor = numero + 1;

    cout << antecessor << endl;
    cout << sucessor << endl;

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

