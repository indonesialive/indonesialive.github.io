#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    char keyword[50];
    int found = 0;
    FILE *fptr = fopen("data.txt", "r");
    if (fptr == NULL)
        printf("database failed to open");
    else
        printf("database file opened succesfully");

    printf("Please input keyword: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = 0;

    while (fscanf(fptr, "%s\n", name) != EOF)
    {
        if (strcmp(keyword, name) == 0)
        {
            printf("Data ditemukan");
            found = 1;
            break;
        }
    }
    if (found != 1)
        printf("Data tidak ditemukan");
    fclose(fptr);
}