#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int jumlahSiswa = 5;
    int i;
    int *nilai = malloc(jumlahSiswa * sizeof(int));

    for (i = 0; i < jumlahSiswa; i++)
    {
        printf("masukkan nilai siswa: ");
        scanf("%d", &nilai[i]);
    }

    printf("Daftar nilai siswa: \n");
    for (i = 0; i < jumlahSiswa; i++)
        printf("%d\n", nilai[i]);

    free(nilai);
    nilai = NULL;
}