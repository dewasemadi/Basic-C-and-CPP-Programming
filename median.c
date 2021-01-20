#include <stdio.h>
#include <stdlib.h>

int num[2000000] = {0};
int num2[5000000] = {0};

int main()
{
    int n, bil, sum = 0, z = 0;
    float median;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bil);
        num[bil + 8000]++;
    }
    // sorting
    for (int i = 0; i < 16001; i++)
    {
        if (num[i] > 0)
        {
            sum += num[i];
            for (int j = 0; j < num[i]; j++)
            {
                num2[z] = i - 8000;
                z++;
            }
        }
    }

    // mencari median
    // kalo n data ganjil
    if (n % 2 != 0)
    {
        median = num2[n / 2];
        printf("%.2f\n", median);
    }
    // kalo n data genap
    else
    {
        // kalo data genap berarti
        // 1 2 3 4 5 6
        // (3 + 4)/2
        median = (float)((num2[(n / 2) - 1]) + (num2[n / 2])) / 2;
        printf("%.2f\n", median);
    }
    return 0;
}
