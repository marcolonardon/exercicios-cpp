#include <stdio.h>
#include <stdlib.h>

int horaInicial, minutoInicial, horaFinal, minutoFinal;
int duracaoHora, duracaoMinuto;
int main() {
    scanf("%i %i %i %i", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    duracaoHora = horaFinal - horaInicial;
    duracaoMinuto = minutoFinal - minutoInicial;

    if (duracaoHora <= 0) {
        duracaoHora += 24;
    }
    if (duracaoMinuto < 0) {
        duracaoHora--;
        duracaoMinuto += 60;
    }
    if (duracaoHora==24 && duracaoMinuto>0){
        duracaoHora = 0;
    }

    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", duracaoHora, duracaoMinuto);
}
