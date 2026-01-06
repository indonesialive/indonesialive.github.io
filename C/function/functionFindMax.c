#include <stdio.h>

int max(int a, int b)
{
    int m = a;
    if (b > a)
        m = b;
    return m;
}

int main()
{
    int maks = max(4, 5);
    printf("max value=%d", maks);
    return 0;
}