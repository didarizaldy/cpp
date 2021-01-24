#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int i,n;
	float rata, jumlah;
	int data[10];
	jumlah=0;
	
	cout<<"Masukkan jumlah array = ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Masukkan data ke -->> "<<i+1<<" = " ;
		cin>>data[i];
		
		jumlah=jumlah+data[i];
	}
	rata=jumlah/n;
	
	cout<<"Jadi, jumlah ke "<<i<<" data diatas adalah = "<<jumlah<< endl;
	cout<<"Dan, rata-rata ke "<<i<<" data diatas adalah = "<<rata;
	
	getch ();
	return 0;
}
