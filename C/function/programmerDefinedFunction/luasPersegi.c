#include <stdio.h>

int luasPersegi(int panjangSisi)
{
    int luas;
    luas = panjangSisi * panjangSisi;
    return luas;
}

int main(void)
{
    int panjangSisi;
    printf("masukkan panjang sisi(dalam cm): ");
    scanf("%d", &panjangSisi);

    int luas = luasPersegi(panjangSisi);
    printf("luas persegi=%dcm^2", luas);
}