#include <stdio.h>
void counterStatic()
{
    static int n = 0;
    printf("%d\n", n);
    n++;
}

void main()
{
    counterStatic();
    counterStatic();
    counterStatic();
}