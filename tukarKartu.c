#include <stdio.h>
#include <stdlib.h>
#define size 20000

int main()
{
    int n, num[size], temp = 0, count = 0;
    // baca bil
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    // bubble sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                count++;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
