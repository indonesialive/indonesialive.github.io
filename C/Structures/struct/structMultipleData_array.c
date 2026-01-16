#include <stdio.h>

struct studentData
{
    char nim[5];
    char nama[41];
    int umur;
};

void main()
{
    struct studentData list[3] =
        {{"1000", "Taufik Hidayat", 21},
         {"1001", "Susi Susanti", 22},
         {"1002", "Tommy Sugiarto", 20}};

    printf(">>>DATABASE MAHASISWA<<<\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d.\nNIM: %s\n", i + 1, list[i].nim);
        printf("Nama: %s\n", list[i].nama);
        printf("Umur: %d tahun\n\n", list[i].umur);
    }
}
