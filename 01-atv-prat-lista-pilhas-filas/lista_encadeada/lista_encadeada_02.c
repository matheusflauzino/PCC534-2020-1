#include <stdio.h>

int lista[10];
int cauda = 0;
int cabeca = 0;

int vazia()
{
    return cauda == -1;
}

int cheia()
{
    return cauda == 10;
}

void inserecauda(int num)
{
    if (!cheia())
    {
        lista[cauda] = num;
        cauda++;
    }
    else
    {
        printf("cheia\n");
    }
}

void inserecabeca(int num)
{
    int i;

    if (!cheia())
    {
        for (i = cauda; i > cabeca; i--)
        {
            lista[i] = lista[i - 1];
        }

        lista[cabeca] = num;
        cauda++;
    }
    else
    {
        printf("cheia\n");
    }
}

void especifica(int pos, int num)
{
    int i;

    if (!cheia())
    {
        for (i = cauda; i > pos; i--)
        {
            lista[i] = lista[i - 1];
        }
        lista[pos] = num;
        cauda++;
    }
    else
    {
        printf("cheia\n");
    }
}

void menorpratras()
{
    int tmp, i;
    int menor;
    int indice;

    menor = lista[cabeca];

    for (i = cabeca; i < cauda; i++)
    {
        if (lista[i] < menor)
        {
            menor = lista[i];
            indice = i;
        }
    }
    tmp = lista[cauda - 1];
    lista[cauda - 1] = menor;
    lista[indice] = tmp;
}

main()
{
    int i;

    inserecauda(10);
    inserecabeca(20);
    inserecabeca(30);
    inserecabeca(40);
    inserecabeca(50);
    inserecabeca(60);
    inserecabeca(70);

    especifica(0, 1000);
    menorpratras();

    for (i = cabeca; i < cauda; i++)
    {
        printf("%d\n", lista[i]);
    }
}