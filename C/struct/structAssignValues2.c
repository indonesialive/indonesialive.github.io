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
    struct dataPegawai dp1 =
        {
            "p2788",
            "amin",
            "sleman, diy",
            "081234567890",
            "ceo",
            "d1",
            0};

    if (strcmp(dp1.golongan, "d1") == 0)
    {
        dp1.gajiPokok = 3000000;
    }
    else if (strcmp(dp1.golongan, "d2") == 0)
    {
        dp1.gajiPokok = 2500000;
    }
    else if (strcmp(dp1.golongan, "d3") == 0)
    {
        dp1.gajiPokok = 2000000;
    }

    printf("gaji pokok: %d", dp1.gajiPokok);

    return 0;
}