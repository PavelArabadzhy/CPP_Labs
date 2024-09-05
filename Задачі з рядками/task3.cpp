#include <iostream>
#include <string>
#include <unordered_map>

std::string transliterate(const std::string& str) {
    std::unordered_map<char, std::string> translitMap = {
        {'А', "A"}, {'Б', "B"}, {'В', "V"}, {'Г', "H"}, {'Ґ', "G"},
        {'Д', "D"}, {'Е', "E"}, {'Є', "Ye"}, {'Ж', "Zh"}, {'З', "Z"},
        {'И', "Y"}, {'І', "I"}, {'Ї', "Yi"}, {'Й', "Y"}, {'К', "K"},
        {'Л', "L"}, {'М', "M"}, {'Н', "N"}, {'О', "O"}, {'П', "P"},
        {'Р', "R"}, {'С', "S"}, {'Т', "T"}, {'У', "U"}, {'Ф', "F"},
        {'Х', "Kh"}, {'Ц', "Ts"}, {'Ч', "Ch"}, {'Ш', "Sh"}, {'Щ', "Shch"},
        {'Ю', "Yu"}, {'Я', "Ya"}, {'а', "a"}, {'б', "b"}, {'в', "v"},
        {'г', "h"}, {'ґ', "g"}, {'д', "d"}, {'е', "e"}, {'є', "ye"},
        {'ж', "zh"}, {'з', "z"}, {'и', "y"}, {'і', "i"}, {'ї', "yi"},
        {'й', "y"}, {'к', "k"}, {'л', "l"}, {'м', "m"}, {'н', "n"},
        {'о', "o"}, {'п', "p"}, {'р', "r"}, {'с', "s"}, {'т', "t"},
        {'у', "u"}, {'ф', "f"}, {'х', "kh"}, {'ц', "ts"}, {'ч', "ch"},
        {'ш', "sh"}, {'щ', "shch"}, {'ю', "yu"}, {'я', "ya"}
    };

    std::string result;
    for (char ch : str) {
        if (translitMap.find(ch) != translitMap.end()) {
            result += translitMap[ch];
        } else {
            result += ch;
        }
    }

    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a text: ";
    std::getline(std::cin, text);

    std::string transliteratedText = transliterate(text);
    std::cout << "Transliterated text: " << transliteratedText << std::endl;

    return 0;
}






