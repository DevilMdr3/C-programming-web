#include<stdio.h>
int main(){
    FILE *file =fopen("123.txt","r");
    if (file == NULL){
        printf("Error opening the file.\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer,sizeof(buffer),file)){
    printf("%s",buffer);
    }
    fclose(file);
    return 0;
}
