#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    char regId[6];
};

void search()
{
    FILE *fptr = fopen("studentData.txt", "r");

    struct student a;
    char keyRegId[6];
    int found = 0;

    printf("===Pencarian Data Siswa===\n");
    getchar();
    printf("Masukkan nomor registrasi: ");
    fgets(keyRegId, sizeof(keyRegId), stdin);
    keyRegId[strcspn(keyRegId, "\n")] = 0;

    while (fscanf(fptr, " %49[^|]|%d|%6[^\n]", a.name, &a.age, a.regId) != EOF)

    {
        if (strcmp(keyRegId, a.regId) == 0)
        {
            printf("Berikut data hasil pencarian \n");
            printf("Nama: %s\nUsia: %d\n\n", a.name, a.age);
            found = 1;
            break;
        }
    }
    if (found != 1)
        printf("Data pencarian tidak ditemukan\n\n");
    fclose(fptr);
}

void addData()
{
    FILE *fptr = fopen("studentData.txt", "a");

    struct student a;
    printf("===2. Tambah Data Siswa===\n");
    printf("Masukkan data siswa baru: \n");
    getchar();
    printf("Nama: ");
    fgets(a.name, sizeof(a.name), stdin);
    a.name[strcspn(a.name, "\n")] = 0;
    printf("Usia: ");
    scanf("%d", &a.age);
    getchar();
    printf("Nomor Registrasi: ");
    fgets(a.regId, sizeof(a.regId), stdin);
    a.regId[strcspn(a.regId, "\n")] = 0;

    fprintf(fptr, "%s|%d|%s\n", a.name, a.age, a.regId);

    fclose(fptr);

    printf("Data berhasil ditambahkan.\n\n");
}

void deleteData()
{
    FILE *fptr = fopen("studentData.txt", "r");
    FILE *tempptr = fopen("temp.txt", "w");
    struct student a;
    int found = 0;
    char keyRegId[6];

    getchar();
    printf("===3. Hapus Data Siswa===\n");
    printf("masukkan nomor registrasi siswa yang akan dihapus: ");
    fgets(keyRegId, sizeof(keyRegId), stdin);
    keyRegId[strcspn(keyRegId, "\n")] = 0;

    while (fscanf(fptr, " %49[^|]|%d|%5[^\n]", a.name, &a.age, a.regId) != EOF)
    {
        if (strcmp(a.regId, keyRegId) == 0)

        {
            printf("Data berhasil dihapus\n\n");
            found = 1;
        }
        else
            fprintf(tempptr, " %s|%d|%s\n", a.name, a.age, a.regId);
    }
    if (found != 1)
    {
        fclose(fptr);
        printf("Nomor registrasi belum terdata. \n\n");
    }

    else
    {
        fclose(fptr);
        fclose(tempptr);
        remove("studentData.txt");
        rename("temp.txt", "studentData.txt");
    }
}

int main(void)
{
    int choice;
    do
    {
        printf("===PROGRAM DATA SISWA===\n");
        printf("1. Pencarian\n");
        printf("2. Tambah data\n");
        printf("3. Hapus data\n");
        printf("0. Tutup program\n");
        printf("Masukkan pilihan anda: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            search();
            break;
        case 2:
            addData();
            break;
        case 3:
            deleteData();
            break;
        case 0:
            printf("Terimakasih sudah menggunakan program kami. \n");
            break;
        default:
            printf("MENU TIDAK TERSEDIA, pastikan input sudah benar. \n\n");
            break;
        }
    } while (choice != 0);
    return 0;
}