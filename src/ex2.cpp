#include <iostream>
#include <limits>

unsigned long long factorielle_recursive(int n);

unsigned long long factorielle_iterative(int n);

unsigned long long factorielle_recursive(int n) {
    if (n <= 1) return 1;
    return n * factorielle_recursive(n - 1);
}

unsigned long long factorielle_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    std::cout << "Veuillez saisir un entier positif: ";
    std::cin >> n;

    if (std::cin.fail() || n < 0) {
        std::cerr << "Erreur: Veuillez saisir un entier positif valide." << std::endl;
        return 1;
    }

    if (n > 20) { // 20! est le plus grand factoriel qui tient dans un unsigned long long
        std::cerr << "Erreur: Nombre trop grand pour calculer la factorielle." << std::endl;
        return 1;
    }

    unsigned long long result = factorielle_iterative(n);

    std::cout << "La factorielle de " << n << " est " << result << std::endl;

    return 0;
}