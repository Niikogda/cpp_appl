#include <iostream>

const double pi = 3.14;

int main() {
    double L;
    double R, S;

    std::cout << "enter L: ";
    std::cin >> L;

    R = L / (2 * pi);
 
    S = pi * R * R;

    std::cout << "s: " << S << std::endl;

    return 0;
}
