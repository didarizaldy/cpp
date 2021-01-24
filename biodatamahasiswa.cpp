#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	char nama[50],jurusan[30],nim[10];
	cout<<"====Biodata Mahasiswa STT Duta Bangsa====\n";
	cout<<"Masukkan Nama Mahasiswa : ";
	cin.getline(nama,50);
	cout<<"Masukkan Nim : ";
	cin.getline(nim,10);
	cout<<"Masukkan Jurusan : ";
	cin.getline(jurusan,30);
	cout<<"\n\n\n";
	cout<<"Tampilan Biodata Mahasiswa \n";
	cout<<"Nama Mahasiswa : "<<nama;
	cout<<"\nNIM : "<<nim;
	cout<<"\nJurusan : "<<jurusan;
	cout<<"\nSTT Duta Bangsa";
	
	getch();
}
