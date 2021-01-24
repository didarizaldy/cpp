#include <bits/stdc++.h>
using namespace std;

int main()
{
	int angka[] = {3, 5, 1, 7, 4, 6, 9, 2};
	int n = sizeof(angka) / sizeof(angka[0]);

	cout << "Bilangan asal : ";
	for (int &n : angka)
	{
		cout << n << " ";
	}
	cout << endl;
	sort(angka, angka + n, greater<int>());

	cout << "Hasil terurut : ";
	for (int i = 0; i < n; ++i)
		cout << angka[i] << " ";

	return 0;
}