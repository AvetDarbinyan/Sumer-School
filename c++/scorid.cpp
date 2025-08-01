#include <iostream>

void scor() {
    int n = 0;

    while (true) {
        std::cout << "Ներմուծեք գնահատականը (0-100), կամ -1՝ դուրս գալու համար: ";
        std::cin >> n;

        if (n == -1) {
            break;  // դուրս գալու պայման
        }

        if (n < 0 || n > 100) {
            std::cout << "Սխալ մուտք, գրեք 0-100 սահմանում։\n";
        } else if (n < 60) {
            std::cout << "Դասանիշ՝ F\n";
        } else if (n < 70) {
            std::cout << "Դասանիշ՝ D\n";
        } else if (n < 80) {
            std::cout << "Դասանիշ՝ C\n";
        } else if (n < 90) {
            std::cout << "Դասանիշ՝ B\n";
        } else {
            std::cout << "Դասանիշ՝ A\n";
        }
    }
}

int main() {
    scor();
    return 0;
}

