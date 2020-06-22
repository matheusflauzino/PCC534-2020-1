#include <stab.h>

int multiplication(int x, int y)
{
    // se (x > 0 && y > 1)
    //     x += mult(x,--y)
    // senao
    //     se y = 0
    //         0
    //     senao
    //         x
    return (x > 0 && y > 1) ? x += multiplication(x, --y) : (y == 0) ? 0 : x;
}

//function main
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", multiplication(a, b));
    return 0;
}