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
    R dt[] = {{"G64220021", "Kamsul Sutara", 3.15},
              {"G64220135", "Indah Astina", 3.58}};
    ofstream out;
    out.open("data.dat", ios::binary | ios::out);
    for (int i = 0; i < 2; i++)
        out.write((char *)&dt[i], sizeof(R));
    out.close();
    return 0;
}