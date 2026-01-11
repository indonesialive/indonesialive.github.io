#include <stdio.h>
#include <string.h>

struct dataPegawai
{
    char nip[6];
    char nama[41];
    char alamat[51];
    char nomorTelepon[16];
    char jabatan[20];
    char golongan[3];
    int gajiPokok;
};

int main()
{
    struct dataPegawai listEmployee[4] = {

        {"A1101",
         "AMIN NUR MUIS",
         "Tokyo, Japan",
         "081234567891",
         "Software Engineer",
         "D1",
         0},
        {"A1102",
         "CALLYSTA ASYIVA NIZA AULIA TSAQIB",
         "New York, USA",
         "081234567892",
         "Web Developer",
         "D2",
         0},
        {"A1103",
         "FAJRI IRWANDA",
         "London, UK",
         "081234567893",
         "UI Designer",
         "D3",
         0},
        {"A1104",
         "MUHAMMAD DAFFA ADILLAH",
         "Seoul, South Korea",
         "081234567894",
         "UX Designer",
         "D3",
         0},

    };
    struct dataPegawai hasil;
    char inputNip[6];
    int ditemukan = 0;

    printf(">>>  Program Pencarian Data Karyawan  <<<\n");
    printf("\n");
    printf("Masukkan kode NIP karyawan: ");
    scanf("%s", inputNip);

    for (int i = 0; i < 4; i++)

        if (strcmp(inputNip, listEmployee[i].nip) == 0)
        {
            hasil = listEmployee[i];
            ditemukan = 1;
            break;
        }

    if (strcmp(hasil.golongan, "D1") == 0)
        hasil.gajiPokok = 3000000;
    else if (strcmp(hasil.golongan, "D2") == 0)
        hasil.gajiPokok = 2500000;
    else if (strcmp(hasil.golongan, "D1") == 0)
        hasil.gajiPokok = 2000000;

    if (ditemukan)
    {
        printf("\nBerikut data karyawan yang anda cari: \n");
        printf("NIP: %s\n", hasil.nip);
        printf("Nama: %s\n", hasil.nama);
        printf("Alamat: %s\n", hasil.alamat);
        printf("Nomor Telepon: %s\n", hasil.nomorTelepon);
        printf("Jabatan: %s\n", hasil.jabatan);
        printf("Golongan: %s\n", hasil.golongan);
        printf("Gaji Pokok: Rp%d\n", hasil.gajiPokok);
    }
    else
    {
        printf("\nData tidak ditemukan\n");
    }
    return 0;
}