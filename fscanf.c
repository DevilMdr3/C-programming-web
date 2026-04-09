#include<stdio.h>
int main(){
    FILE *file =fopen("Hello.txt","r");
    if (file == NULL){
        printf("Error opening the file.\n");
        return 1;
        }
    int num;
    while(fscanf(file,"%d",&num)!=EOF){
    printf("%d\n",num);
    }
    fclose(file);
    return 0;
}
