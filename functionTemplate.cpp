#include <iostream>
using namespace std;

template <typename T>
T maks(T a, T b)
{
    return a < b ? b : a;
}
int main()
{
    int x1 = 5, y1 = 10;
    double x2 = 10.45, y2 = 5.298;
    string x3 = "bogor", y3 = "jakarta";
    cout << maks<int>(x1, y1) << endl;
    cout << maks(x2, y2) << endl;
    cout << maks<string>(x3, y3) << endl;
    return 0;
}