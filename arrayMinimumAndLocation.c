#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void array_minloc(const int *data, const int n, int *min, int *loc)
{
    *min = *data;
    *loc = 0;
    for (int i = 1; i < n; i++)
    {
        if (*(data + i) < *min)
        {
            *min = *(data + i);
            *loc = i;
        }
    }
}

int main()
{
    int i, n, *data, min, loc;

    scanf("%d", &n);
    data = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    array_minloc(data, n, &min, &loc);

    printf("minimum: %d pada indeks ke-%d\n", min, loc);
    return 0;
}