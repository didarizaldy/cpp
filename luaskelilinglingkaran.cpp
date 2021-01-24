#include <iostream>

using namespace std;
main()
{
	float jari2, luas, keliling;
	cout << "Masukkan jari-jari :";
	cin >> jari2;
	luas = 3.14 * jari2 * jari2;
	keliling = 2 * 3.14 * jari2;
	cout << "\n\n";
	cout << "Luas : " << luas;
	cout << "\nKeliling : " << keliling;

	return 0;
}
