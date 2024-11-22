#include <iostream>  
#include <cmath>     
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    // �������� ������� a, b, c, x
    double a, b, c, x, F1, F2;
    cout << "������ �������� a: ";
    cin >> a;
    cout << "������ �������� b: ";
    cin >> b;
    cout << "������ �������� c: ";
    cin >> c;
    cout << "������ �������� x: ";
    cin >> x;

    // ����� 1: �������� �����
    F1 = (x < 0 && b != 0) ? (-a * x * x + b) :
        (x > 0 && b == 0) ? (x / (x - c) + 5.5) :
        (x / (x - c));

    // ����� 2: ���� �����
    if (x < 0 && b != 0) {
        F2 = -a * x * x + b;
    }
    else if (x > 0 && b == 0) {
        F2 = x / (x - c) + 5.5;
    }
    else {
        F2 = x / (x - c);
    }

    // ��������� ����������
    cout << "�������� F (�������� �����): " << F1 << endl;
    cout << "�������� F (���� �����): " << F2 << endl;

    // ��������, �� ��������� ����������
    if (F1 == F2) {
        cout << "���������� ���������." << endl;
    }
    else {
        cout << "���������� �� ���������." << endl;
    }

    return 0;
}
