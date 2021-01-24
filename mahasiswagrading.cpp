#include <iostream>

using namespace std;
int main()
{
    int input;
    char nama[50],jurusan[30],nim[10];
    cout<<"====Biodata Mahasiswa STT Duta Bangsa====\n";
	cout<<"Masukkan Nama Mahasiswa : ";
	cin.getline(nama,50);
	cout<<"Masukkan Nim : ";
	cin.getline(nim,10);
	cout<<"Masukkan Jurusan : ";
	cin.getline(jurusan,30);
    cout << "Masukkan Nilai : ";
    cin >>input;
	cout<<"\n\n\n";
	cout<<"Tampilan Biodata Mahasiswa \n";
	cout<<"Nama Mahasiswa : "<<nama;
	cout<<"\nNIM : "<<nim;
	cout<<"\nJurusan : "<<jurusan;
	cout<<"\n";
    if ((input>=85)and(input<=100))
    {
        cout << "Anda Mendapatkan Nilai A";
    }
    else if ((input<=84)and(input>=70))
    {
        cout << "Anda Mendapatkan Nilai B";
    }
    else if ((input<=69)and(input>=40))
    {
        cout << "Anda Mendapatkan Nilai C";
    }
    else if ((input<=39)and(input>=20))
    {
        cout << "Anda Mendapatkan Nilai D";
    }
    else if ((input<=20)and(input>=0))
    {
        cout << "Anda Mendapatkan Nilai E";
    }
    else
    {
        cout << "Masukkan Angka dari 0-100";
    }
    cout<<"\nSTT Duta Bangsa";
    
    return 0;
}
