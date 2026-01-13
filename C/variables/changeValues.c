#include <stdio.h>

int main()
{
    int changedValues = 15;
    int integervar = 10;

    int sum = changedValues + integervar;

    changedValues = integervar;

    printf("%d\n%d\n", changedValues, sum);

    return 0;
}