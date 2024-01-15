#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;

    std::ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    std::string line;

    while (std::getline(inputFile, line)) {
        ++lineCount;

        charCount += line.length(); 

        std::istringstream iss(line);
        std::string word;

        while (iss >> word) {
            ++wordCount;
        }
    }

    std::cout << "Number of characters: " << charCount << std::endl;
    std::cout << "Number of words: " << wordCount << std::endl;
    std::cout << "Number of lines: " << lineCount << std::endl;

    inputFile.close();

    return 0;
}
