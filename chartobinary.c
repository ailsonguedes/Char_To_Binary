#include <stdio.h>

char binary[9];

void charToBinary(char c) {
    //char binary[9]; // Array to store binary representation
    sprintf(binary, "%08b", c); // Convert character to binary
    printf("%s\n", binary); // Print binary representation
}

int main() {
    char inputChar;
    
    printf("Digite o caracter desejado: ");
    scanf("%c", &inputChar); //charToBinary('B'); // Test function with character 'A'
    
    charToBinary(inputChar);

    return 0;
}

