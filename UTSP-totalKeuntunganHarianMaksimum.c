#include <stdio.h>
#include <limits.h>
#define size 20000

int main()
{
    int n, num[size], max = INT_MIN, maxAkhir = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < n; j++)
    {
        maxAkhir += num[j];
        if (maxAkhir < 0)
        {
            maxAkhir = 0;
        }
        if (max < maxAkhir)
        {
            max = maxAkhir;
        }
    }
    printf("%d\n", max);
    return 0;
}
