#include <stdio.h>

int max(int n, int v[])
{
    if (n == 1)
        return v[0];
    else
    {
        int x;
        x = max(n - 1, v);
        // x é o máximo de v[0..n-2]
        if (x > v[n - 1])
            return x;
        else
            return v[n - 1];
    }
}

//function main
int main(void)
{
    int vet[100];
    int i = 0, quant = 0;

    printf("Digite os numeros (numero negativo para terminar): ");
    for (i = 0; i < 100; ++i)
    {
        scanf("%d", &vet[i]);
        if (vet[i] < 0)
            break;
    }
    quant = i;

    printf("%d\n", max(quant, vet));

    return 0;
}