#include <conio.h>
#include <iostream>

using namespace std;

main()
{
    int tabungan, bunga, uang, jumlah;
    cout<<"Jumlah uang tabungan : Rp. ";
    cin>>jumlah;
    int i = 1;
    for (i = 0; i <=10; i++)
    {
        cout<<"Tabungan Bulan ke- "<<i;
        bunga=jumlah*0.02;
        cout<<"\nBunga : Rp. "<<bunga;
        jumlah=jumlah+bunga;
        cout<<"\nSaldo : Rp. "<<jumlah<<endl;
    }
    
    return 0;
}