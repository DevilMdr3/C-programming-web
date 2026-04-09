#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1000
int main() {
    FILE *inputFile, *outputFile;
    char line[MAX_LINE_LENGTH];
       // Open the input file for reading
    inputFile = fopen("input2.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }
    // Open the output file for writing
    outputFile = fopen("output2.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening the output file.\n");
        fclose(inputFile);
        return 1;
    }
 // Read each line from the input file
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        // Remove occurrences of "hello" and "world"
        char *pos;
                // Remove "hello"
        while ((pos = strstr(line, "hello")) != NULL) {
            strcpy(pos, pos + 5);  // Shift the content after "hello" to remove it
        }
        // Remove "world"
        while ((pos = strstr(line, "world")) != NULL) {
            strcpy(pos, pos + 5);  // Shift the content after "world" to remove it
        }
        // Write the modified line to the output file
        fputs(line, outputFile);
    }
    // Close the files
    fclose(inputFile);
    fclose(outputFile);
    printf("The words 'hello' and 'world' have been deleted and saved to 'output2.txt'.\n");
    return 0;
}
