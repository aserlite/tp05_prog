#include <iostream>
#include <vector>

void fibonacci(int n, std::vector<int>& sequence);

void fibonacci(int n, std::vector<int>& sequence) {
    if (n <= 0) return;
    if (sequence.size() == 0) {
        sequence.push_back(0);
    } else if (sequence.size() == 1) {
        sequence.push_back(1);
    } else {
        int size = sequence.size();
        sequence.push_back(sequence[size - 1] + sequence[size - 2]);
    }
    fibonacci(n - 1, sequence);
}

int main() {
    int n;

    std::cout << "Veuillez saisir un entier positif: ";
    std::cin >> n;

    if (std::cin.fail() || n <= 0) {
        std::cerr << "Erreur: Veuillez saisir un entier positif valide." << std::endl;
        return 1;
    }

    std::vector<int> sequence;
    fibonacci(n, sequence);

    std::cout << "Les " << n << " premiers termes de la suite de Fibonacci sont: ";
    for (int i = 0; i < sequence.size(); ++i) {
        std::cout << sequence[i];
        if (i < sequence.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}