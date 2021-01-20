#include <stdio.h>
#define size 201
#define cek 200

int main()
{
    int n, m, A[size] = {[0 ... 200] = cek}, B[size] = {[0 ... 200] = cek}, num;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        A[num + 100] = num;
    }
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &num);
        B[num + 100] = num;
    }
    // cetak nilai yang gak sama
    for (int i = 0; i < size; i++)
    {
        if (A[i] != cek)
        {
            if (B[i] == cek)
                printf("%d\n", A[i]);
        }
    }
    return 0;
}