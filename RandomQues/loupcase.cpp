
#include <iostream>

int main() {
    char ch;
    
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        std::cout << "Lowercase letter." << std::endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        std::cout << "Uppercase letter." << std::endl;
    } else {
        std::cout << "Not a letter." << std::endl;
    }
    
    return 0;
}