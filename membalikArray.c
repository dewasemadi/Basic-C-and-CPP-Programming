#include <stdio.h>
#define size 200

int main()
{
    int n, num[size], wadah;
    scanf("%d", &n);
    // baca semua inputan
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    // balik array
    for (int i = 0; i < n / 2; i++)
    {
        wadah = num[i];
        num[i] = num[n - i - 1];
        num[n - i - 1] = wadah;
    }
    // cetak array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}