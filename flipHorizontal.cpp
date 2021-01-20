#include <iostream>
using namespace std;
#define size 1000
void flipHorizontal(int num[size][size], int m, int n); //prototype
void cetak(int num[size][size], int m, int n);
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
    flipHorizontal(num, m, n);
    cetak(num, m, n);
    return 0;
}

void flipHorizontal(int num[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int gelas = num[i][j];
            num[i][j] = num[i][n - j - 1];
            num[i][n - j - 1] = gelas;
        }
    }
}

void cetak(int num[size][size], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num[i][j];
            // cek spasi dan newline
            if (j == n - 1)
                cout << endl;
            else
                cout << " ";
        }
    }
}