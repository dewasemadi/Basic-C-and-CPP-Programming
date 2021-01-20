#include <stdio.h>
#define size 100

int main()
{
    int n, nilai, num[size][size];
    scanf("%d", &nilai);
    while (nilai != -9)
    {
        // nilai/10 = puluhan
        // nilai%10 = satuan
        num[nilai / 10][nilai % 10]++;
        scanf("%d", &nilai);
    }
    // cetak hasil
    for (int i = 0; i <= 10; i++)
    {
        // cetak dahan
        printf("%2d|", i);
        // cetak daun
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < num[i][j]; k++)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}