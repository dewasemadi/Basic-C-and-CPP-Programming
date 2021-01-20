#include <stdio.h>

int main()
{
    int m, n, a, b;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            // ga usa pake array karena cuma bandingin
            scanf("%d %d", &a, &b);

            // cek apa dia faktornya apa bukan
            if (a % b == 0 || b % a == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            // cek spasi dan newline
            if (j == (n / 2) - 1)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }
    return 0;
}