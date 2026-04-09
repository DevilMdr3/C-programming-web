#include <stdio.h>

int main() {

FILE *fp;

char text[100];

fp = fopen("Hello.txt", "r"); // Open file in read mode

if (fp == NULL) {

printf("File not found!\n");

return 1;

}

while (fgets(text, sizeof(text), fp) != NULL) { // Read line by line

printf("%s", text);

}

fclose(fp);

return 0;

}
