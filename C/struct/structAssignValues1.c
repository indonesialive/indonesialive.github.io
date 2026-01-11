#include <stdio.h>
#include <string.h>

struct dataPegawai
{
    char nip[6];
    char nama[21];
    char alamat[51];
    char nomorHp[13];
    char jabatan[11];
    char golongan[3];
    int gajiPokok;
};

int main()
{
    struct dataPegawai dp1;

    strcpy(dp1.nip, "p2788");

    printf("nip: %s", dp1.nip);

    return 0;
}