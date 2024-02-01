#include <stdio.h>

void charToBinary(char c) {
    char binary[9]; // Array to store binary representation
    sprintf(binary, "%08b", c); // Convert character to binary
    printf("%s\n", binary); // Print binary representation
}

int main() {
    charToBinary('B'); // Test function with character 'A'
    return 0;
}

