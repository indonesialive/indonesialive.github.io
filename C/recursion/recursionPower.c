#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    printf("please input base and exponent, example \(2^3\) type \"2 3\": ");
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));
    return 0;
}