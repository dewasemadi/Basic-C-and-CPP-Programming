#include <stdio.h>
#define size 10000

int main()
{
    int n, nilai, num[size] = {0}, find, count, max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nilai);
        num[nilai]++;
    }
    // nilai yang akan dihitung jumlahny
    scanf("%d", &find);
    for (int j = 0; j < size; j++)
    {
        if (find == j)
        {
            max = num[j];
        }
    }
    printf("%d", max);
    return 0;
}