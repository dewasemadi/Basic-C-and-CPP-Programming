#include <stdio.h>

int min(int a, int b, int c)
{
    int hasil = a;
    if (hasil > b)
        hasil = b;
    if (hasil > c)
        hasil = c;
    return hasil;
}

int main()
{

    int a, n, m;
    scanf("%d", &a);
    for (int d = 0; d < a; d++)
    {
        int x, y;
        int counter = 0;
        scanf("%d %d", &x, &y);
        int arr[x][y], arr2[x][y];
        int input;

        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                scanf("%d", &input);
                arr[j][k] = input;
            }
        }
        for (n = 0; n < x; n++)
            arr2[n][0] = arr[n][0];
        for (m = 0; m < y; m++)
            arr2[0][m] = arr[0][m];
        for (n = 1; n < x; n++)
        {
            for (m = 1; m < y; m++)
            {
                if (arr[n][m] == 1)
                    arr2[n][m] = min(arr2[n][m - 1], arr2[n - 1][m],
                                     arr2[n - 1][m - 1]) +
                                 1;
                else
                    arr2[n][m] = 0;
            }
        }
        int max = arr2[0][0];
        for (n = 0; n < x; n++)
        {
            for (m = 0; m < y; m++)
            {
                if (max < arr2[n][m])
                {
                    max = arr2[n][m];
                    counter++;
                }
            }
        }
        printf("%d ", counter);
    }
    printf("\n");

    return 0;
}