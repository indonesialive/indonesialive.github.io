#include <stdio.h>

int main(void)
{
    int jumlahSiswa = 5;
    int i;
    int nilai[5];

    for (i = 0; i < jumlahSiswa; i++)
    {
        printf("masukkan nilai siswa: ");
        scanf("%d", &nilai[i]);
    }

    printf("Daftar nilai siswa: \n");
    for (i = 0; i < jumlahSiswa; i++)
        printf("%d\n", nilai[i]);
}