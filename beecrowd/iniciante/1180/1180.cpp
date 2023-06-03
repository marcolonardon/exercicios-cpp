#include <stdio.h>
#include <stdlib.h>

int n, menor, posicao;
main()
{
    scanf("%i", &n);
    int x[n];

    for (int i = 0; i < 1; i++)
    {
        scanf("%i", &x[i]);
        menor = x[i];
        posicao = i;
    }

    for (int i = 1; i < n; i++)
    {
        scanf("%i", &x[i]);
        if (x[i] < menor)
        {
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %i\nPosicao: %i\n", menor, posicao);
}