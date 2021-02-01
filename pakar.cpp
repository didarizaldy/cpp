#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int p, q, r;

    mulai:
    system("cls");

    cout << "1.Kemeja\n";
    cout << "2.batik\n";
    cout << "3.Jas\n";
    cout << "4.Kaos\n";
    cout << "5.Jaket\n";
    cout << "6.Kaos\n";
    cout << "7.Celana Bahan\n";
    cout << "8.Jeans 3/4\n";
    cout << "9.Jeans Panjang\n";
    cout << "10.Boxer\n";
    cout << "11.Sendal Jepit\n";
    cout << "12.Fantofel\n";
    cout << "13.Sepatu Sendal\n";
    cout << "14.Sepatu Casual\n";
    cout << "15.Sepatu Sport\n";
    cout << "-------------------\n";
    cout << "Input 1 >>";
    cin >> p;
    cout << "Input 2 >>";
    cin >> q;
    cout << "Input 3 >>";
    cin >> r;
    cout << "-------------------\n";

    //pergi ke gunung
    if ((p == 4 && q == 9) && (r == 13) || (p == 4 && q == 13) && (r == 9) || (p == 9 && q == 4) && (r == 13) || (p == 9 && q == 13) && (r == 4) || (p == 13 && q == 9) && (r == 4) || (p == 13 && q == 4) && (r == 9))
    {
        cout << "Pakaian untuk pergi ke Gunung";
    }

    //Pergi ke kuliah
    else if ((p == 1 && q == 9) && (r == 14) || (p == 1 && q == 14) && (r == 9) || (p == 9 && q == 1) && (r == 14) || (p == 9 && q == 14) && (r == 1) || (p == 14 && q == 1) && (r == 9) || (p == 14 && q == 9) && (r == 1))
    {
        cout << "Pakaian untuk Kuliah";
    }

    //pergi jogging
    else if ((p == 4 && q == 8) && (r == 15) || (p == 4 && q == 15) && (r == 8) || (p == 8 && q == 4) && (r == 15) || (p == 8 && q == 15) && (r == 4) || (p == 15 && q == 4) && (r == 8) || (p == 15 && q == 8) && (r == 4))
    {
        cout << "Pakaian untuk  Jogging";
    }

    //Meeting
    else if ((p == 3 && q == 7) && (r == 12) || (p == 3 && q == 12) && (r == 7) || (p == 7 && q == 3) && (r == 12) || (p == 7 && q == 12) && (r == 3) || (p == 12 && q == 3) && (r == 7) || (p == 12 && q == 9) && (r == 3))
    {
        cout << "Pakaian untuk Meeting";
    }

    //Kondangan
    else if ((p == 2 && q == 7) && (r == 12) || (p == 2 && q == 12) && (r == 7) || (p == 7 && q == 2) && (r == 12) || (p == 7 && q == 12) && (r == 2) || (p == 12 && q == 2) && (r == 7) || (p == 12 && q == 7) && (r == 2))
    {
        cout << "Pakaian untuk kondangan";
    }

    else
    {
        cout << "Maaf, setelan yang anda cari tidak ada... ";
    }

    cin.get();
    cin.get();
    goto mulai;
}
