#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n, nilai;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nilai;
        v.push_back(nilai);
    }
    vector<int>::iterator p;
    for (p = v.begin(); p != v.end(); ++p)
        cout << *p << endl;
    return 0;
}

/*
Struktur data mirip array 
Implementasi dari vektor dalam matematika
Pointer ke elemen /objek dari struktur data
Deklarasi iterator mirip namespace
*/