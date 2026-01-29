#include <stdio.h>

int main(void)
{
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int low = 0, high = 9;
    int mid;
    int key;
    int found = 0;

    printf("input a number: ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (list[mid] == key)
        {
            printf("data detected on index %d", mid);
            found = 1;
            break;
        }
        else if (key < list[mid])
            high = mid - 1;
        else if (key > list[mid])
            low = mid + 1;
    }
    if (!found)
        printf("data not found");
}
