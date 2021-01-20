#include <stdio.h>
#define size 100001

int main()
{
    int n, num[size], k, x, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &k);
    x = n - k + 1;
    for (int i = 0; i < x; i++)
    {
        max = num[i];
        for (int j = 0; j < k; j++)
        {
            if (num[i + j] > max)
                max = num[i + j];
        }
        printf("%d", max);
        if (i < x - 1)
            printf(" ");
        else
            break;
    }
    printf("\n");
    return 0;
}