#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;
string uppercaseIt(string s);
int bedaString(string a, string b);
bool cekString(string s1, string s2);

int main(int argc, char **argv)
{
    string name1, name2;
    cin >> name1;
    cin >> name2;

    if (cekString(name1, name2) == 1)
        cout << name1 << endl;
    else
        cout << bedaString(name1, name2) << endl;
    return 0;
}

bool cekString(string s1, string s2)
{
    if (uppercaseIt(s1).compare(uppercaseIt(s2)) == 0)
        return true;

    return false;
}

string uppercaseIt(string s)
{
    string converted;
    for (int i = 0; i < s.length(); i++)
        converted += toupper(s[i]);

    return converted;
}

int bedaString(string a, string b)
{
    int n = a.length(), counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= i; j++)
        {
            if (a[i] != b[j])
                counter++;
        }
    }
    return counter;
}