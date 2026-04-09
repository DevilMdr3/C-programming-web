#include<stdio.h>
int main() {

FILE *file = fopen("a.txt", "w");

if (file == NULL) {

printf("Error opening the file.\n");

return 1;

}

fputc('A', file); // Write the character 'A'

fclose(file);

return 0;
}
