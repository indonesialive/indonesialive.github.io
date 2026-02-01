#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    char regId[6];
};

int loadData(struct student a[], int max)
{
    FILE *fptr = fopen("studentData.txt", "r");

    int i = 0;

    while (fscanf(fptr, " %49[^|]|%d|%6[^\n]", a[i].name, &a[i].age, a[i].regId) == 3)
    {
        i++;
    }

    fclose(fptr);
    return i;
}

int searchData(struct student a[], int n, char keyRegId[])
{

    int found = -1;

    for (int idx = 0; idx < n; idx++)
        if (strcmp(keyRegId, a[idx].regId) == 0)
        {
            found = 1;
            return idx;
        }
    return found;
}

int main(void)

{
    struct student a[100];
    int count = loadData(a, 100);

    char keyRegId[6];
    printf("masukkan nomor registrasi: ");
    fgets(keyRegId, sizeof(keyRegId), stdin);
    keyRegId[strcspn(keyRegId, "\n")] = 0;

    int idx = searchData(a, count, keyRegId);

    if (idx == -1)
        printf("data tidak ditemukan. \n");
    else
    {
        printf("data ditemukan\n");
        printf("nama: %s\n", a[idx].name);
    }
}