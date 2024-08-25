#include <iostream>

int countSetBits(int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    int a, b;
    std::cout << "Enter the values of 'a' and 'b': ";
    std::cin >> a >> b;

    int result = a & b;
    int setBits = countSetBits(result);

    std::cout << "The total number of set bits in (a & b) is: " << setBits << std::endl;

    return 0;
}
