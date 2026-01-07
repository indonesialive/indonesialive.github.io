#include <stdio.h>

int sum(int value)
{
    if (value == 0)
        return 0;
    return value + sum(value - 1);
}

int main()
{
    int value;
    printf("input value: ");
    scanf("%d", &value);
    int r = sum(value);
    printf("result=%d", r);
    return 0;
}