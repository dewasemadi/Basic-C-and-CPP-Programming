#include <iostream>
#include <fstream>
using namespace std;

struct rec
{
    char nim[10];
    char nama[50];
    double ipk;
};
typedef struct rec R;

int main()
{
    ifstream infile("data.dat", ios::binary | ios::in);
    if (!infile)
    {
        cout << "Kesalahan membaca file data!" << endl;
        return 1;
    }
    R dt[2];
    for (int i = 0; i < 2; i++)
        infile.read((char *)&dt[i], sizeof(R));
    infile.close();
    for (int i = 0; i < 2; i++)
        cout << dt[i].nim << " " << dt[i].nama
             << " " << dt[i].ipk << endl;
    return 0;
}