#include <stdio.h>

int main()
{
    int N, m, n;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d %d", &m, &n);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i % 2 != 0 && j % 2 == 0)
                    printf(".");
                else if (i % 2 == 0 && j % 2 != 0)
                    printf(".");
                else
                    printf("*");
            }
            printf("\n");
        }
        if (i < N)
            printf("\n");
    }
    return 0;
}