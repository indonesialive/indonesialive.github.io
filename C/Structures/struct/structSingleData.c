#include <stdio.h>
#include <string.h>

struct studentData
{
    char nim[5];
    char nama[41];
    int umur;
};

int main()
{
    struct studentData e1 = {
        "1000", "Joko Widodo", 50};

    printf("NIM: %s\n", e1.nim);
    printf("Nama: %s\n", e1.nama);
    printf("Umur: %d\n", e1.umur);

    return 0;
}
