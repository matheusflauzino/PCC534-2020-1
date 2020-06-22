#include <stdio.h>

//faz a multimplicação de todos os elementos até chegar ao N
// 2 * 1 = 2
// 3 * (2 * 1) = 6
// 4 * (3 * (2 * 1)) = 16
// 5 * (4 * (3 * (2 * 1))) = 120
int f1(int n)
{
    if (n == 1)
        return 1;

    else
        return (n * +f1(n - 1));
}

//0 = 1
//1 = 1
//2 = (2 - 1) + 2 * (2 -2) = 3
//3 = (3 - 1) + 2 * ( 3 - 2) = 5
//4 = ( (3 - 1) + 2 * ( 3 - 2)) + 2 * ((2 - 1) + 2 * (2 -2)) = 11
//5 = (( (3 - 1) + 2 * ( 3 - 2)) + 2 * ((2 - 1) + 2 * (2 -2)) ) + 2 ((3 - 1) + 2 * ( 3 - 2) ) = 21
int f2(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    else
        return (f2(n - 1) + 2 * f2(n - 2));
}

//function main
int main(void)
{
    int n;
    scanf("%d", &n);
    // printf("%d\n\n", f1(n));
    printf("%d\n\n", f2(n));
    return 0;
}