#include <stdio.h>

void printdown(int n)
{
    if (n == 0)
        return;
    {

        printf("%d", n);
        printdown(n - 1);
    }
}

int main()
{
    printdown(5);
    return 0;
}