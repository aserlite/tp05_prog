#include <iostream>

int pangramme(std::string& a);

int pangramme(std::string& a) {
    for( char l = 'a'; l<='z'; ++l) {
        if (a.find(l) == std::string::npos) {
            std::cout << "Pas un pangramme" << std::endl;
            return false;
        }
    }
    std::cout << "pangramme" << std::endl;
    return true;
}

int main() {
    std::string input;
    std::cin >> input;
    pangramme(input);
    return 0;
}