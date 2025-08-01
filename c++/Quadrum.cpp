#include <iostream>
#include <cmath>

int testGQ() {
    int a = 0;
    int b = 0;
    int c = 0;
    int x1 = 0;
    int x2 = 0;
    int D = 0;
    int x1temp = 0;
    int x2temp = 0;

    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    std::cout << "Enter expected x1: ";
    std::cin >> x1;
    std::cout << "Enter expected x2: ";
    std::cin >> x2;

    D = b * b - 4 * a * c;

    if (D > 0) {
        x1temp = (-b + sqrt(D)) / (2 * a);
        x2temp = (-b - sqrt(D)) / (2 * a);
        if (x1temp == x1 && x2temp == x2) {
            std::cout << "true\n";
        } else {
            std::cout << "false\n";
        }
    } else if (D == 0) {
        x1temp = -b / (2 * a);
        std::cout << "x = " << x1temp << "\n";
    } else {
        std::cout << "No real roots\n";
    }

    return 0;
}

int main() {
    testGQ();
    return 0;
}

