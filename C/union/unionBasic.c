#include <stdio.h>

union Number
{
    int i;
    float f;
};

int main()
{
    union Number num;
    inf.i = 12;

    printf("%d", num.i);
    return 0;
}