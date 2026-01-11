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
    struct studentData list[3] =
        {{"1000", "Joko Widodo", 50},
         {"1001", "Prabowo Subianto", 70},
         {"1002", "Gibran Rakabuming", 30}};

    for (int i = 0; i < 3; i++)
    {
        printf("NIM: %s\n", list[i].nim);
        printf("Nama: %s\n", list[i].nama);
        printf("Umur: %d\n", list[i].umur);
    }
    return 0;
}
