#include <stdio.h>
void counterStatic()
{
    static int n = 10;
    n++;
    printf("%d\n", n);
}

void autoVar()
{
    int n = 10;
    n++;
    printf("%d\n", n);
}

void main()
{
    counterStatic();
    counterStatic();
    autoVar();
    autoVar();
}