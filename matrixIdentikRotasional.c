#include <stdio.h>
#define size 100

void flipHorizontal(int num[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int gelas = num[i][j];
            num[i][j] = num[i][n - j - 1];
            num[i][n - j - 1] = gelas;
        }
    }
}

void flipVertikal(int num[size][size], int m, int n)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n / 2; i++)
        {
            int gelas = num[i][j];
            num[i][j] = num[n - i - 1][j];
            num[n - i - 1][j] = gelas;
        }
    }
}

void transpose(int num[size][size], int hasil[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // tukar baris jadi kolom
            hasil[j][i] = num[i][j];
        }
    }
}

void cetak(int num[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", num[i][j]);
            // cek spasi dan newline
            if (j == n - 1)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }
}

int main()
{
    int n, num[size][size], hasil[size][size], rotation;
    scanf("%d", &n);
    // baca input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    // putaran matrix yang dimintaaa
    scanf("%d", &rotation);
    switch (rotation)
    {
    case 0:
        cetak(num, n, n);
        break;
    case 90:
        transpose(num, hasil, n, n);
        flipVertikal(hasil, n, n);
        cetak(hasil, n, n);
        break;
    case 180:
        flipHorizontal(num, n, n);
        flipVertikal(num, n, n);
        cetak(num, n, n);
        break;
    case 270:
        transpose(num, hasil, n, n);
        flipHorizontal(hasil, n, n);
        cetak(hasil, n, n);
        break;
    }
    return 0;
}