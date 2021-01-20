#include <iostream>
#include <string>
#include <cstdlib>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    string karakter;
    set<char> dt;
    int count = 0, sum = 0;
    cin >> karakter;
    int n = karakter.length();
    for (int i = 0; i < n; i++)
    {
        dt.insert(karakter[i]);
    }
    set<char>::iterator p;
    for (p = dt.begin(); p != dt.end(); ++p)
    {
        count += (int)*p;
    }
    cout << count << endl;
    return 0;
}