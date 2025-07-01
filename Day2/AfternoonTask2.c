#include <iostream>
#include <iomanip> // për manipulim formatimi

int main() {
    char c = 'A';
    int i = 123;
    float f = 3.14f;
    double d = 3.141592653589793;

    std::cout << "char:   " << c
              << " (madhësi: " << sizeof(c) << " bajt)\n";
    std::cout << "int:    " << i
              << " (madhësi: " << sizeof(i) << " bajt)\n";
    std::cout << std::fixed << std::setprecision(7);
    std::cout << "float:  " << f
              << " (madhësi: " << sizeof(f) << " bajt)\n";
    std::cout << std::setprecision(15);
    std::cout << "double: " << d
              << " (madhësi: " << sizeof(d) << " bajt)\n";

    return 0;
}

