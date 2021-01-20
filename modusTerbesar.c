#include <stdio.h>
#include <stdlib.h>
#define size 2001

int main()
{
    int n, bil, num[size] = {0}, modus = 0, in;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bil);
        num[bil - 1]++;
    }
    // cari modus
    for (int i = 0; i < size; i++)
    {
        if (num[i] >= modus)
        {
            modus = num[i];
            in = i;
        }
    }
    printf("%d\n", in + 1);
    return 0;
}

/*
1
1
2
3
4
4
*/