#include <iostream>
#include <string>
#include <cctype>

std::string preprocessString(const std::string& str) {
	std::string result;
	bool wasSpace = false;

	for (char ch : str) {
		if (ispunct(ch)) {
			ch = ' ';
		}
		if (isspace(ch)) {
			if (!wasSpace) {
				result += ' ';
				wasSpace = true;
			}
		} else {
			result += ch;
			wasSpace = false;
		}
	}

	return result;
}

int main() {
	std::string text;
	std::cout << "Enter a text: ";
	std::getline(std::cin, text);

	std::string processedText = preprocessString(text);
	std::cout << "Processed text: " << processedText << std::endl;

	return 0;
}




