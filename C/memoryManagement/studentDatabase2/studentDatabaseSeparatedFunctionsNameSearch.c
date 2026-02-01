// Menyertakan header file
#include <stdio.h>
#include <string.h>

// deklarasi struct
struct student
{
    char name[50];
    int age;
    char regId[6];
};

// fungsi load data dari file
int loadData(struct student a[], int max) // parameter mengambil data dari main
{
    FILE *fptr = fopen("studentData.txt", "r"); // open file in read mode

    int i = 0;

    // parsing baris perbaris data dari file
    while (fscanf(fptr, " %49[^|]|%d|%6[^\n]", a[i].name, &a[i].age, a[i].regId) == 3)
    {
        i++;
    }

    fclose(fptr); // close file
    return i;     // return jumlah data
}

// fungsi linear search
int searchData(struct student a[], int n, char keyName[]) // parameter mengambil data dari main
{

    int found = -1;

    // loop dan compare untuk linear search
    for (int idx = 0; idx < n; idx++)
        if (strcmp(keyName, a[idx].name) == 0)
        {
            found = 1;
            return idx; // return nomor index array of struct
        }
    return found; // return apabila tidak ditemukan
}

// fungsi utama
int main(void)

{
    struct student a[100];        // declare variabel struct
    int count = loadData(a, 100); // memanggil fungsi load data, assign value ke variabel count

    char keyName[49];

    printf("=== PROGRAM DATABASE SISWA ===\n\n");
    printf("Masukkan nama lengkap(gunakan ejaan penulisan nama yang benar): ");
    fgets(keyName, sizeof(keyName), stdin); // input keyword
    keyName[strcspn(keyName, "\n")] = 0;    // menghapus \n (newline) dari string keyword

    int idx = searchData(a, count, keyName); // memanggil fungsi search, assign value ke variabel idx

    // decision if untuk menampilkan data
    if (idx == -1)
        printf("Data tidak ditemukan. \n");
    else
    {
        printf("data ditemukan\n");
        printf("Nama: %s\nUsia: %d tahun\nNomor Registrasi: %s", a[idx].name, a[idx].age, a[idx].regId);
    }
}