#include <stdio.h>

int linearSearch(int value[], int n, int key) // function declaration
{
    // linear search algorithm
    for (int i = 0; i < n; i++)
    {
        if (key == value[i])
        {
            return i;
        }
    }
    return -1;
}
int main(void) // main function
{
    int value[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // assign array's value
    int n = sizeof(value) / sizeof(value[0]);      // assign number of value
    int key;                                       // declare search keyword
    int i;

    printf("input a number: ");
    scanf("%d", &key);               // input search keyword
    i = linearSearch(value, n, key); // call linear search function

    // output search result
    if (i != -1)
        printf("data detected on index %d", i);
    else
        printf("data not found\n");
}