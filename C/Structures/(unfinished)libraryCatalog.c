#include <stdio.h>

typedef struct
{
    char judul[50];
    int tahunTerbit;
    union
    {
        char buku[5];
        char majalah[8]
    } jenis
} dataKatalog;

void main()
{
    dataKatalog collection1;
    printf("masukkan judul: ");
    scanf("%[^\n]", collection1.judul);
    printf("masukkan tahun terbit: ");
    scanf("%d", &collection1.tahunTerbit);
    int choice;
    printf("masukkan jenis koleksi, 1 untuk buku, 2 untuk majalah: ");
    scanf("%d", &choice);
}