#include <stdio.h>
#define MAX 5

#define ERRO_LISTA_CHEIA -1
#define ERRO_LISTA_VAZIA -2
#define ERRO_LISTA_POSICAO -3

//font: http://www.inf.ufsc.br/~aldo.vw/estruturas/Capitulo2/EstruturasLista.html#Modelagem%20da%20Lista

struct lista
{
    int dados[MAX];
    int ultimo;
};

typedef struct lista Lista;

void inicializa(Lista *l)
{
    l->ultimo = -1;
    for (int i = 0; i < MAX; i++)
        l->dados[i] = 0;
}

void libera(Lista *l)
{
    l->ultimo = -1;
}

int cheia(Lista *l)
{
    if (l->ultimo == MAX - 1)
        return 1;
    else
        return 0;
}

int vazia(Lista *l)
{
    if (l->ultimo == -1)
        return 1;
    else
        return 0;
}

int adiciona(Lista *l, int v)
{
    if (cheia(&l))
    {
        return ERRO_LISTA_CHEIA;
    }
    else
    {
        l->ultimo = l->ultimo + 1;
        l->dados[l->ultimo] = v;
        return l->ultimo;
    }
}

int retira(Lista *l)
{
    if (vazia(&l))
    {
        return ERRO_LISTA_VAZIA;
    }
    else
    {
        l->ultimo = l->ultimo - 1;
        return l->dados[l->ultimo + 1];
    }
}

void imprime(Lista *l)
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", l->dados[i]);
    }
    printf("\n");
}

int main(void)
{
    Lista l;

    inicializa(&l); //passa via referencia

    adiciona(&l, 10);
    adiciona(&l, 11);
    adiciona(&l, 121);

    imprime(&l);

    return 0;
}