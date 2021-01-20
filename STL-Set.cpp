#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> dt;
    int n, nilai;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nilai;
        dt.insert(nilai);
    }
    set<int>::iterator p;
    for (p = dt.begin(); p != dt.end(); ++p)
        cout << *p << endl;
    return 0;
}

/*
Struktur data mirip array, namun elemen bersifat unik
Implementasi dari himpunan dalam matematika
*/