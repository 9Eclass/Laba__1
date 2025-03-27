#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления периметра прямоугольника
int calculatePerimeter(int lengthA, int lengthB) {
    return 2 * (lengthA + lengthB);
}

// Функция для вычисления площади прямоугольника
int calculateArea(int lengthA, int lengthB) {
    return lengthA * lengthB;
}

// Функция для вычисления диагонали прямоугольника
double calculateDiagonal(int lengthA, int lengthB) {
    return std::sqrt(lengthA * lengthA + lengthB * lengthB);
}

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

int main() {
    int choice;

    cout << "Выберите фигуру для расчета:\n";
    cout << "1. Прямоугольник\n";
    cout << "2. Треугольник\n";
    cout << "Введите номер выбора (1 или 2): ";
    cin >> choice;

    if (choice == 1) {
        int sideALength, sideBLength;

        cout << "Введите длину стороны a: ";
        cin >> sideALength;
        cout << "Введите длину стороны b: ";
        cin >> sideBLength;

        cout << "Периметр: " << calculatePerimeter(sideALength, sideBLength) << endl;
        cout << "Площадь: " << calculateArea(sideALength, sideBLength) << endl;
        cout << "Диагональ: " << calculateDiagonal(sideALength, sideBLength) << endl;

    } else if (choice == 2) {
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
            cout << "Треугольник с такими сторонами не существует." << endl;
        }

    } else {
        cout << "Неверный выбор. Пожалуйста, введите 1 или 2." << endl;
    }

    return 0;
}
