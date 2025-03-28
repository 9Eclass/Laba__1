#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления периметра треугольника
double Perimeter(double a, double b, double c) {
    return a + b + c;
}

// Функция для вычисления площади по формуле Герона
double Area(double a, double b, double c) {
    double s = Perimeter(a, b, c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c)); 
}

// Функция для проверки равнобедренности
bool Ravno(double a, double b, double c) {
    return (a == b || b == c || a == c);
}
// Основа
int main() {
    double a, b, c;

    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = Perimeter(a, b, c);
        double area = Area(a, b, c);
        bool ravno = Ravno(a, b, c);

        cout << "Периметр треугольника: " << perimeter << endl;
        cout << "Площадь треугольника: " << area << endl;
        cout << "Треугольник равнобедренный: " << (ravno ? "Да" : "Нет") << endl;
    } else {
        cout << "Треугольник с такими сторонами не существует.(Без отрицательный чисел)" << endl;
    }

    return 0;
}
