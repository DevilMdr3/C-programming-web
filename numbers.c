#include <stdio.h>
int main() {
    FILE *fptr1, *fptr2, *fptr3;
    int N, num;
    // Open "Number.txt" in write mode to store numbers
    fptr1 = fopen("Number.txt", "w");
    if (fptr1 == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
printf("Enter the number of elements: ");
    scanf("%d", &N);
    // Input N numbers and write to "Number.txt"
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        fprintf(fptr1, "%d\n", num); // Write each number to the file
    }
    fclose(fptr1); // Close the file after writing
    // Open "Number.txt" in read mode
    fptr1 = fopen("Number.txt", "r");
    if (fptr1 == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
 fptr2 = fopen("Positive.txt", "w");
    if (fptr2 == NULL) {
        printf("Error opening Positive.txt!\n");
        return 1;
    }
    // Open "Negative.txt" in write mode to store negative numbers
    fptr3 = fopen("Negative.txt", "w");
    if (fptr3 == NULL) {
        printf("Error opening Negative.txt!\n");
        return 1;
    }
    // Read numbers from "Number.txt" and write to corresponding files
    while (fscanf(fptr1, "%d", &num) != EOF) {
        if (num >= 0) {
            fprintf(fptr2, "%d\n", num); // Write positive numbers to Positive.txt
        } else {
            fprintf(fptr3, "%d\n", num); // Write negative numbers to Negative.txt
        }
    }
    // Close all files
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    printf("Positive and negative numbers have been separated into 'Positive.txt' and 'Negative.txt'.\n");
    return 0;
}
