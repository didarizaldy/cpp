#include <iostream>

using namespace std;
main()
{
    //variable
    char lagi;
    int clothes;
    int pants;
    int footwear;

//method mulai
awal:
    cout << "-- Daftar Pakaian --" << endl;
    cout << endl;

    //Atasan
    cout << "-- Atasan Pria --" << endl;
    cout << "1.Kemeja" << endl;
    cout << "2.Jaket" << endl;
    cout << "3.Jas" << endl;
    cout << "4.Hoodie" << endl;
    cout << "5.Sweater" << endl;
    cout << "6.Batik" << endl;
    cout << "7.Kaos" << endl;
    cout << endl;

    cout << "-- Atasan Wanita --" << endl;
    cout << "8.Blouse" << endl;
    cout << "9.Blazer" << endl;
    cout << "10.Daster" << endl;
    cout << "11.Dress" << endl;
    cout << "Pilih Jenis Kategori [1-11] = ";
    cin >> clothes;
    cout << "Kamu Memilih : ";

    //Menampilkan atasan
    switch (clothes)
    {
    case 1:
        cout << "Kemeja" << endl;
        break;
    case 2:
        cout << "Jaket" << endl;
        break;
    case 3:
        cout << "Jas" << endl;
        break;
    case 4:
        cout << "Hoodie" << endl;
        break;
    case 5:
        cout << "Sweater" << endl;
        break;
    case 6:
        cout << "Batik" << endl;
        break;
    case 7:
        cout << "Kaos" << endl;
        break;
    case 8:
        cout << "Blouse" << endl;
        break;
    case 9:
        cout << "Blazer" << endl;
        break;
    case 10:
        cout << "Daster" << endl;
        break;
    case 11:
        cout << "Dress" << endl;
        break;

    default:
        cout << "Tidak terdapat dalam kategori !!" << endl;
    }
    cout << endl;

    //Bawahan
    cout << "-- Bawahan --" << endl;
    cout << "1.Jeans" << endl;
    cout << "2.Trackpants" << endl;
    cout << "3.Celana Bahan" << endl;
    cout << "4.Celana Pendek" << endl;
    cout << "Pilih Jenis Kategori [1-4] = ";
    cin >> pants;
    cout << "Kamu Memilih : ";

    //Menampilkan Bawahan
    switch (pants)
    {
    case 1:
        cout << "Jeans" << endl;
        break;
    case 2:
        cout << "Trackpants" << endl;
        break;
    case 3:
        cout << "Celana Bahan" << endl;
        break;
    case 4:
        cout << "Celana Pendek" << endl;
        break;

    default:
        cout << "Tidak terdapat dalam kategori !!" << endl;
    }
    cout << endl;

    //Alas Kaki
    cout << "-- Alas Kaki --" << endl;
    cout << "1.Sendal" << endl;
    cout << "2.Sepatu Pantofel" << endl;
    cout << "3.Sepatu Sendal" << endl;
    cout << "4.Sepatu Casual" << endl;
    cout << "5.Sepatu Sport" << endl;
    cout << "Pilih Jenis Kategori [1-5] = ";
    cin >> footwear;
    cout << "Kamu Memilih : ";

    //Menampilkan alas kaki
    switch (footwear)
    {
    case 1:
        cout << "Sendal" << endl;
        break;
    case 2:
        cout << "Sepatu Pantofel" << endl;
        break;
    case 3:
        cout << "Sepatu Sendal" << endl;
        break;
    case 4:
        cout << "Sepatu Casual" << endl;
        break;
    case 5:
        cout << "Sepatu Sport" << endl;
        break;

    default:
        cout << "Tidak terdapat dalam kategori !!" << endl;
    }
    cout << endl;

    //Menampilkan kategori yang cocok
    cout << " -- Kategori Pakaian -- " << endl;
    cout << "Kategori yang kamu pilih cocok untuk   : ";

    //Pengecekan opsi
    if ((clothes == 7 && pants == 4 && footwear == 1) || (clothes == 10 && pants == 4 && footwear == 1))
    {
        cout << "Pakaian Rumah" << endl;
    }
    else if ((clothes == 1 && pants == 3 && footwear == 2) || (clothes == 6 && pants == 3 && footwear == 2) || (clothes == 8 && pants == 3 && footwear == 2) || (clothes == 9 && pants == 3 && footwear == 2))
    {
        cout << "Pakaian Kantor" << endl;
    }
    else if ((clothes == 1 && pants == 3 && footwear == 2) || (clothes == 3 && pants == 3 && footwear == 2) || (clothes == 6 && pants == 3 && footwear == 2) || (clothes == 9 && pants == 3 && footwear == 2) || (clothes == 11 && pants == 3 && footwear == 2))
    {
        cout << "Pakaian Pesta" << endl;
    }
    else if ((clothes == 1 && pants == 1 && footwear == 4) || (clothes == 2 && pants == 1 && footwear == 4) || (clothes == 4 && pants == 1 && footwear == 4) || (clothes == 5 && pants == 1 && footwear == 4) || (clothes == 7 && pants == 1 && footwear == 4) || (clothes == 8 && pants == 1 && footwear == 4))
    {
        cout << "Pakaian Kuliah" << endl;
    }
    else if ((clothes == 5 && pants == 2 && footwear == 5) || (clothes == 5 && pants == 4 && footwear == 5) || (clothes == 7 && pants == 2 && footwear == 5) || (clothes == 7 && pants == 4 && footwear == 5))
    {
        cout << "Pakaian Olahraga" << endl;
    }
    else if ((clothes == 1 && pants == 1 && footwear == 1) || (clothes == 1 && pants == 1 && footwear == 4) || (clothes == 1 && pants == 4 && footwear == 1) || (clothes == 1 && pants == 4 && footwear == 4) || (clothes == 2 && pants == 1 && footwear == 1) || (clothes == 2 && pants == 1 && footwear == 4) || (clothes == 2 && pants == 4 && footwear == 1) || (clothes == 2 && pants == 4 && footwear == 4) || (clothes == 4 && pants == 1 && footwear == 1) || (clothes == 4 && pants == 1 && footwear == 4) || (clothes == 4 && pants == 4 && footwear == 1) || (clothes == 4 && pants == 4 && footwear == 4) || (clothes == 5 && pants == 1 && footwear == 1) || (clothes == 5 && pants == 1 && footwear == 4) || (clothes == 5 && pants == 4 && footwear == 1) || (clothes == 5 && pants == 4 && footwear == 4) || (clothes == 7 && pants == 1 && footwear == 1) || (clothes == 7 && pants == 1 && footwear == 4) || (clothes == 7 && pants == 4 && footwear == 1) || (clothes == 7 && pants == 4 && footwear == 4) || (clothes == 8 && pants == 1 && footwear == 1) || (clothes == 8 && pants == 1 && footwear == 4) || (clothes == 8 && pants == 4 && footwear == 1) || (clothes == 8 && pants == 4 && footwear == 4))
    {
        cout << "Pakaian Hangout" << endl;
    }
    else if ((clothes == 2 && pants == 1 && footwear == 3) || (clothes == 2 && pants == 2 && footwear == 3) || (clothes == 4 && pants == 1 && footwear == 3) || (clothes == 4 && pants == 2 && footwear == 3))
    {
        cout << "Pakaian Camping" << endl;
    }
    else
    {
        cout << "Tidak Terdapat dalam Kategori !!" << endl;
    }

    cout << endl;

    //Mengulang dari awal
    cout << "Ingin mengulang kembali ? (Y/N)";
    cin >> lagi;

    if (lagi == 'y' || lagi == 'Y')
    {
        goto awal;
    }
    if (lagi == 'n' || lagi == 'N')
    {
        goto selesai;
    }

    //method selesai
selesai:
    cout << endl;

    return 0;
}