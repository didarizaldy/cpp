#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double f(double x)
{
	return (exp(-x) - x);
}
int main()
{
	double y[100], a, b, e, y1, y2, xr, y3;
	int n, i = 0;

	cout << "Nilai batas bawah = ";
	cin >> a;
	cout << "Nilai batas atas = ";
	cin >> b;
	cout << "Nilai toleransi = ";
	cin >> e;
	cout << "Masukkan iterasi ke - ";
	cin >> n;
	y1 = f(a);
	y2 = f(b);

	if (y1 * y2 > 0)
		cout << "Akar Persamaan Tidak Ditemukan\n";
	else
	{
		i <= n;
		while (i <= n)
		{
			xr = ((y2 * a) - (y1 * b)) / (y2 - y1);
			y[i] = f(xr);
			y3 = f(xr);
			if (y[i] * y1 < 0)
			{
				b = xr;
				y2 = f(xr);
			}
			else
			{
				a = xr;
				y1 = f(xr);
			}
			i++;
			if (fabs(b - a) <= e || i > (n - 1))
				break;
		}
		cout << "Akar persamaan adalah : " << xr << endl;
	}
}
