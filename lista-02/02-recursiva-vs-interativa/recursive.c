#include <stdio.h>

// n = 0; r=0
// n = 1; r=1
// n = 2; r=3
// n = 3; r=6
// n = 4; r=10

//faz a soma dos itens anteriores
//3 = 3 + 2 + 1 = 6

//fibonacci function recursive
int func(int n)
{
    if (n == 0)
        return 0;

    return (n + func(n - 1));
}

//function main
int main(void)
{
    int n = -1;

    while (n != 0)
    {
        /* code */
        scanf("%d", &n);
        printf("%d\n\n", func(n));
    }

    return 0;
}