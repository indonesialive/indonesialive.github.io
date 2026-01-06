#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    printf("input two numbers: ");
    scanf("%d %d", &a, &b);
    int mult = multiply(a, b);
    printf("hasil=%d\n", mult);
    return 0;
}