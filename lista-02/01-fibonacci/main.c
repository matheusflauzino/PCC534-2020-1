#include <stdio.h>

// F1 = 1
// F2 = 1
// Fn = Fn-1 + Fn-2 para n>2.

//fibonacci function recursive
int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

//function main
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}