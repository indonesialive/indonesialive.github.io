#include <stdio.h>

void greet(char name[])
{
    printf("Welcome %s\n", name);
}

int main()
{
    greet("Amin");
    greet("Callistya");
    return 0;
}