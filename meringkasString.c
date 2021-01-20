#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 100000

int main()
{
    char str, word[size];
    int i = 0, n, count[size], maks = 0;
    scanf("%c", &str);
    while (str != '\n')
    {
        word[i] = toupper(str);
        n = ++count[word[i]];
        // cari maks
        if (n > maks)
            maks = n;

        if (word[i] != word[i - 1] && i > 0 || i >= 13)
        {
            count[word[i - 1]] = 0;
            printf("%d%c", maks, word[i - 1]);
            maks = 0;
        }
        scanf("%c", &str);
        i++;
    }
    return 0;
}