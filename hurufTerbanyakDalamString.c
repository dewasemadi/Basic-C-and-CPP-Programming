#include <stdio.h>
#define size 256

int main()
{
    char ch, new;
    int num = 0, token[size] = {0}, maks = 0;
    scanf("%c", &ch);
    while (ch != '\n')
    {
        num = (int)ch; //convert char ke int
        token[num]++;
        scanf("%c", &ch);
    }
    // cari kemunculan kata terbanyak
    for (int i = 0; i < size; i++)
    {
        if (token[i] > maks)
            maks = token[i];
    }
    // cetak nilai terbanyak
    for (int i = 0; i < size; i++)
    {
        if (token[i] == maks)
        {
            new = (char)i; //convert int ke char
            printf("%c%d", new, maks);
        }
    }
    return 0;
}