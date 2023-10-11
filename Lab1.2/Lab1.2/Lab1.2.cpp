#include <math.h>
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "UKR");
    const float e = 2.17;
	float x, y, a, b, p;
	cout << "Ведiть a:";
	cin >> a;
	cout << "Ведiть b:";
	cin >> b;
	y = 1 / b;
	x = pow(a, 2) + pow(b, 2);
	p = (pow(e, -x * y) + 4) / (sin(x * y));
	cout << "Результат x:" << x << endl;
	cout << "Результат y:" << y << endl;
	cout << "Результат p:" << p << endl;
	return 0;

}

