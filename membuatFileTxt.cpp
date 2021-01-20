#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("data.txt", ios::out);

    // tulis data ke file
    out << "G64190001 3.76" << endl;
    out << "G64190002 3.54" << endl;

    // tutup file
    out.close();
    return 0;
}