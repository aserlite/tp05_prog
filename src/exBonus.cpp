#include <iostream>

int U(int n);

int V(int n);

int U(int n) {
    if (n == 0) return 1;
    for (size_t i = 1; i < n; i++)
    {
        
    }
    
    return 3 * U(n - 1) + 2 * V(n - 1);
}

int V(int n) {
    if (n == 0) return 2;
    return 2 * V(n - 1) + U(n);
}

int main() {
    std::cout << "Les dix premiers termes de la suite U sont : ";
    for (int i = 0; i < 10; ++i) {
        std::cout << U(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Les dix premiers termes de la suite V sont : ";
    for (int i = 0; i < 10; ++i) {
        std::cout << V(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}