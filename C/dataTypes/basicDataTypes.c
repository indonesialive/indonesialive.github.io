#include <stdio.h>

void main()
{
    int num1 = 12;
    float num2 = 12.12345678901234567890;
    double num3 = 12.12345678901234567890;
    char character1 = 'a';

    printf("%d\n", num1);
    printf("%.20f\n", num2);
    printf("%.20lf\n", num3);
    printf("%c\n", character1);
}