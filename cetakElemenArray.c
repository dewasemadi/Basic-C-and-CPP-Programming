#include <stdio.h>
#define size 80

int main()
{
    char word[size], a;
    int index, i = 0;

    // baca karakter
    scanf("%c", &a);
    while (a != '\n')
    {
        // simpan ke array
        word[i++] = a;
        scanf("%c", &a);
    }
    // baca inputan selanjutnya
    scanf("%d", &index);
    while (index != -1)
    {
        // cetak langsung nilai array pada index yg dimintak
        printf("%c", word[index]);

        // scan lagi index yang diminta
        scanf("%d", &index);
        // cek kondisi, di akhir isi newline
        if (index == -1)
        {
            printf("\n");
            break;
        }
    }
    return 0;
}