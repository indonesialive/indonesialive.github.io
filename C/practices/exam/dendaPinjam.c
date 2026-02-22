#include <stdio.h> //menyertakan library

// fungsi hitung denda
int hitungDenda(int jumlahHariTerlambat) // deklarasi fungsi, menerima parameter jumlah hari keterlambatan
{
    int denda;

    if (jumlahHariTerlambat <= 7)
        denda = 0;
    else if (jumlahHariTerlambat > 14)
        denda = 10000;
    else
        denda = 5000;

    return denda; // fungsi mengembalikan nilai besar denda
}

// fungsi utama
int main()
{
    int jumlahHariTerlambat;

    printf("Input jumlah berapa hari buku terlambat dikembalikan: \n");
    scanf("%d", &jumlahHariTerlambat); // input value untuk parameter

    int denda = hitungDenda(jumlahHariTerlambat); // memanggil fungsi hitungDenda(parameter menggunakan value variabel jumlahHariTerlambat), assign return value ke variabel denda

    printf("Total denda = Rp %d", denda); // menampilkan nilai variabel denda

    return 0;
}