#include <iostream>

using namespace std;

int main ()
{
	float kecepatan , jarak ,waktu;

	cout<<"Kecepatan (dalam meter) : ";
	cin>>kecepatan;
	cout<<"Waktu (dalam detik) : ";
	cin>>waktu;
	jarak=kecepatan*waktu;
	cout<<"Jarak (meter/detik): "<<jarak<<endl;

    return 0;
}