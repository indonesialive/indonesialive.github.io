#include <stdio.h>

int sumarray(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + sumarray(arr, n - 1);
}

int main()
{
    int n;

    printf("input number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("input value #%d= ", i + 1);
        scanf("%d", &arr[i]);
    }
    int r = sumarray(arr, n);
    printf("sum value is %d", r);
    return 0;
}