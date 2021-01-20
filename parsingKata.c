#include <stdio.h>
#include <string.h>
#define size 251

int main()
{
    int n, count;
    char line[size], *temp;
    scanf("%d\n", &n);
    while (n--)
    {
        fgets(line, size, stdin);
        temp = strtok(line, " ,.\n");
        while (temp != NULL)
        {
            count = strlen(temp); //strlen untuk panjang string
            if (count >= 3)
                printf("%s %d\n", temp, count);
            temp = strtok(NULL, " ,.\n");
        }
    }
    return 0;
}