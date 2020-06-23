#include <stdio.h>

int sum(int vetor[], int atual, int final)
{
    // if (atual == final)
    //     return vetor[atual];
    // else
    //     return vetor[atual] + sum(vetor, ++atual, final);

    return (atual == final) ? vetor[atual] : vetor[atual] + sum(vetor, ++atual, final);
}

//function main
int main(void)
{
    int vet[100];
    int i = 0, quant = 0;

    printf("Digite os numeros (ZERO para terminar): ");
    for (i = 0; i < 100; ++i)
    {
        scanf("%d", &vet[i]);
        if (vet[i] == 0)
            break;
    }
    quant = i;

    printf("%d\n", sum(vet, 0, quant));

    return 0;
}