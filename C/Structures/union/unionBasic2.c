#include <stdio.h>

typedef struct
{
    int usia;
    union
    {
        int kids;
        int adults
    } visitorType
} ticketPrice;

void main()
{
    int usia;
    printf("===Program Pengecekan Tarif Tiket===\n\n");
    printf("Please input your age: ");
    scanf("%d", &usia);

    ticketPrice t1 = {usia, {.kids = 5000}};
    ticketPrice t2 = {usia, {.adults = 10000}};

    if (usia <= 12)
        printf("Your ticket price is Rp%d,00", t1.visitorType.kids);
    else
        printf("Your ticket price is Rp%d,00", t2.visitorType.adults);
}