#include <stdio.h>

float avg(int vetor[], int tamanho)
{
    if (tamanho == 1)
        return (float)vetor[tamanho - 1];
    else
        return ((float)(avg(vetor, tamanho - 1) * (tamanho - 1) + vetor[tamanho - 1]) / tamanho);
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

    printf("%f\n", avg(vet, quant));

    return 0;
}