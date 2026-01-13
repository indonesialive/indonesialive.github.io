#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;
    char e[4];

    printf("%zu\n", sizeof(a));
    printf("%zu\n", sizeof(b));
    printf("%zu\n", sizeof(c));
    printf("%zu\n", sizeof(d));
    printf("%zu\n", sizeof(e));

    return 0;
}