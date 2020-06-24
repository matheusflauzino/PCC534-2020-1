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
