// Lab_03_3.cpp
// < �������� ���� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������

	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
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