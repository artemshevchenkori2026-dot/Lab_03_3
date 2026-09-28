// Lab_03_3.cpp
// Шевченко Артем
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 29

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний аргумент
    double y; // результат обчислення виразу

    cout << "x = "; cin >> x;

    // Розгалуження в повній формі
    if (x < -7)
        y = 0;
    else if (x < -3)
        y = x + 7;
    else if (x < -2)
        y = 4;
    else if (x < 2)
        y = x * x;
    else if (x < 4)
        y = -2 * x + 8;
    else
        y = 0;

    cout << endl;
    cout << "y = " << y << endl;

    return 0;
}