#include <iostream>
#include <string>

std::string xorBinaryStrings(std::string a, std::string b) {
    std::string result = "";

    for (size_t i = 0; i < a.length(); i++) {
        result += (a[i] == b[i]) ? '0' : '1';
    }

    return result;
}

int main() {
    std::string num1, num2;
    std::cin >> num1 >> num2;  // Input two binary numbers as strings

    std::string output = xorBinaryStrings(num1, num2);
    std::cout << output << std::endl;

    return 0;
}
