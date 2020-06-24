#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

struct pilha
{
    int dado;
    char *prox;
};

void printaLista(char *lista)
{
    Pilha *atual = lista;
    while (atual != NULL)
    {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}

Pilha *criaNo(int dado)
{
    Pilha *novoNo = malloc(sizeof(char));
    novoNo->prox = NULL;
    novoNo->dado = dado;
    return novoNo;
}

Pilha *push(Pilha *pilha, int dado)
{
    Pilha *aux;
    if (pilha == NULL)
    {
        return NULL;
    }
    aux = pilha;
    pilha = criaNo(dado);
    pilha->prox = aux;
    return pilha;
}

int pop(Pilha **pilha)
{
    Pilha *aux;
    aux = *pilha;
    if (*pilha != NULL)
    {
        *pilha = aux->prox;
    }
    return aux->dado;
}

int main()
{
    int i, qtde, dado;
    char **pilha;
    scanf("%d", &qtde);
    scanf("%d", &dado);
    *pilha = criaNo(dado);
    for (i = 0; i < qtde - 1; i++)
    {
        scanf("%d", &dado);
        *pilha = push(*pilha, dado);
        // printaLista(pilha);
    }
    for (i = 0; i < qtde; i++)
    {
        pop(pilha);
        printaLista(*pilha);
    }
    printf("\n");
    return 0;
}