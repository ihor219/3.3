// Lab_03_3.cpp
// < Горбатий Ігор >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент

	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= 0)
		y = -6 * R * x - 36 * R;
	else
		if (0 < x && x <= R)
			y = sqrt(R * R - x * x);
		else
			if (R < x && x <= 2 * R)
				y = sqrt(x * x + 4 * R * x - 3 * R * R);
			else
				y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}