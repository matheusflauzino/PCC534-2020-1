#include <stdio.h>
#include <stdlib.h>

void carregaMatriz(int m[2][3])
{
    int i; /* contador */
    int j; /* contador */

    /* carrego a matriz */
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Entre m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
}

void imprimeMatriz(int m[2][3])
{
    int i; /* contador */
    int j; /* contador */

    /* escreve a matriz */
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

int main()
{
    int *m; /* matriz de inteiros */

    /* aloco espaço suficiente para a matriz 2 × 3 */
    if (!(m = (int *)malloc(2 * 3 * sizeof(int))))
    {
        printf("Não foi possível alocar a matriz\n");
        exit(0);
    }

    /* carrego a matriz */
    carregaMatriz(m);

    /* imprimo a matriz */
    imprimeMatriz(m);

    /* desaloco a matriz */
    free(m);
    return 0;
}