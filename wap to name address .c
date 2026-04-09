#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 2
// Define student structure
struct Student {
    char name[50];
    char address[100];
    int roll_no;
    char email[50];
};
int main() {
    FILE *fptr;
    struct Student students[MAX_STUDENTS];
    int i;
    // Open file in write mode
    fptr = fopen("college.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
printf("Enter details of 2 students:\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // Read full name
        printf("Address: ");
        scanf(" %[^\n]", students[i].address);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Email: ");
        scanf(" %[^\n]", students[i].email);
        // Write record to file
        fprintf(fptr, "%s,%s,%d,%s\n", students[i].name, students[i].address, students[i].roll_no,students[i].email);
    }
    fclose(fptr);
  fptr = fopen("college.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nStudents from Kathmandu:\n");
    char line[300], name[50], address[100], email[50];
    int roll_no;

    // Read file line by line
    while (fgets(line, sizeof(line), fptr)) {
        // Parse data from file
        sscanf(line, "%49[^,],%99[^,],%d,%49[^\n]", name, address, &roll_no, email);
                // Check if student is from "Kathmandu"
        if (strcmp(address, "Kathmandu") == 0) {
            printf("%s\n", name);
        }
    }
    fclose(fptr); // Close file
    return 0;
}

