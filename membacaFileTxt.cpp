#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("data.txt", ios::in);

    string line;
    while (getline(infile, line))
        cout << line << endl;

    infile.close();
    return 0;
}