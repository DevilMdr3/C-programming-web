#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char word[50];
    int n, i;

    // Open file in append mode
    fptr = fopen("a.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Ask user for number of words
    printf("Enter the number of words: ");
    scanf("%d", &n);
 printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf(" %49s", word); // Read a word (max 49 characters)

        // Check if the word starts with 'a' or 'A'
        if (tolower(word[0]) == 'a') {
            fprintf(fptr, "%s\n", word); // Append to file
        }
    }

    // Close the file
    fclose(fptr);

    printf("Words starting with 'a' have been stored in 'a.txt'.\n");

    return 0;
}
