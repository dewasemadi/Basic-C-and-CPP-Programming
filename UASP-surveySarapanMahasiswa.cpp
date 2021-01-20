#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, maks = 0;
    string line;
    cin >> n;
    map<string, int> freq;
    getline(cin, line); //pura-pura baca '\0'
    while (n--)
    {
        getline(cin, line);
        freq[line]++;
    }
    // cari maks
    map<string, int>::iterator p;
    for (p = freq.begin(); p != freq.end(); p++)
    {
        if (p->second > maks)
            maks = p->second;
    }
    // cetak roti terbanyak
    for (p = freq.begin(); p != freq.end(); p++)
    {
        if (maks == p->second)
            cout << p->first << endl;
    }
    return 0;
}