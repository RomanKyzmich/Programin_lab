
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter y: ";
    cin >> x;
    y = asin(x / (1 + cos(x)));
    //y = 0.3 * log10(exp(-x)) + (atan(x) - pow(sin(x), 2)) / (4 * sqrt(log(abs(x - 1))));
    cout << "Result x: "<< y;
    return 0;
}


