#include <iostream>
using namespace std;

void persegipanjang();

main(){
    persegipanjang();
}

void persegipanjang(){
    int luas, panjang, lebar;
    cout << "Luas Persegi Panjang\n" << endl;
    cout << "Masukan Panjang = "; 
	cin >> panjang;
    cout << "Masukan Lebar = "; 
	cin >> lebar;
    luas = panjang*lebar;
    cout << "Luas Persegi Panjang tersebut adalah = " << luas << endl;
 }
