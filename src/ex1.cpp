#include <iostream>

int somme(const int& a, const int& b);

int somme(const int& a, const int& b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 10;
    std::cout << "Somme de x et y: " << somme(x, y) << std::endl;
    std::cout << "Somme de 3 et 7: " << somme(3, 7) << std::endl;

    return 0;
}