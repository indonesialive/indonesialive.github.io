#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    char regId[6];
};

int main(void)

{
    FILE *fptr = fopen("studentData.txt", "r");

    int n = 100;
    struct student a[n];
    int found = 0;
    int i = 0;

    printf("===Pencarian Data Siswa===\n");

    while (fscanf(fptr, " %49[^|]|%d|%6[^\n]", a[i].name, &a[i].age, a[i].regId) == 3)
    {
        i++;
    }

    fclose(fptr);

    char keyRegId[6];
    printf("masukkan nomor registrasi: ");
    fgets(keyRegId, sizeof(keyRegId), stdin);
    keyRegId[strcspn(keyRegId, "\n")] = 0;

    for (int idx = 0; idx < i; idx++)
        if (strcmp(keyRegId, a[idx].regId) == 0)
        {
            printf("data ditemukan\n");
            printf("nama: %s\n", a[idx].name);
            found = 1;
        }

    if (!found)
    {
        printf("data tidak ditemukan. \n");
    }
}