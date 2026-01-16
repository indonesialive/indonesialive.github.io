#include <stdio.h>

void main()
{
    int myint;
    float myfloat;
    double mydouble;
    char mychar;
    char fivechar[5] = ("abcd");

    printf("%zu\n", sizeof(myint));
    printf("%zu\n", sizeof(myfloat));
    printf("%zu\n", sizeof(mydouble));
    printf("%zu\n", sizeof(mychar));
    printf("%zu\n", sizeof(fivechar));
    printf("%s\n", fivechar);
}