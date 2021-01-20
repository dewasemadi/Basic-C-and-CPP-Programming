#include <stdio.h>
#define size 100000

int fillPrefixSum(int num[size], int p, int prefixSum[size])
{
    prefixSum[0] = 0;
    int newPrefix[size], counter = 0;
    // penjumlaham elemen sebelum dan setelahnya, nilai pertama 0
    for (int i = 0; i <= p; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + num[i - 1];
        // -47
        newPrefix[i] = prefixSum[i] - 47;
    }
    // loop apakah ada nilai yang sama setelah dikurangin 47
    for (int i = 0; i <= p; i++)
    {
        for (int j = 0; j <= p; j++)
        {
            if (newPrefix[i] == prefixSum[j])
            {
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int n, p, q, num[size], prefixSum[size], hasil;
    scanf("%d", &n);
    while (n--)
    {
        // baca n data
        scanf("%d", &p);
        for (int i = 0; i < p; i++)
        {
            scanf("%d", &num[i]);
            // kalo semua num di input, panggil fungsi prefix sum
            if (i == p - 1)
            {
                hasil = fillPrefixSum(num, p, prefixSum);
            }
        }
        printf("%d\n", hasil);
    }
    return 0;
}

/*
input
2 7 1 8 2 8 1 8 2 8 4 5 9
0 2 9 10 18 20 28 29 37 39 47 51 56 65 => prefix sum
-47 -45 -38 -37 -29 -27 -19 -18 -10 -8 0 4 9 18 => prefix sum baru setelah dikurangin 47

cek, apakah ada prefix sum baru = prefix sum? kalo ada, counter 1
*/