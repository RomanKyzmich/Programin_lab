
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKR");
	int marker = 0;
	float lim_a, lim_b, lim_a2, lim_b2, delta_t, t, w;
	cout << "Почткове значення аргументу:";
	cin >> t;
	cout << "Крок зміни аргументу:";
	cin >> delta_t;
	cout << "Ліва межа першого рівняння";
	cin >> lim_a;
	cout << "Права межа першого рівняння";
	cin >> lim_b;
	cout << "Ліва межа другого рівняння";
	cin >> lim_a2;
	cout << "Права межа другого  рівняння";
	cin >> lim_b2;
	cout << "|Номер точки|" << "Значення аргументу|" << "Значення функції|" << endl;
	if (lim_a <= t <= lim_b) {
		for (t; t < lim_b; t += delta_t)
		{
			marker++;
			w = t + cos(t);
			cout << "|   " << marker << "       |" << t << "               |" << w << "          |" << endl;
		}
		
	}
	else if (lim_a2 < t<= lim_b2) {
		for (t; t < lim_b2; t += delta_t)
		{
			marker++;
			w = atan(t + log(t));
			cout << "|   " << marker << "       |" << t << "               |" << w << "          |"  << endl;
		}
	}
	else {
		cout << "Значення неналежить області визначення функції";
	}



}

