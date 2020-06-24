#include <stdio.h>
#include <stdlib.h>

//font: https://www.ic.unicamp.br/~ra069320/PED/MC102/1s2008/Apostilas/Cap10.pdf

struct lista
{
    int info;
    struct lista *prox;
};

typedef struct lista Lista;

//função de inicilização
Lista *inicializa(void)
{
    return NULL;
}

//insere no inicio retorna a lista atualizada
Lista *insere(Lista *l, int i)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

//Função pra printar o nó na tela.
void imprime(Lista *l)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
        printf("%d ", p->info);
    printf("\n");
}

int vazia(Lista *l)
{
    // if (l == NULL)
    //     return 1;
    // else
    //     return 0;
    return (l == NULL);
}

Lista *busca(Lista *l, int v)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->info == v)
            return p;
        return NULL;
    }
}

Lista *retira(Lista *l, int v)
{
    Lista *ant = NULL;
    Lista *p = l;

    //procura o elemento e guardo o anterior
    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        return l; //retira do inicio
    /* retira elemento */
    if (ant == NULL)
        l = p->prox;
    else
        ant->prox = p->prox;

    free(p);
    return l;
}

void libera(Lista *l)
{
    Lista *p = l;

    while (p != NULL)
    {
        Lista *t = p->prox; //guarda a referencia
        free(p);            //libera memoria
        p = t;              //aponta para o proximo
    }
}

int main(void)
{

    Lista *l;

    l = inicializa();

    l = insere(l, 23);
    l = insere(l, 45);
    l = insere(l, 56);
    l = insere(l, 78);

    imprime(l);

    l = retira(l, 45);

    imprime(l);

    libera(l);

    return 0;
}