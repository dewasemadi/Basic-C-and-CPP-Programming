#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;
int main()
{
    string str = "be not to be but to be not";
    stringstream s(str);
    map<string, int> freq;
    while (s.good())
    {
        string token;
        getline(s, token, ' ');
        freq[token]++;
    }
    map<string, int>::iterator p;
    for (p = freq.begin(); p != freq.end(); ++p)
        cout << p->first << " " << p->second << endl;
    return 0;
}
/*
Implementasi dari tabel Hash.
Memiliki 2 elemen data : key (first) dan value (second)

key value
be    3
but   1
not   2
to    2
*/