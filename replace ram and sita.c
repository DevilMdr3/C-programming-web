#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1000
int main() {
    FILE *inputFile, *outputFile;
    char line[MAX_LINE_LENGTH];
    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }
    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening the output file.\n");
        fclose(inputFile);
        return 1;
    }
 // Read each line from the input file
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        // Replace "ram" with "shyam"
        char *pos = line;
        while ((pos = strstr(pos, "ram")) != NULL) {
            strcpy(pos, "shyam");
            pos += 5;  // Move past the word "shyam"
        }
        // Replace "sita" with "gita"
        pos = line;
        while ((pos = strstr(pos, "sita")) != NULL) {
            strcpy(pos, "gita");
            pos += 4;  // Move past the word "gita"
        }
        // Write the modified line to the output file
        fputs(line, outputFile);
    }
    // Close the files
    fclose(inputFile);
    fclose(outputFile);
    printf("Words 'ram' and 'sita' have been replaced and saved to 'output.txt'.\n");
    return 0;
}
