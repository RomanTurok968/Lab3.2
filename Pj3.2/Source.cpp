#include <iostream>  
#include <cmath>     
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    // Введення значень a, b, c, x
    double a, b, c, x, F1, F2;
    cout << "Введіть значення a: ";
    cin >> a;
    cout << "Введіть значення b: ";
    cin >> b;
    cout << "Введіть значення c: ";
    cin >> c;
    cout << "Введіть значення x: ";
    cin >> x;

    // Спосіб 1: Скорочені умови
    F1 = (x < 0 && b != 0) ? (-a * x * x + b) :
        (x > 0 && b == 0) ? (x / (x - c) + 5.5) :
        (x / (x - c));

    // Спосіб 2: Повні умови
    if (x < 0 && b != 0) {
        F2 = -a * x * x + b;
    }
    else if (x > 0 && b == 0) {
        F2 = x / (x - c) + 5.5;
    }
    else {
        F2 = x / (x - c);
    }

    // Виведення результатів
    cout << "Значення F (скорочені умови): " << F1 << endl;
    cout << "Значення F (повні умови): " << F2 << endl;

    // Перевірка, чи збігаються результати
    if (F1 == F2) {
        cout << "Результати збігаються." << endl;
    }
    else {
        cout << "Результати не збігаються." << endl;
    }

    return 0;
}
