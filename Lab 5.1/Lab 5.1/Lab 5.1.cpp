#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outputFile("students.txt");
    setlocale(LC_ALL, "UKR");
    if (outputFile.is_open()) {
        int numberOfStudents;
        cout << "Введіть кількість студентів: ";
        cin >> numberOfStudents;

        for (int i = 0; i < numberOfStudents; i++) {
            string name, birthdate;
            cout << "Введіть ім'я студента " << i + 1 << ": ";
            cin.ignore();
            getline(cin, name);
            cout << "Введіть дату народження  для студента " << i + 1 << ": ";
            cin >> birthdate;

            
            if (birthdate.substr(3, 2) == "06" || birthdate.substr(3, 2) == "07" || birthdate.substr(3, 2) == "08") {
                outputFile << name << " " << birthdate << endl;
            }
        }

        outputFile.close();
        cout << "Файл students.txt успішно створений." << endl;
    }
    else {
        cerr << "Помилка відкриття файлу для запису." << endl;
    }

    return 0;
}



