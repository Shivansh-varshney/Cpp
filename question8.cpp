#include <iostream>
#include <fstream>

int main() {
    // Input and output file names
    std::string inputFileName = "input.txt";
    std::string outputFileName = "output.txt";

    // Open the input file
    std::ifstream inputFile(inputFileName);

    // Check if the input file is open
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file: " << inputFileName << std::endl;
        return 1; // Return error code
    }

    // Open the output file
    std::ofstream outputFile(outputFileName);

    // Check if the output file is open
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file: " << outputFileName << std::endl;
        inputFile.close(); // Close the input file
        return 1; // Return error code
    }

    // Variables to keep track of the number of characters copied
    int charactersCopied = 0;
    char ch;

    // Read from the input file and write to the output file
    while (inputFile.get(ch)) {
        outputFile.put(ch);
        charactersCopied++;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    // Display the number of characters copied
    std::cout << "Number of characters copied: " << charactersCopied << std::endl;

    return 0;
}
