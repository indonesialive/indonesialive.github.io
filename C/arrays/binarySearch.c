#include <stdio.h>

int binarySearch(int value[], int n, int key) // function declaration
{

    int low = 0, high = n - 1;
    int mid;

    // binary search algorithm
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (value[mid] == key)
        {
            return mid;
        }
        else if (key < value[mid])
            high = mid - 1;
        else if (key > value[mid])
            low = mid + 1;
    }
    return -1;
}

int main(void) // main function
{
    int value[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // assiign array's value
    int n = sizeof(value) / sizeof value[0];       // assign number of value
    int key;
    int i;

    printf("input a number: ");
    scanf("%d", &key);               // input search keyword
    i = binarySearch(value, n, key); // call binary search function
    // output search result
    if (i != -1)
        printf("data detected on index %d", i);
    else
        printf("data not found\n");
}