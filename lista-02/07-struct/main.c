#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 2

typedef struct
{
    char titulo[30];
    char autor[15];
    int ano;
} livro;

int main()
{

    livro livros[MAX]; //declara um vetor de livros
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("\n******* Livro *******\n");
        //titulo do livro
        printf("Título do Livro: ");
        fgets(livros[i].titulo, 30, stdin);

        //titulo do livro
        printf("Autor do Livro: ");
        fgets(livros[i].autor, 15, stdin);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        getchar();
    }

    printf("\n*********** Dados ***********\n\n");
    for (i = 0; i < MAX; i++)
    {
        printf("\n******* Livro *******\n");
        //titulo do livro

        printf("Título do Livro: %s\n", livros[i].titulo);
        printf("Autor do Livro: %s\n", livros[i].autor);
        printf("Ano do Livro: %d\n", livros[i].ano);
    }

    return 0;
}