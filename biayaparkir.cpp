#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{ 
    int masuk, keluar, lama, cost;

    cout<<" Jam Masuk : ";
    cin>>masuk;

    cout<<"\nJam Keluar : ";
    cin>>keluar;

    if (keluar >= masuk)
        lama = keluar - masuk;
    else
        lama = (12 - masuk) + keluar;
    if (lama >2)
        cost = 2000 + ((lama - 2)*500);
    else
        cost = 2000;

    cout<<"\n\n Biaya Parkir Adalah : Rp. "<<cost;
    
    return 0;
}
