#include <iostream>
using namespace std;

int matrik1[2][2], matrik2[2][2], matrik3[2][2], temp;
int main()
{
    cout << endl
         << "Masukkan elemen matriks pertama : \n";
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cin >> matrik1[x][y];
        }
    }
    cout << endl;

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cout << matrik1[x][y] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    cout << endl
         << "Masukkan elemen matriks kedua : \n";
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cin >> matrik2[x][y];
        }
    }
    cout << endl;

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cout << matrik2[x][y] << "   ";
        }
        cout << endl;
    }

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            matrik3[x][y] = 0;
            for (int z = 0; z < 2; z++)
            {
                temp = matrik1[x][z] * matrik2[z][y];
                matrik3[x][y] = matrik3[x][y] + temp;
            }
        }
    }

    cout << endl;
    cout << "Matrik hasil perkalian :" << endl;
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cout << matrik3[x][y] << "   ";
        }
        cout << endl;
    }
    return 0;
}