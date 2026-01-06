#include <stdio.h>

int rectarea(int side)
{
    int area = side * side;
    int r = area;
    return r;
}

int main()
{
    int side;
    printf("input side length: ");
    scanf("%d", &side);
    int r = rectarea(side);
    printf("rectarea value=%d", r);
    return 0;
}