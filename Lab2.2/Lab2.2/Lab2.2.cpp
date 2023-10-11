

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKR");
    int marker = 0;;
    float y, t, delta_t,lim_a, lim_b;
    cout << "Початкове значення агрументу:";
    cin >> lim_a;
    cout << "Кінцеве значення агрументу:";
    cin >> lim_b;
    cout << "Крок зміни агрументу:";
    cin >> delta_t;
    cout << "|Номер точки|" << "Значення аргументу|" << "Значення функції|"<<endl;
    for (t = lim_a; t < lim_b; t += delta_t)
    {
        marker++;
        y = (pow(cos(pow(t, 2)), 3))/1.5*t+2;
        cout << "|   " << marker << "       |" << t <<"               |" << y << "          |" << endl;
    }

}

