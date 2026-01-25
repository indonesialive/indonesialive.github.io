#include <stdio.h>
#include <string.h>

int n = 0;
int max = 5;
char input[2];

int main(void)
{
    printf("input \"+\" untuk menambah dan \"-\" untuk mengurangi counter: \n");

    do
    {
        fgets(input, sizeof(input), stdin);
        ;
        {
            if (strcmp(input, "1") == 0)
                n++;
            else if (strcmp(input, "-") == 0)
                n--;
        }
        printf("Current capacity: %d\n", n);

        if (n >= (max))
            printf("FULL CAPACITY");
        getchar();
    } while (n > 0);
}
