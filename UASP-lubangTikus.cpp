#include <iostream>
#include <algorithm>
using namespace std;

int masukKeLubang(int tikus[], int lubang[], int x, int y)
{
    int max = 0;
    sort(tikus, tikus + x);
    sort(lubang, lubang + y);
    for (int i = 0; i < x; i++)
    {
        if (abs(tikus[i] - lubang[i]) > max)
            max = abs(tikus[i] - lubang[i]);
    }
    return max;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int tikus[m], lubang[m];
    for (int i = 0; i < m; i++)
    {
        cin >> tikus[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> lubang[i];
    }

    int x = sizeof(tikus) / sizeof(tikus[0]);
    int y = sizeof(lubang) / sizeof(lubang[0]);

    int minWaktu = masukKeLubang(tikus, lubang, x, y);

    cout << minWaktu << endl;

    return 0;
}