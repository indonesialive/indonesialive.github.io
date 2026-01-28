#include <stdio.h>
#include <windows.h>

int a = 50;
int b = 3800;

int main()
{
    char lyric1[] = "Jangan katakan kisahmu saat ini...\n";

    for (int i = 0; lyric1[i] != '\0'; i++)
    {
        printf("%c", lyric1[i]);
        fflush(stdout); // WAJIB biar langsung tampil
        Sleep(a);       // jeda per huruf
    }
    Sleep(b);
    char lyric2[] = "Karena bisa sakiti hatiku\n";

    for (int i = 0; lyric2[i] != '\0'; i++)
    {
        printf("%c", lyric2[i]);
        fflush(stdout); // WAJIB biar langsung tampil
        Sleep(a);       // jeda per huruf
    }
    Sleep(b);
    char lyric3[] = "Kenanglah aku pernah menjaga hatimu\n";

    for (int i = 0; lyric3[i] != '\0'; i++)
    {
        printf("%c", lyric3[i]);
        fflush(stdout); // WAJIB biar langsung tampil
        Sleep(a);       // jeda per huruf
    }
    Sleep(b);
    char lyric4[] = "Meski hanya kau dan aku yang tahu\n";

    for (int i = 0; lyric4[i] != '\0'; i++)
    {
        printf("%c", lyric4[i]);
        fflush(stdout); // WAJIB biar langsung tampil
        Sleep(a);       // jeda per huruf
    }

    return 0;
}
