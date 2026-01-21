#include <stdio.h>
#include <string.h>

char ch[50];
void inputFgets()
{
    puts("masukkan string: ");
    fgets(ch, sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';
    puts(ch);
}

void main()
{
    inputFgets();
    puts(ch);
}