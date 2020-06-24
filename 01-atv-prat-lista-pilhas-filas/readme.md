# Relatório

## 1 - Primeira Implementação

A definição da TAD da lista encadeada ficou da seguinte forma:

**Implementação com Ponteiro**

```c
struct lista
{
    int dado;
    struct lista *prox;
};

typedef struct lista Lista;
```

**Implementação com Vetor**

```c
int lista[10];
int cauda = 0;
int cabeca = 0;
```

**Implementação Duplamente encadeada**

```c
typedef struct _no
{
    void *data;
    struct _no *prox;
} No;

typedef struct _empregado
{
    char nome[32];
    unsigned int idade;
} Empregado;

typedef struct _listaLigada
{
    No *cabeca, *calda, *atual, *ant;
} ListaLigada;
```

**Para inicilizar e inserir**

```c
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
```

**Para inserir na cauda e cabeça utilizando vetor**

```c

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

```

**Para inserir utilizando no/ponteiro**

```c
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
```

## 1 - Primeira Pilha

**TAD da Pilha, seguindo o padrão anterior de lista encadeada**

```c
typedef struct pilha Pilha;

struct pilha
{
    int dado;
    char *prox;
};
```

**Inserindo um item na Pilha**

```c
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
```

**Removendo um item da Pilha**

```c
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
```
