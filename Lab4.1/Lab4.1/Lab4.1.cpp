
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKR");
	const int value = 5;
	string sutudent[value];
	float informathion[value];
	float math[value];
	float physics[value];
	float programing[value];
	int ser[value];
	for (int i = 0; i < value; i++) {
		cout << "Ведiть прiзвище  студента: ";
		cin >> sutudent[i];
		cout << "Ведiть оцiнку з iнформатику " << i <<" студенту";
		cin >> informathion[i];
		cout << "Ведiть оцiнку з вища математика " << i << " студенту";
		cin >> math[i];
		cout << "Ведiть оцiнку з фiзики " << i << " студенту";
		cin >> physics[i];
		cout << "Ведiть оцiнку з програмування " << i << " студенту";
		cin >> programing[i];
		ser[i] = (informathion[i] + math[i] + physics[i] + programing[i]) / 4;
	}

	cout << "|Номер|" << "Прiзвище|" << "Iнформатика|" << "Вища математика|" << "Фiзика|" << "Програмування|" << "Середнє значення|"<<endl;
	for (int i = 0; i < value; i++) {
		cout << "---------------------------------------------------------------------------------------" << endl;
	cout <<" |   " << i <<" |"  << sutudent[i] << "    |"   << informathion[i] << "        |" << math[i] << "              |" << physics[i] << "     |" << programing[i] << "            |" << ser[i] << "               |"<<"\t" << endl;
		cout << "---------------------------------------------------------------------------------------" << endl;
	}

}

