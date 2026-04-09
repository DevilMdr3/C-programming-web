#include <stdio.h>
#include <string.h>
// Define a structure for Book
struct Book {
    int bookID;
    char title[100];
    float price;
};
int main() {
    FILE *fptr;
    struct Book book;
    int N;
    // Ask user for the number of books
    printf("Enter the number of books: ");
    scanf("%d", &N);
    // Open the binary file "book.dat" for writing
    fptr = fopen("book.dat", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
 // Input book information and write to the file
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &book.bookID);
        getchar();  // To consume newline character left by previous input
        printf("Enter Book Title: ");
        fgets(book.title, sizeof(book.title), stdin);
        book.title[strcspn(book.title, "\n")] = 0;  // Remove newline character
        printf("Enter Book Price: ");
        scanf("%f", &book.price);

        // Write the book details to the file
        fwrite(&book, sizeof(struct Book), 1, fptr);
    }
 // Close the file after writing
    fclose(fptr);

    // Open the binary file "book.dat" for reading
    fptr = fopen("book.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Display the titles of books with price < 1000
    printf("\nBooks with price less than 1000:\n");
    while (fread(&book, sizeof(struct Book), 1, fptr)) {
        if (book.price < 1000) {
            printf("Book Title: %s\n", book.title);
        }
    }
    // Close the file after reading
    fclose(fptr);

    return 0;
}
