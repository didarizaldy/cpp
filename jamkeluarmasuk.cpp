#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
      int masuk, keluar, output;
      //masuk adalah jam masuk
      //keluar adalah jam keluar
      //output adalah tampilan akhir perhitungan dari jam masuk dan jam keluar
      cout<<" Jam Masuk : ";
      cin>>masuk;

      cout<<"\n Jam Keluar : ";
      cin>>keluar;

      if (keluar >= masuk)
      {
            output = keluar - masuk;
      } else {
            output = (12-masuk) + keluar;
      }
      cout<<"\n\n Lama bekerja : "<<output;

      return 0;
}
