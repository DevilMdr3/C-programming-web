#include<stdio.h>
int main(){
    FILE *file=fopen("a.txt","r");
    if(file==NULL){
    printf("Error opening file.\n");
    return 1;
    }
    fgetc(file);
    long position=ftell(file);
    printf("Current position:%ld\n",position);
    fclose(file);
    return 0;
}
