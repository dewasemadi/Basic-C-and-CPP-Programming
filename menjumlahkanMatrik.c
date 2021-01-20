#include <stdio.h>
#define size 1000
int pos[size][size] = {0};
  
int main()
{
    int N, cek, x1, y1, x2, y2, num, sum;
    scanf("%d", &N);
    while (1)
    {
        scanf("%d", &cek);
        if (cek == -9)
            break;
        if (cek == 1)
        {
            scanf("%d %d %d", &x1, &y1, &num);
            pos[x1][y1] = num;
        }

        // balikin sum ke 0
        sum = 0;
        if (cek == 2)
        {
            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
            // jumlahin nilai yng diminta
            for (int i = x1; i <= x2; i++)
            {
                for (int j = y1; j <= y2; j++)
                {
                    sum += pos[i][j];
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}