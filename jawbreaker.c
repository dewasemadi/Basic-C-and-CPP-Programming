#include <stdio.h>
#define size 100

int m, n, b, k, num[size][size], target, counter = 0, hasil = 0;

// pake fungsi rekursif
void hitungNilai(int b, int k, int target)
{
    // cek kondisi
    if (b < m && b > -1 && k < n && k > -1 && num[b][k] == target)
    {
        num[b][k] = -1;
        counter++;
        hitungNilai(b - 1, k, target);
        hitungNilai(b + 1, k, target);
        hitungNilai(b, k - 1, target);
        hitungNilai(b, k + 1, target);
    }
}

int main()
{
    scanf("%d %d", &m, &n);
    // baca inputan
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    // letak bola sebagai indeks matriks/koordinat
    scanf("%d %d", &b, &k);
    target = num[b][k];

    hitungNilai(b, k, target);
    hasil = counter * (counter - 1);
    // cek nilainya kosong apa ngga
    if (counter == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", hasil);
    }
    return 0;
}