#include <iostream>

using namespace std;

int main() {
    int diaInicial, diaFinal;
    int horaInicial, horaFinal;
    int minutoInicial, minutoFinal;
    int segundoInicial, segundoFinal;

    cout << "Dia ";
    cin >> diaInicial;
    cout << endl;

    cin >> horaInicial >> minutoInicial >> segundoInicial;
    cout << endl;

    cout << "Dia ";
    cin >> diaFinal;
    cout << endl;

    cin >> horaFinal >> minutoFinal >> segundoFinal;

    cout <<  << " dias(s)\n";
    cout <<  << " hora(s)\n";
    cout <<  << " minuto(s)\n";
    cout <<  << " segundo(s)\n";

    return 0;
}



/*
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23


3 dia(s)
22 hora(s)
1 minuto(s)
0 segundo(s)



*/