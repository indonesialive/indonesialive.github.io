#include <stdio.h>
int main(void)
{
    int list[] = {1, 2, 3, 4, 5, 6, 7};
    int key;
    int found = 0;
    printf("input a number: ");
    scanf("%d", &key);

    for (int i = 0; i < 7; i++)
    {
        if (key == list[i])
        {
            printf("data detected on index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("data not found. ");
}