#include <stdio.h>
#include <stdlib.h>

//function main
int main(void)
{
    float *v1, *v2, *v3;
    int i, j, sizeV1, sizeV2, total;

    printf("Tamanho do V1: ");
    scanf("%d", &sizeV1);

    v1 = (float *)malloc(sizeV1 * sizeof(float)); //determina o tamanho do vetor

    printf("\nEntre com os valores do V1: ");
    for (i = 0; i < sizeV1; i++)
    {
        scanf("%f", &v1[i]);
    }

    // ------ Percorrendo o vetor e imprimindo os valores ----------
    printf("\n*********** Valores do vetor 1 dinamico ************\n");

    for (i = 0; i < sizeV1; i++)
    {
        printf("%.2f\n", v1[i]);
    }

    // ===================== VETOR 2 =====================

    printf("Tamanho do V2: ");
    scanf("%d", &sizeV2);

    v2 = (float *)malloc(sizeV2 * sizeof(float)); //determina o tamanho do vetor

    printf("\nEntre com os valores do V1: ");
    for (i = 0; i < sizeV2; i++)
    {
        scanf("%f", &v2[i]);
    }

    // ------ Percorrendo o vetor e imprimindo os valores ----------
    printf("\n*********** Valores do vetor 2 dinamico ************\n");

    for (i = 0; i < sizeV2; i++)
    {
        printf("%.2f\n", v2[i]);
    }

    //soma os dois vetores
    total = sizeV1 + sizeV2;
    v3 = (float *)malloc(total * sizeof(float)); //determina o tamanho do vetor

    j = 0; //contador do v3
    for (i = 0; i < sizeV1; i++)
    {
        v3[j] = v1[i];
        j++;
    }

    for (i = 0; i < sizeV2; i++)
    {
        v3[j] = v2[i];
        j++;
    }

    // ------ Percorrendo o vetor e imprimindo os valores ----------
    printf("\n*********** Resultado do V3 ************\n");

    for (i = 0; i < total; i++)
    {
        printf("%.2f\n", v3[i]);
    }

    //liberando o espaço de memória alocado
    free(v1);
    free(v2);
    free(v3);

    return 0;
}