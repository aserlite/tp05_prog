#include <iostream>

double moyenne(const int* tableau, int taille);

double moyenne(const float* tableau, int taille);

double moyenne(const int* tableau, int taille) {
    if (taille == 0) return 0.0;
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        somme += tableau[i];
    }
    return static_cast<double>(somme) / taille;
}

double moyenne(const float* tableau, int taille) {
    if (taille == 0) return 0.0;
    float somme = 0.0;
    for (int i = 0; i < taille; ++i) {
        somme += tableau[i];
    }
    return somme / taille;
}

int main() {
    int tableau_entiers[] = {1, 2, 3, 4, 5};
    float tableau_flottants[] = {1.2f, 2.7f, 3.1f, 4.3f, 5.9f};

    int taille_entiers = sizeof(tableau_entiers) / sizeof(tableau_entiers[0]);
    int taille_flottants = sizeof(tableau_flottants) / sizeof(tableau_flottants[0]);

    std::cout << "Moyenne des entiers: " << moyenne(tableau_entiers, taille_entiers) << std::endl;
    std::cout << "Moyenne des flottants: " << moyenne(tableau_flottants, taille_flottants) << std::endl;

    return 0;
}