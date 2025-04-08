#include <iostream>
#include "./classes/RightAngled.h"

using namespace std;

int main() {
    cout << "\n=== Демонстрація класу Triangle ===\n";

    Triangle t1;
    cout << "Введіть сторони трикутника (a b c): ";
    cin >> t1;

    cout << "\nВведений трикутник: " << t1 << "\n";

    double alpha, beta, gamma;
    t1.getAngles(alpha, beta, gamma);
    cout << "Кути: " << alpha << "°, " << beta << "°, " << gamma << "°\n";

    cout << "\nЗміна сторони a на 5: ";
    t1.setA(5);
    cout << t1 << "\n";

    cout << "Зміна всіх сторін на 6, 8, 10: ";
    t1.setSides(6, 8, 10);
    cout << t1 << "\n";

    cout << "\nДемонстрація операторів:\n";
    cout << "Оригінальний трикутник: " << t1 << "\n";
    Triangle t2 = t1++;
    cout << "Після t2 = t1++: t1=" << t1 << ", t2=" << t2 << "\n";
    t2 = ++t1;
    cout << "Після t2 = ++t1: t1=" << t1 << ", t2=" << t2 << "\n";

    // RightAngled
    cout << "\n=== Демонстрація класу RightAngled ===\n";

    RightAngled r1;
    cout << "Введіть катети прямокутного трикутника (a b): ";
    cin >> r1;

    cout << "\nПрямокутний трикутник: " << r1 << "\n";
    cout << "Площа: " << r1.getArea() << "\n";

    cout << "\n=== Розміри класів ===\n";
    cout << "Triangle size: " << sizeof(Triangle) << " байт\n";
    cout << "RightAngled size: " << sizeof(RightAngled) << " байт\n";

    return 0;
}
