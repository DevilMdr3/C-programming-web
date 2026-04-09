#include<stdio.h>
int main(){
    FILE *file=fopen("a.txt","r");
    if(file==NULL){
    printf("Error opening file.\n");
    return 1;
    }
    fseek(file,5,SEEK_END);
    printf("Moved to position:%ld\n",ftell(file));
    fclose(file);
    return 0;
}
