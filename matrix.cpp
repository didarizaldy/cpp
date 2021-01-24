#include <iostream>

using namespace std;

int main()
{
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, jumlah = 0;

    cout << endl
         << "Masukkan elemen matriks pertama : \n";
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            cin >> matriks1[i][j];
        }
    }

    cout << endl
         << "Masukkan elemen matriks kedua : \n";
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            cin >> matriks2[i][j];
        }
    }
    cout << endl;

    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            for (k = 1; k <= 2; k++)
            {
                jumlah = jumlah + matriks1[i][k] + matriks2[k][j];
            }
            hasil[i][j] = jumlah;
            jumlah = 0;
        }
    }

    cout << "Hasil penjumlahan matriks : \n";
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
