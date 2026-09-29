#include <iostream>
using namespace std;

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim;

    cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;

    int inicio = horaInicio * 60 + minutoInicio;
    int fim = horaFim * 60 + minutoFim;
    int duracao = fim - inicio;

    if (duracao <= 0) {
        duracao = duracao + 1440;
    }

    cout << duracao / 60 << " " << duracao % 60 << endl;

    return 0;
}
