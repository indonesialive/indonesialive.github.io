#include <stdio.h>

int evenoddcheck(int value)
{
    if (value % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int value;
    printf("please input a number: ");
    scanf("%d", &value);
    if (evenoddcheck(value))
        printf("even");
    else
        printf("odd");
    return 0;
}