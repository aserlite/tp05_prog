#include <iostream>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;

int min_maj(string a);

int min_maj(string a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32;
        }
    }
    cout << "Mis en maj/min : " << a << endl;
    return true;
}

int voyelles(string val);

int voyelles(string val) {
    string voyelles = "aeiouy";
    int counter = 0;
    for (int i = 0; i < val.length(); i++) { 
        if (voyelles.find(val[i]) != std::string::npos) {
            counter++;
        }
    }
    cout << "Nombre de voyelles : " << counter << endl;
    return counter;
}

int compter_mots(const string& chaine);

int compter_mots(const string& chaine) {
    std::istringstream iss(chaine);
    string mot;
    int compteur = 0;
    while (iss >> mot) {
        compteur++;
    }
    cout << "Nombre de mots : " << compteur << endl;
    return compteur;
}

int reverse(const string& chaine);

int reverse(const string& chaine){
    string new_chain;
    for(int i = chaine.length(); i >= 0; i--){
        new_chain = new_chain + chaine[i];
    }
    cout << new_chain << endl;
    return true;
}

int entier(string chaine);

int entier(string chaine){
    if (chaine.empty()) return false;
    for (char c : chaine) {
        if (!isdigit(c) && c != '-' && c != '+'){
            cout << chaine << " n'est pas un nombre entier." << endl; 
            return false;
        }
    }

    cout << chaine << " est un nombre entier." << endl;
    return true;
}

int main() {
    const string test = "atestTESTA v";
    const string testB = "150";
    min_maj(test);
    voyelles(test);
    compter_mots(test);
    reverse(test);
    entier(testB);
    return 0;
}