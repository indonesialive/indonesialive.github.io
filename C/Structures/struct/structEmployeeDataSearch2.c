#include <stdio.h>
#include <string.h>

// deklarasi struktur dan tipe data struktur
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

// deklarasi variabel tipe data struktur (menggunakan array)
{
    struct dataPegawai listEmployee[4] = {

        {"A1101",
         "AMIN NUR MUIS",
         "TOKYO, JAPAN",
         "081234567891",
         "SOFTWARE ENGINEER",
         "D1",
         0},
        {"A1102",
         "CALLYSTA ASYIVA NIZA AULIA TSAQIB",
         "NEW YORK, USA",
         "081234567892",
         "WEB DEVELOPER",
         "D2",
         0},
        {"A1103",
         "FAJRI IRWANDA",
         "LONDON, UK",
         "081234567893",
         "UI DESIGNER",
         "D3",
         0},
        {"A1104",
         "MUHAMMAD DAFFA ADILLAH",
         "SEOUL, SOUTH KOREA",
         "081234567894",
         "UX DESIGNER",
         "D3",
         0},

    };
    // variabel input pencarian data pegawai
    struct dataPegawai hasil;
    char inputnip[6];
    char inputnama[41];
    char inputalamat[51];
    char inputnomorTelepon[16];
    char inputjabatan[20];
    char inputgolongan[3];
    int ditemukan = 0;

    // input pencarian setiap tipe data
    printf(">>>  Program Pencarian Data Pegawai  <<<\n");
    printf("\n");
    printf("Masukkan data berikut, PASTIKAN INPUT KARAKTER MENGGUNAKAN HURUF KAPITAL!: \n");
    printf("Masukkan kode NIP: \n");
    scanf("%s", inputnip);
    printf("Masukkan nama lengkap: \n");
    scanf(" %[^\n]", inputnama);
    printf("Masukkan alamat (kota, negara): \n");
    scanf(" %[^\n]", inputalamat);
    printf("Masukkan nomor telepon(diawali dengan 08): \n");
    scanf("%s", inputnomorTelepon);
    printf("Masukkan jabatan: \n");
    scanf(" %[^\n]", inputjabatan);
    printf("Masukkan golongan: \n");
    scanf("%s", inputgolongan);

    // loop sebanyak jumlah pegawai
    for (int i = 0; i < 4; i++)

    // membandingkan data pegawai dengan input pencarian
    {
        if (strcmp(inputnip, listEmployee[i].nip) == 0 &&
            strcmp(inputnama, listEmployee[i].nama) == 0 &&
            strcmp(inputalamat, listEmployee[i].alamat) == 0 &&
            strcmp(inputnomorTelepon, listEmployee[i].nomorTelepon) == 0 &&
            strcmp(inputjabatan, listEmployee[i].jabatan) == 0 &&
            strcmp(inputgolongan, listEmployee[i].golongan) == 0)
        {
            // variabel menyimpan array index match
            hasil = listEmployee[i];
            // assignment untuk boolean true (data ditemukan)
            ditemukan = 1;
            // menghentikan pencarian
            break;
        }
    }
    // assignment nilai gaji pokok berdasarkan golongan
    if (strcmp(hasil.golongan, "D1") == 0)
        hasil.gajiPokok = 3000000;
    else if (strcmp(hasil.golongan, "D2") == 0)
        hasil.gajiPokok = 2500000;
    else if (strcmp(hasil.golongan, "D3") == 0)
        hasil.gajiPokok = 2000000;

    // print atau cetak output hasil data
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