#include <stdio.h>

int main() {

FILE *file = fopen("Hello.txt", "r");

if (file == NULL) {

printf("Error opening the file.\n");

return 1;

}

char ch;

while ((ch = fgetc(file)) != EOF) {

putchar(ch); // Print each character

}

fclose(file);

return 0;

}
