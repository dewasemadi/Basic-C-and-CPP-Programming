#include <stdio.h>
#define size 200

int main()
{
    int n, num[size], t, indeks;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &indeks);
        printf("%d\n", num[indeks - 1]);
    }
    return 0;
}