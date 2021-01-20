#include <stdio.h>

int main()
{
    int n;
    char a, b, c;
    scanf("%d\n", &n);
    scanf("%c%c%c", &a, &b, &c);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // cek cetak a kalo j=1 dan i!=n
            if (j == 1 && i != n)
            {
                printf("%c", a);
            }
            else
            {
                // kalo j paling ujung (i) cetak c
                if (j == i)
                    printf("%c", c);
                else
                {
                    // cek kalo ini udah baris paling akhir
                    if (n == i)
                        printf("%c", b);
                    else
                        printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}