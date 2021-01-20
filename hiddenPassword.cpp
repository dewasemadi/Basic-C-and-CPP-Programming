#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t, n, index;
    char tuples[100][7], manuscript[65];
    cin >> t;
    while (t--)
    {
        cin >> n;
        // baca tuples
        for (int i = 0; i < n; i++)
        {
            cin >> tuples[i];
        }

        cin >> manuscript;
        for (int i = 0; i < n; i++)
        {
            index = 0;
            for (int j = 0; j < 6; j++)
            {
                index |= tuples[i][j] & (1 << j);
            }
            cout << manuscript[index];

            index = 0;
            for (int j = 0; j < 3; j++)
                index |= (tuples[i][j] & (1 << (j + 3))) >> 3;
            for (int j = 3; j < 6; j++)
                index |= (tuples[i][j] & (1 << (j - 3))) << 3;

            cout << manuscript[index];
        }
        cout << endl;
    }
    return 0;
}