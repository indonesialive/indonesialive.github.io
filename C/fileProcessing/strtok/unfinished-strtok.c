#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max 100

struct dataBuku
{
    char kode[6];
    char nama[51];
    char jenis[11];
    int harga;
};

int main()
{
    FILE *fptr = fopen("databaseBuku.txt", "r");
    if (fptr == NULL)
    {
        printf("failed to open file");
        return 1;
    }
    struct dataBuku toko[max];
    int count = 0;
    char line[200];

    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        char *token;

        token = strtok(line, "|");
        strcpy(toko[count].kode, token);

        token = strtok(NULL, "|");
        strcpy(toko[count].nama, token);

        token = strtok(NULL, "|");
        strcpy(toko[count].jenis, token);

        token = strtok(NULL, "|");
        toko[count].harga = atoi(token);

        printf("Kode=%s", toko[0].kode);
    }
    return 0;
}