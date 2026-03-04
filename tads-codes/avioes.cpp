// avioes.cpp
#include <iostream>

int main() {
    int C, P, F;

    std::cin >> C >> P >> F;

    if (P >= C * F) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    return 0;
}