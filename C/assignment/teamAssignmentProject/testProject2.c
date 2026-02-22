#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUKU 500
#define MAX_HISTORY 500
#define FILE_BUKU "databuku.txt"
#define FILE_HISTORY "history.txt"

typedef struct
{
    char kode[10];
    char nama[50];
    char jenis[30];
    double harga;
} Buku;

typedef struct
{
    char kodeBuku[10];
    int jumlahTerjual;
    double totalHarga;
} History;

Buku daftarBuku[MAX_BUKU];
History daftarHistory[MAX_HISTORY];

int jumlahBuku = 0;
int jumlahHistory = 0;

void loadBuku();
void saveBuku();

void inputBuku();
void viewBuku();
void deleteBuku();

void loadHistory();
void saveHistory();
void viewHistory();
void inputTransaksi();
void deleteHistory();

void exitProgram();

void sortSelection();
void sortByName();
void sortByPrice();
void sortByCode();

int validateIntInput(int min, int max);
void clearInputBuffer();

int main()
{
    int menu;

    loadBuku();
    loadHistory();

    do
    {
        printf("\n=== SISTEM MANAJEMEN TOKO BUKU ===\n");
        printf("\nPilih menu (1-7), input 6 untuk menyimpan perubahan data. \n");
        printf("1. Input Data Buku\n");
        printf("2. View History Transaksi\n");
        printf("3. View Data Buku\n");
        printf("4. Delete History Transaksi\n");
        printf("5. Delete Buku\n");
        printf("6. Save Data dan Exit\n");
        printf("7. Input Transaksi Penjualan\n");
        printf("8. Urutkan Data\n");
        printf("Pilih menu: ");

        menu = validateIntInput(1, 8);

        switch (menu)
        {
        case 1:
            inputBuku();
            break;
        case 2:
            viewHistory();
            break;
        case 3:
            viewBuku();
            break;
        case 4:
            deleteHistory();
            break;
        case 5:
            deleteBuku();
            break;
        case 6:
            exitProgram();
            break;
        case 7:
            inputTransaksi();
            break;
        case 8:
            sortSelection();
            break;
        }

    } while (menu != 6);

    return 0;
}

/* ================= BUKU ================= */

void loadBuku()
{
    FILE *file = fopen(FILE_BUKU, "r");
    if (file == NULL)
        return;

    jumlahBuku = 0;
    while (fscanf(file, "%[^|]|%[^|]|%[^|]|%lf\n",
                  daftarBuku[jumlahBuku].kode,
                  daftarBuku[jumlahBuku].nama,
                  daftarBuku[jumlahBuku].jenis,
                  &daftarBuku[jumlahBuku].harga) == 4)
    {
        jumlahBuku++;
    }

    fclose(file);
}

void saveBuku()
{
    FILE *file = fopen(FILE_BUKU, "w");
    if (file == NULL)
        return;

    for (int i = 0; i < jumlahBuku; i++)
    {
        fprintf(file, "%s|%s|%s|%.2lf\n",
                daftarBuku[i].kode,
                daftarBuku[i].nama,
                daftarBuku[i].jenis,
                daftarBuku[i].harga);
    }

    fclose(file);
}

void inputBuku()
{
    Buku b;

    printf("\nINPUT DATA BUKU\n");

    printf("Nama Buku  : ");
    fgets(b.nama, sizeof(b.nama), stdin);
    b.nama[strcspn(b.nama, "\n")] = 0;

    printf("Jenis Buku : ");
    fgets(b.jenis, sizeof(b.jenis), stdin);
    b.jenis[strcspn(b.jenis, "\n")] = 0;

    printf("Harga Buku : ");
    scanf("%lf", &b.harga);
    clearInputBuffer();

    sprintf(b.kode, "BK%03d", jumlahBuku + 1);

    daftarBuku[jumlahBuku++] = b;

    printf("\nData buku berhasil ditambahkan! Kode: %s\n", b.kode);
}

void viewBuku()
{
    if (jumlahBuku == 0)
    {
        printf("\nData buku kosong.\n");
        return;
    }

    printf("\nDAFTAR DATA BUKU\n");
    printf("%-5s %-8s %-25s %-15s %-10s\n",
           "No", "Kode", "Nama", "Jenis", "Harga");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < jumlahBuku; i++)
    {
        printf("%-5d %-8s %-25s %-15s Rp %.2lf\n",
               i + 1,
               daftarBuku[i].kode,
               daftarBuku[i].nama,
               daftarBuku[i].jenis,
               daftarBuku[i].harga);
    }
}

void deleteBuku()
{
    if (jumlahBuku == 0)
    {
        printf("\nData buku masih kosong.\n");
        return;
    }

    viewBuku();
    printf("\nMasukkan index buku yang akan dihapus (1-%d): ", jumlahBuku);
    int index = validateIntInput(1, jumlahBuku);
    index--;

    for (int i = index; i < jumlahBuku - 1; i++)
    {
        daftarBuku[i] = daftarBuku[i + 1];
    }

    jumlahBuku--;

    printf("\nData Successfully deleted..\n");
}

/* ================= HISTORY ================= */

void loadHistory()
{
    FILE *file = fopen(FILE_HISTORY, "r");
    if (file == NULL)
        return;

    jumlahHistory = 0;
    char line[256];

    while (fgets(line, sizeof(line), file))
    {
        if (sscanf(line, "%[^|]|%d|%lf",
                   daftarHistory[jumlahHistory].kodeBuku,
                   &daftarHistory[jumlahHistory].jumlahTerjual,
                   &daftarHistory[jumlahHistory].totalHarga) == 3)
        {
            jumlahHistory++;
        }
    }

    fclose(file);
}

void saveHistory()
{
    FILE *file = fopen(FILE_HISTORY, "w");
    if (file == NULL)
        return;

    for (int i = 0; i < jumlahHistory; i++)
    {
        fprintf(file, "%s|%d|%.2lf\n",
                daftarHistory[i].kodeBuku,
                daftarHistory[i].jumlahTerjual,
                daftarHistory[i].totalHarga);
    }

    fclose(file);
}

void viewHistory()
{
    if (jumlahHistory == 0)
    {
        printf("\nHistory transaksi kosong.\n");
        return;
    }

    printf("\nDAFTAR HISTORY TRANSAKSI\n");
    printf("%-5s %-10s %-15s %-15s\n",
           "No", "Kode", "Jumlah", "Total");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < jumlahHistory; i++)
    {
        printf("%-5d %-10s %-15d Rp %.2lf\n",
               i + 1,
               daftarHistory[i].kodeBuku,
               daftarHistory[i].jumlahTerjual,
               daftarHistory[i].totalHarga);
    }
}

/* ================= TRANSAKSI ================= */

void inputTransaksi()
{
    if (jumlahBuku == 0)
    {
        printf("\nData buku kosong. Input buku terlebih dahulu.\n");
        return;
    }

    History h;
    char kodeCari[10];
    int ditemukan = 0;
    double harga = 0;

    printf("\nINPUT TRANSAKSI PENJUALAN\n");
    printf("Masukkan Kode Buku : ");
    fgets(kodeCari, sizeof(kodeCari), stdin);
    kodeCari[strcspn(kodeCari, "\n")] = 0;

    for (int i = 0; i < jumlahBuku; i++)
    {
        if (strcmp(daftarBuku[i].kode, kodeCari) == 0)
        {
            harga = daftarBuku[i].harga;
            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan)
    {
        printf("Kode buku tidak ditemukan!\n");
        return;
    }

    printf("Jumlah Terjual    : ");
    scanf("%d", &h.jumlahTerjual);
    clearInputBuffer();

    strcpy(h.kodeBuku, kodeCari);
    h.totalHarga = h.jumlahTerjual * harga;

    daftarHistory[jumlahHistory++] = h;

    saveHistory();
    printf("\nTransaksi berhasil dicatat.\n");
}

void deleteHistory()
{
    if (jumlahHistory == 0)
    {
        printf("\nHistory transaksi kosong. \n");
        return;
    }

    viewHistory();
    printf("\nMasukkan index history transaksi yang akan dihapus (1-%d): \n", jumlahHistory);
    int index = validateIntInput(1, jumlahHistory);
    index--;

    for (int i = index; i < jumlahHistory - 1; i++)
    {
        daftarHistory[i] = daftarHistory[i + 1];
    }

    jumlahHistory--;

    printf("\nData Successfully deleted..\n");
}

void exitProgram()
{
    if (jumlahBuku > 1)
        sortByCode();
    saveBuku();
    saveHistory();
    printf("Data berhasil tersimpan, program selesai.\n");
}

/* ================= SORTING ================= */

void sortSelection()
{
    int menu;
    printf("\n== SORTING PROGRAM ==\n");
    printf("\nPilih salah satu menu (1-2). \n");
    printf("1. Urutkan data berdasarkan nama buku(a-z). \n");
    printf("2. Urutkan data berdasarkan harga(termahal-termurah). \n");
    printf("Pilih menu: ");

    menu = validateIntInput(1, 2);

    switch (menu)
    {
    case 1:
        sortByName();
        break;
    case 2:
        sortByPrice();
        break;
    }

    return 0;
}

void sortByName()
{
    for (int i = 0; i < jumlahBuku - 1; i++)
    {
        for (int j = 0; j < jumlahBuku - 1; j++)
        {
            if (strcmp(daftarBuku[j].nama, daftarBuku[j + 1].nama) > 0)
            {
                Buku temp = daftarBuku[j];
                daftarBuku[j] = daftarBuku[j + 1];
                daftarBuku[j + 1] = temp;
            }
        }
    }
    viewBuku();
}

void sortByPrice()
{
    for (int i = 0; i < jumlahBuku; i++)
    {
        int maxPrice = i;

        for (int j = i + 1; j < jumlahBuku; j++)
        {
            if (daftarBuku[j].harga > daftarBuku[maxPrice].harga)
                maxPrice = j;
        }
        if (maxPrice != i)
        {
            Buku temp = daftarBuku[i];
            daftarBuku[i] = daftarBuku[maxPrice];
            daftarBuku[maxPrice] = temp;
        }
    }
    viewBuku();
}

void sortByCode()
{
    for (int i = 0; i < jumlahBuku - 1; i++)
    {
        for (int j = 0; j < jumlahBuku - 1; j++)
        {
            if (strcmp(daftarBuku[j].kode, daftarBuku[j + 1].kode) > 0)
            {
                Buku temp = daftarBuku[j];
                daftarBuku[j] = daftarBuku[j + 1];
                daftarBuku[j + 1] = temp;
            }
        }
    }
}

/* ================= VALIDATION ================= */

int validateIntInput(int min, int max)
{
    int input;
    while (1)
    {
        if (scanf("%d", &input) != 1)
        {
            printf("Input harus angka: ");
            clearInputBuffer();
            continue;
        }
        if (input < min || input > max)
        {
            printf("Input %d - %d: ", min, max);
            continue;
        }
        clearInputBuffer();
        return input;
    }
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
