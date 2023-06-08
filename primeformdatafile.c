#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }

    return 1;  // Prime number
}

int main() {
    FILE *inputFile, *outputFile;
    int number;

    // Open input file
    inputFile = fopen("Num.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open output file
    outputFile = fopen("Prime.txt", "w");
    if (outputFile == NULL) {
        printf("Error creating output file.\n");
        fclose(inputFile); // Close input file before returning
        return 1;
    }

    // Read numbers from input file, check if prime, and write to output file
    while (fscanf(inputFile, "%d", &number) == 1) {
        if (isPrime(number)) {
            fprintf(outputFile, "%d\n", number);
        }
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Prime numbers extracted and written to Prime.txt.\n");

    return 0;
}
