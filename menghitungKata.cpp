#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string line, kata;
    map<string, int> freq;
    cin >> n;
    while (getline(cin, line))
    {
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        line.erase(remove(line.begin(), line.end(), '.'), line.end()); //buang titik
        line.erase(remove(line.begin(), line.end(), '?'), line.end()); //buang tanda tanya
        line.erase(remove(line.begin(), line.end(), ','), line.end()); //buang koma
        stringstream s(line);
        string term;
        while (s.good())
        {
            getline(s, term, ' ');
            freq[term]++;
        }
    }
    map<string, int>::iterator p;
    int count = 0;
    for (p = freq.begin(); p != freq.end(); p++)
    {
        if (p->second > n)
            // cout << p->first << " " << p->second << endl;
            count++;
    }
    cout << count << endl;
    return 0;
}
