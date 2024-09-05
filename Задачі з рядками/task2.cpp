#include <iostream>
#include <string>
#include <regex>

bool isValidPhoneNumber(const std::string& str) {
    std::regex phonePattern(R"(\s*\+38-\d{10})");
    return std::regex_search(str, phonePattern);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isValidPhoneNumber(input)) {
        std::cout << "The string starts with a valid phone number." << std::endl;
    } else {
        std::cout << "The string does not start with a valid phone number." << std::endl;
    }

    return 0;
}





