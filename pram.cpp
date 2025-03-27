#include <iostream>
#include <cmath>

int main() {
    int sideALength;
    int sideBLength;

    std::cout << "Введите длину стороны a: ";
    std::cin >> sideALength;
    std::cout << "Введите длину b: ";
    std::cin >> sideBLength;

    int calculatePerimeter(int lengthA, int lengthB) {
        return 2 * (lengthA + lengthB);
    }

    int calculateArea(int lengthA, int lengthB) {
        return lengthA * lengthB;
    }

    double calculateDiagonal(int lengthA, int lengthB) {
        return std::sqrt(lengthA * lengthA + lengthB * lengthB);
    }

    std::cout << "Периметр: " << calculatePerimeter(sideALength, sideBLength) << std::endl;
    std::cout << "Площадь: " << calculateArea(sideALength, sideBLength) << std::endl;
    std::cout << "Диагональ: " << calculateDiagonal(sideALength, sideBLength) << std::endl;

    return 0;
}