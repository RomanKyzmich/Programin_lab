
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "UKR");
	float sum =0, ser = 0;
	const int b_val = 10;
	int marker = 0;
	float B[b_val] = { 6.3, 0, -8,3, 7.2, 6.1, -4.2, 5.7, 6.4, 5.6};

	for (int i = 0; i < b_val; i++) {
		if (i % 2 != 0) {
			if (B[i] > 0) {
				marker++;
				sum += B[i];
				ser += B[i];
			}
		}
	}
	ser /= marker;
	cout << "Сума(" << sum << ")Кiлькiсть( " << marker<<")"<<endl;
	cout << "Середнє значення невiдємних елементiв масиву що стоять на непарних мiстях " <<ser;
}


