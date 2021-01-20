#include <stdio.h>
#include <math.h>

int n, a, b, i, j, k, z = 0;

void pola_1()
{
    for (j = 0; j < b; j++)
    {
        for (k = 0; k < b; k++)
        {
            if ((j == 0) || (j == b - 1) || (k == 0) || (k == b - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void pola_2()
{
    for (j = 1; j <= b; j++)
    {
        // baris
        for (k = 1; k <= b; k++)
        {
            // pada intinya, baris 1 dan 2 selang seling mencetak bintang dan titik
            if (j % 2 == 0)
            {
                if (k % 2 == 0)
                {
                    printf("*");
                }
                else
                {
                    if (k != b)
                    {
                        printf(" ");
                    }
                }
            }
            else
            {
                if (k % 2 == 0)
                {
                    if (k != b)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}

void pola_3()
{
    for (j = 1; j <= b; j++)
    {
        for (k = 1; k <= b; k++)
        {
            if (j == k || k == (b - j + 1))
            {
                printf("*");
            }
            else
            {
                if (j == (b / 2) + 1)
                {
                    if (k != b && k != b - 1)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    if (k != b)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}

void pola_4()
{
    z = ceil((float)b / 2);
    for (j = 1; j <= b; j++)
    {
        for (k = 1; k <= b; k++)
        {
            if (j > 1 && j == z && b % 2 == 1)
            {
                printf("*");
            }
            else if (j == z || j == z + 1 && b % 2 == 0)
            {
                if (k != b)
                {
                    printf("*");
                }
            }
            else
            {
                if (k % 2 == 1)
                {
                    printf("*");
                }
                else
                {
                    if (k != b)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // a= pola, b=lebar atau tinggi
        scanf("%d %d", &a, &b);
        if (a == 1)
        {
            pola_1();
        }
        else if (a == 2)
        {
            pola_2();
        }
        else if (a == 3)
        {
            pola_3();
        }
        else
        {
            pola_4();
        }
    }
    return 0;
}