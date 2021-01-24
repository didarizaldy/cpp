#include <iostream>

using namespace std;

int main()
{
    int matriks1[10][10], matriks2[10][10], hasil[10][10];
    int i, j, k, m, n, p, q, jumlah = 0;
    cout << "Masukkan Jumlah baris matriks pertama : ";
    cin >> m;
    cout << "Masukkan Jumlah kolom matriks pertama : ";
    cin >> n;
    cout << endl;

    cout << "Masukkan Jumlah baris matriks kedua : ";
    cin >> p;
    cout << "Masukkan Jumlah kolom matriks kedua : ";
    cin >> q;

    if (n != p)
    {
        cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
    }
    else
    {
        cout << "Masukkan elemen matriks pertama: \n";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> matriks1[i][j];
            }
        }

        cout << "Masukkan elemen matriks kedua: \n";
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                cin >> matriks2[i][j];
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                for (k = 0; k < q; k++)
                {
                    jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }

        cout << "Hasil Perkalian matriks: \n";
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}