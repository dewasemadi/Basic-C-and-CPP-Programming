#include <iostream>
#include <string>
#include <sstream>
#define size 1000
using namespace std;

struct rec
{
    string teks, target;
};
typedef struct rec R;

int naiveAlgorithm(string target, string teks)
{
    int count = 0, m = target.length(), n = teks.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (teks[i + j] != target[j])
                break;
        }
        if (j == m)
            count++;
    }
    return count;
}

int main()
{
    int n, i = 0;
    string line, temp;
    R list[size];
    cin >> n;
    getline(cin, line); //pura2 baca '\0'
    while (n--)
    {
        getline(cin, line);
        stringstream s(line);

        getline(s, temp, ' ');
        list[i].teks = temp; //ambil teks
        getline(s, temp, '\0');
        list[i].target = temp; //ambil target

        cout << naiveAlgorithm(list[i].target, list[i].teks) << endl;
        i++;
    }
    return 0;
}