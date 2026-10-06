#include <iostream>
using namespace std;

// Desafio de treino: validar uma data e somar um prazo de ate 1440 minutos.
int main() {
    int dia, mes, ano, hora, minuto, prazo;
    int diasNoMes, total;

    cin >> dia >> mes >> ano >> hora >> minuto >> prazo;

    if (ano < 1900 or ano > 2099 or mes < 1 or mes > 12 or
        dia < 1 or hora < 0 or hora > 23 or minuto < 0 or minuto > 59 or
        prazo < 0 or prazo > 1440) {
        cout << "INVALIDO" << endl;
        return 0;
    }

    if (mes == 2) {
        if (ano % 400 == 0 or (ano % 4 == 0 and ano % 100 != 0)) {
            diasNoMes = 29;
        }
        else {
            diasNoMes = 28;
        }
    }
    else if (mes == 4 or mes == 6 or mes == 9 or mes == 11) {
        diasNoMes = 30;
    }
    else {
        diasNoMes = 31;
    }

    if (dia > diasNoMes) {
        cout << "INVALIDO" << endl;
        return 0;
    }

    total = hora * 60 + minuto + prazo;

    // O limite do prazo garante que passamos no maximo para o dia seguinte.
    if (total >= 1440) {
        total = total - 1440;
        dia = dia + 1;
    }

    if (dia > diasNoMes) {
        dia = 1;
        mes = mes + 1;
    }

    if (mes > 12) {
        mes = 1;
        ano = ano + 1;
    }

    hora = total / 60;
    minuto = total % 60;

    cout << dia << " " << mes << " " << ano << " "
         << hora << " " << minuto << endl;
    return 0;
}
