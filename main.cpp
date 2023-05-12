#include <iostream>

int main() {
    double R1, R2, R3;
    double R0;

    std::cout << "Enter R1, R2, R3: ";
    std::cin >> R1 >> R2 >> R3;

    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    std::cout << "R0: " << R0 << std::endl;

    return 0;
}
