#include <stdio.h>

void main()
{
    int a = 15;
    int b = 15;
    int *ptra = &a;
    int *ptrb = &b;

    printf("%p\n", ptra);
    printf("%p\n", ptrb);
    printf("%d\n", *ptra);
    printf("%d\n", *ptrb);
}