#include <stdio.h>
#include <string.h>

struct dataBuku
{
    char kode[6];
    char nama[51];
    char jenis[11];
    int harga;
};

int add(struct dataBuku a)
{
    FILE *fptr = fopen("databaseBuku.txt", "a");

    struct dataBuku a;
    printf("=== 1. TAMBAH DATA BUKU ===\n");
    printf("Input data baru: \n");
    printf("Kode buku: ");
}
