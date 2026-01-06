#include <stdio.h>

int plusormin(int value)
{
    if (value > 0)
        return 1;
    else if (value == 0)
        return 2;
    else
        return 0;
}
int main()
{
    int value;
    printf("input a value: ");
    scanf("%d", &value);
    int r = plusormin(value);
    if (r == 1)
        printf("positive");
    else if (r == 2)
        printf("zero");
    else
        printf("negative");
    return 0;
}