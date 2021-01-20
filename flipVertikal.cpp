#include <iostream>
using namespace std;
#define size 1000
int num[size][size];

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num[i][j];
        }
    }
    // cetak
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num[i][j];
            if (j == n - 1)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}
