// menyertakan library
#include <stdio.h>
#include <string.h>

// fungsi cek anagram
int anagramCheck(char word1[50], char word2[50]) // deklarasi fungsi, menerima input dua string
{
    int temp;
    int i, j;

    // hitung dan cek jumlah karakter kedua string
    int lengthWord1 = strlen(word1);
    int lengthWord2 = strlen(word2);
    if (lengthWord1 != lengthWord2)
    {
        return 0; // mengembalikan nilai 0 apabila tidak sama
    }

    // sort word1
    for (i = 0; i < lengthWord1 - 1; i++)
        for (j = 0; j < lengthWord1 - 1; j++)
            if (word1[j] > word1[j + 1])
            {
                temp = word1[j];
                word1[j] = word1[j + 1];
                word1[j + 1] = temp;
            }

    // sort word2
    for (i = 0; i < lengthWord2 - 1; i++)
        for (j = 0; j < lengthWord2 - 1; j++)
            if (word2[j] > word2[j + 1])
            {
                temp = word2[j];
                word2[j] = word2[j + 1];
                word2[j + 1] = temp;
            }

    // membandingkan karakter per karakter kedua string berurutan sesuai index array
    for (i = 0; i < lengthWord1; i++)
        if (word1[i] != word2[i])
        {
            return 0; // mengembalikan nilai 0 apabila tidak sama
        }

    return 1; // mengembalikan nilai 1 apabila expressions sebelumnya tidak ada yang benar dan mengembalikan nilai
}

// fungsi utama
int main()
{
    char word1[50];
    char word2[50];
    printf("input two words: \n");
    // input untuk parameter fungsi
    scanf("%s", &word1);
    scanf("%s", &word2);
    int anagramCheckReturnValue = anagramCheck(word1, word2); // memanggil fungsi(mengambil parameter yang telah diinput), return value assign ke suatu variabel
    // menampilkan output berdasarkan return value fungsi
    if (anagramCheckReturnValue == 0)
        printf("Check result : NOT ANAGRAM");
    else
        printf("Check result : ANAGRAM");

    return 0;
}