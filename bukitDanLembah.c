#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define size 100001

int main()
{
    long int n, nilai, num[size] = {0}, max = 0, z = 0, y = 0;
    long int newNumber[size] = {0};
    scanf("%d", &n);
    // baca data
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &nilai);
        // hapus kalo ada 2 input yang sama
        if (z > 0 && nilai == num[z - 1])
        {
            continue;
        }
        num[z++] = nilai;
    }

    for (int i = 0; i < z; i++)
    {
        bool penting = false;
        // cari ujung ketinggian
        if (i == 0 || i == z - 1)
        {
            penting = true;
        }
        // cari bukit
        if (num[i - 1] < num[i] && num[i] > num[i + 1])
        {
            penting = true;
        }
        // cari lembah
        if (num[i - 1] > num[i] && num[i] < num[i + 1])
        {
            penting = true;
        }
        // kalo penting true, num[i] masuk ke wadah baru
        if (penting)
        {
            newNumber[y++] = num[i];
        }
    }

    int selisih;
    for (int i = 0; i < y; i++)
    {
        selisih = fabs(newNumber[i] - newNumber[i - 1]);
        // cari selisih terbesar
        if (selisih > max)
        {
            max = selisih;
        }
    }
    printf("%ld\n", max);
    return 0;
}
