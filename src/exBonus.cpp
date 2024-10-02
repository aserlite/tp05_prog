#include <iostream>
using std::cout;
using std::endl;

int U(int n);
int V(int n);

int U(int n) {
    if (n == 0) return 1;
    return 3 * U(n - 1) + 2 * V(n - 1);
}

int V(int n) {
    if (n == 0) return 2;
    return 2 * V(n - 1) + U(n - 1) + 1; 
}

int main() {
    cout << "Les dix premiers termes de la suite U sont : ";
    for (int i = 0; i < 10; ++i) {
        cout << U(i) << " ";
    }
    cout << endl;

    cout << "Les dix premiers termes de la suite V sont : ";
    for (int i = 0; i < 10; ++i) {
        cout << V(i) << " ";
    }
    cout << endl;

    return 0;
}
