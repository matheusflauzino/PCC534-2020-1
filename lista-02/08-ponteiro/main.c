int main()
{
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    //a) p == &i; b) *p - *q c) **&p d) 3* - *p/(*q)+ 7
    printf("%d\n", p == &i);
    printf("%d\n", *p - *q);
    printf("%d\n", **&p);
    printf("%d\n", *p / (*q) + 7);
    return 0;
}
