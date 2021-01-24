#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    int b[1000], c[1000], n;
    char a[1000][30];

    cout << "---Menampilkan Nilai dan Rata-Rata Nilai---\n";
    cout << "Dida Rizaldy (19158578)\nTeknik Informatika\n\n";
    cout << "Masukkan banyak data yang ingin dinput = ";
    cin >> n;
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke - " << i + 1 << endl;
        cout << "Masukkan Nama = ";
        scanf(" %[^\n]s", a[i]);
        cout << "Masukkan Nilai 1 = ";
        cin >> b[i];
        cout << "Masukkan Nilai 2 = ";
        cin >> c[i];
    }

    system("clear");
    cout << "Output:\n\n";
    cout << "=======================================================================\n";
    cout << "|  No  |           Nama           |  Nilai 1  | Nilai 2 | Rata - Rata |\n";
    cout << "=======================================================================\n";
    for (int i = 0; i < n; i++)
    {
        cout << "| " << setiosflags(ios::left) << setw(5) << i + 1 << "|";
        cout << " " << setiosflags(ios::left) << setw(25) << a[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(10) << b[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(8) << c[i] << "|";
        cout << " " << setiosflags(ios::left) << setw(12) << (b[i] + c[i]) / 2 << "|";
        cout << "\n=======================================================================\n";
    }
}