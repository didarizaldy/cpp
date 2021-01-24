#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 8;

void printArray(array<int, arraySize> &angka)
{
	cout << "Bilangan asal: ";
	for (int &a : angka)
	{
		cout << a << " ";
	}
	cout << endl;
}

int main()
{
	array<int, arraySize> angka = {3, 5, 1, 7, 4, 6, 9, 2};

	printArray(angka);

	cout << std::endl;

	sort(angka.begin(), angka.end());
	printArray(angka);

	cin.get();
	return 0;
}
