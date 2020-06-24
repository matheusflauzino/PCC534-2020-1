#include <stdio.h>
#include <stdlib.h>

/** TODO **/
//1 - Inserção na cabeça da lista (primeira posição)
//2 - Inserir na cauda (última posição)
//3 - criaLista  - deve alocar dinamicamente um ponteiro
//4 - Inserir na cabeça
//5 - inserir na calda

struct lista
{
    int dado;
    struct lista *prox;
};

typedef struct lista Lista;

//função de inicilização
Lista *criaLista()
{
    return NULL;
}

//insere no inicio retorna a lista atualizada
Lista *insereNaCauda(Lista *l, int i) //final
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    Lista *aux = (Lista *)malloc(sizeof(Lista));
    novo->dado = i;

    while (l->prox != NULL)
    {
        aux = aux->prox;
    }

    novo->dado = i;
    aux->prox;
    return aux;
}

//insere no inicio retorna a lista atualizada
Lista *insereNaCabeca(Lista *l, int i) //no inicio
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->dado = i;
    novo->prox = l;
    return novo;
}

//Função pra printar o nó na tela.
void imprime(Lista *l)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
        printf("%d ", p->dado);
    printf("\n");
}

int main()
{

    Lista *l;

    l = criaLista();
    l = insereNaCabeca(l, 99);

    // l = insereNaCauda(l, 23);
    // l = insereNaCauda(l, 45);
    // l = insereNaCauda(l, 56);
    // l = insereNaCauda(l, 78);
    imprime(l);

    l = insereNaCauda(l, 23);

    // l = insereNaCabeca(l, 99);

    imprime(l);

    return 0;
}