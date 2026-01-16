#include <stdio.h>

void main()
{
    int a = 5;
    a &= 3;  // bitwise and
    a |= 3;  // bitwise or
    a >>= 3; // move right/div2^n
    a <<= 3; // move left/multiply2^n

    printf("%d", a);
}