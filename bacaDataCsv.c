#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 1000

struct mhs
{
    char nama[100], nim[10];
    int usia, jenkel;
    float ip;
};
typedef struct mhs R;

int main()
{
    char line[size], *token;
    R list[size];
    int n = 0, i = 1;
    float sum = 0, average = 0;
    while (fgets(line, size, stdin) != NULL)
    {
        token = strtok(line, ",\"\n");
        strcpy(list[i].nama, token); //ambil nama
        token = strtok(NULL, ",\"\n");
        strcpy(list[i].nim, token); //ambil nim
        token = strtok(NULL, ",\"\n");
        list[i].usia = atoi(token); //ambil usia
        token = strtok(NULL, ",\"\n");
        list[i].jenkel = atoi(token); //ambil jenis kelamin, atoi = array to int
        token = strtok(NULL, ",\"\n");
        list[i].ip = atof(token); //ambil ip, atof = array to float

        n = i++; //pake counter
    }

    //hitung jumlah ip
    for (int i = 0; i <= n; i++)
    {
        sum += list[i].ip;
    }

    // hitung rata2
    average = sum / n;
    printf("%.2f", average);
    for (int i = 0; i <= n; i++)
    {
        if (list[i].ip < average)
            printf("%s\n", list[i].nama);
    }
    return 0;
}