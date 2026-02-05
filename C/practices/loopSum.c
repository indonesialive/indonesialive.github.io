#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    printf("please input a number: \n");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
        sum = sum + (i + 1);

    printf("sum of 1 to %d is %d\n", num, sum);

    return 0;
}