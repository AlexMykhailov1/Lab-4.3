// Lab4.3.cpp
//Михайлов Олександр
//Табуляція функції, заданої формулою: функція з параметрами
//варіант 19

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xfirst, xlast, dx, a, b, c, F;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xfirst = "; cin >> xfirst;
	cout << "xlast = "; cin >> xlast;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(7) << "F" << "       |" << endl;
	cout << "---------------------------" << endl;

	x = xfirst;
	while (x <= xlast) {
		if (x < 5 && b != 0)
			F = a * (x + 7) * (x + 7) - b;
		else
			if (x > 5 && b == 0)
				F = (x - c * b) / a * x;
			else
				F = x / c;
		cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << F << "    |" << endl;
		x += dx;
	}

	cout << "---------------------------" << endl;

	cin.get();
	return 0;
}
