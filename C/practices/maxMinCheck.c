#include <stdio.h>

int main()
{
    int numbers[5];

    printf("please input five numbers: \n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);

    int max = numbers[0];
    for (int i = 0; i < 4; i++)
        if (numbers[i + 1] >= max)
            max = numbers[i + 1];
    printf("max is %d\n", max);

    int min = numbers[0];
    for (int i = 0; i < 4; i++)
        if (numbers[i + 1] <= min)
            min = numbers[i + 1];
    printf("min is %d\n", min);
    return 0;
}