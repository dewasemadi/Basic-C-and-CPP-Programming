#include <stdio.h>
#define size 50000

int main()
{
    int T, N, nilai, count;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int num[size] = {0};
        scanf("%d", &N);
        for (int j = 1; j < N; j++)
        {
            scanf("%d", &nilai);
            num[nilai]++;
        }

        for (int k = 1; k <= N; k++)
        {
            if (num[k] == 0)
            {
                count = k;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}