#include<stdio.h>
int main(){
    FILE *file =fopen("C:\\Users\\sugam\\OneDrive\\Desktop\\programming\\Hello.txt","r");
    if (file == NULL){
        printf("Error opening the file.\n");
        return 1;
    }
    char ch;
    while((ch=fgetc(file))!=EOF){
        putchar(ch);
    }
    fclose(file);
    return 0;
}
