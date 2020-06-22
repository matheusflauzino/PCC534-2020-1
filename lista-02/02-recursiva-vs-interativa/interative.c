#include <stdio.h>

// n = 0; r=0
// n = 1; r=1
// n = 2; r=3
// n = 3; r=6
// n = 4; r=10

//faz a soma dos itens anteriores
//3 = 3 + 2 + 1 = 6

//function main
int main(void)
{
    int n, result = 0;

    scanf("%d", &n);

    for (int i = n; i > 0; i--) //percorre até zerar e soma seus antecessores
    {
        result += i;
    }

    printf("%d\n\n", result);

    return 0;
}