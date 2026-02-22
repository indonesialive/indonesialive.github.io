#include <stdio.h>

int main()
{
    int x = 12;
    int *p = &x;

    *p = *p + 8;

    printf("%d\n", x);
}
