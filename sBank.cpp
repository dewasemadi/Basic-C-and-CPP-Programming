#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin.ignore();
        map<string, int> m;
        while (n--)
        {
            string number;
            getline(cin, number);
            m[number]++;
        }
        map<string, int>::iterator p;
        for (p = m.begin(); p != m.end(); p++)
        {
            cout << p->first << " " << p->second << endl;
        }
    }
    return 0;
}