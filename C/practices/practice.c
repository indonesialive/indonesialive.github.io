#include <stdio.h>

int main()
{
    int a[10] = {1, 3, 6, 4, 1, 8, 7, 5, 7, 3};

    int max = a[0];
    for (int i = 0; i < 9; i++)
        if (a[i + 1] > max)
            max = a[i + 1];

    printf("largest number=%d", max);

    return 0;
}