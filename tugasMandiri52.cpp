#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main()
{
    int kode, diskon;
    char jenis;
    long int harga, Hdiskon;

    cout<<"\nJenis: ";
    cin>>jenis;

    cout<<"\nKode: ";
    cin>>kode;

    cout<<"\nHarga: ";
    cin>>harga;

    switch (jenis)
    {
    case 'A':
        diskon=10;
        Hdiskon=harga-(0.10*harga);
        break;
    case 'B':
        diskon=15;
        Hdiskon=harga-(0.15*harga);
        break;
    case 'C':
        diskon=20;
        Hdiskon=harga-(0.20*harga);
        break;
    }

    cout<<"\n Jenis Barang: "<<jenis;
    cout<<"\n Diskon dalam persen (%): "<<diskon;
    cout<<"\n Harga Setelah Diskon: "<<Hdiskon;

    return 0;
}