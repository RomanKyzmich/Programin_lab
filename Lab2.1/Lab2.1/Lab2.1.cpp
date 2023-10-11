

#include <iostream>
using namespace std;
int main()
{
	const double e = 2.17;
	setlocale(LC_ALL, "UKR");
	double x, y;
	cout << "Ведіть x:";
	cin >> x;
	if (1 <= x) {
		y = pow(e, -(abs(x)));
	}
	else if (abs(x)<1)
	{
		y = log10(sqrt(1 - pow(x, 2)));
	}
	else if (x <= -1) {
		y = atan(x);
	}
	else {
		cout << "Число не входить в область вичначення даної функії";
	}
	cout << "Значення функції y:" << y;
}

