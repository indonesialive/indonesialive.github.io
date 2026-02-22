#include <stdio.h> //menyertakan library

// fungsi utama
int main()
{
    int value[5]; // deklarasi array

    printf("Input five numbers: \n");

    // input nilai-nilai array dengan for loop
    for (int i = 0; i < 5; i++)
        scanf("%d", &value[i]);

    // hitung sum nilai-nilai array
    int sum = value[0];
    for (int i = 0; i < 4; i++)
        sum = sum + value[i + 1];
    // hitung average nilai-nilai array
    int average = sum / 5;

    // menampilkan nilai average
    printf("\nAverage value = %d\n", average);

    int count = 0;

    printf("List of numbers above the average value: \n");
    // seleksi dan tampilkan value array diatas average, setiap boolean true menambah nilai variabel count
    for (int i = 0; i < 5; i++)
        if (value[i] > average)
        {
            printf("%d\n", value[i]);
            count++;
        }

    // menampilkan jumlah nilai diatas average
    printf("Total numbers above the average value = %d numbers", count);

    return 0;
}