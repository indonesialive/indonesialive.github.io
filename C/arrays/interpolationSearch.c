#include <stdio.h>

int interpolationSearch(int value[], int n, int key) // function declaration
{
    int low = 0;      // current lowest index value
    int high = n - 1; // current highest index value

    // avoid division by zero (in case all values are equal)
    while (low <= high && key >= value[low] && key <= value[high])
    {
        if (value[high] == value[low])
        {
            if (value[low] == key)
                return low;
            else
                return -1;
        }
        // interpolation search algorithm
        int position = low + ((key - value[low]) * (high - low)) / (value[high] - value[low]);

        if (value[position] == key)
            return position;
        else if (value[position] < key)
            low = position + 1;
        else
            high = position - 1;
    }
    return -1;
}

int main(void) // main function
{
    int value[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // assign array's value
    int n = sizeof(value) / sizeof(value[0]);      // assign number of value
    int key;                                       // declare search keyword
    printf("input a number: ");
    scanf("%d", &key); // input search keyword

    int i = interpolationSearch(value, n, key); // call interpolation search function

    // output search result
    if (i != -1)
        printf("data detected on index %d\n", i);
    else
        printf("data not found\n");
}