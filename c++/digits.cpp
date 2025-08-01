#include <iostream>

int main() {
    int number = 0;
    int sum = 0;

    std::cout << "մւտքագրեք թիւ ";
    std::cin >> number;

    sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

    std::cout << "արդյունքը " << sum <<std::endl;

    return 0;

}
