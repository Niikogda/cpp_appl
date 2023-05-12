#include <iostream>

int main() {
    double v, t, a;
    double S;

    std::cout << " v: ";
    std::cin >> v;
    std::cout << " t: ";
    std::cin >> t;
    std::cout << " a: ";
    std::cin >> a;

    S = v * t + (a * t * t) / 2;

    std::cout << "distance: " << S << std::endl;

    return 0;
}
