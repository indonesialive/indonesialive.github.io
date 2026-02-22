// menyertakan library
#include <stdio.h>
#include <stdlib.h>

// fungsi utama
int main()
{
    int value;
    int values[50]; // deklarasi array
    int count = 0;  // variabel menyimpan hitungan jumlah data

    FILE *fptr = fopen("data.txt", "r"); // buka file dalam mode 'read'

    // cek apabila file gagal dibuka
    if (fptr == NULL)
    {
        printf("File failed to open. ");
    }

    {
        int i = 0;
        // membaca file baris perbaris dan memasukkan nilai ke array, menambah nilai variabel count setiap iterasi
        while (fscanf(fptr, "%d\n", &value) != EOF)
        {
            values[i] = value;
            i++;
            count++;
        }
    }

    fclose(fptr); // tutup file

    int sum = values[0];
    int average;
    // hitung sum nilai-nilai array
    for (int i = 0; i < count - 1; i++)
        sum = sum + values[i + 1];

    // menampilkan nilai sum
    printf("sum = %d\n", sum);

    // hitung average nilai-nilai array
    average = sum / count;

    // menampilkan nilai average
    printf("average = %d", average);

    return 0;
}